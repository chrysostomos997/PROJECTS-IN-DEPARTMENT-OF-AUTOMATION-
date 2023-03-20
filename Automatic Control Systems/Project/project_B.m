%% 1i askisi
% dilosi smab
s=tf('s');
g=3/(s*(s+3))

rlocus(g)

%gia Y<10% prepei na paro K=2.11
K=2.11

%euresi apokrisis gia K=2.11
step(feedback(g*K,1))

%paratiroume oti gia K=2.11 exo Y<10% alla mikroteros dynatos xronos einai
%2.36 sec (Ts=2.36sec). Emeis theloume Ts<1.5sec

% a erotima
c=(s+5)/(s+15)

%dimioyrgia neas smab me elegkti
gc=g*c
rlocus(gc)

%prepei K=16 gia Y<5.34%
K=16;
step(feedback(gc*K,1))
%edo vlepoume oti Y=9.74% kai Ts=1.23sec. ara ikanopoioume oles tis
%prodiagrafes. kai Tr=0.338sec

% b erotima
%tha kanoume diakritopoiisi me ti methodo tustin
%Xreiazomaste tin periodo digmatoleipsias
%tha tin vroume me empeiriko kanona. Tha xrisimopoihsoyme ton kanona toy
%bandwidth dld T=(2*pi)/(30*wb)

wb=bandwidth(feedback(gc*K,1))
T=(2*pi)/(30*wb) % empeirikos kanonas 20wb <= ws <= 40wb

%tha kanoume diakritopoiisi me ti methodo tustin
cz=c2d(c*K,T,'tustin')

%diakriti morfi arxikis s.m.
gz=c2d(g,T)
step(feedback(gz*cz,1))

%paratiroume oti Y=12.1%
%gia na to mioso tha kano diorthosi sto K

rlocus(gz*cz)
K1=0.75 %gia Y=5.74%
step(feedback(K1*gz*cz,1))

%Ara to neo K sunolika einai Kneo=K1*K=0.75*16=12

% g erotima
%lunontas sto xarti vriskoume Kd=0.8667 kai Kp=5.3333
Kd=0.8667; Kp=5.3333;

%allios pernoume tous typous sto matlab dld:
z=0.7; %talantoseis 5%
Ts=1.5;
% wn>4/(Ts*z) = 3.8 ara epilego ùn=4
wn=4;
M=3; p=3;
Kp=(wn^2)/M
Kd=(2*z*wn-p)/M
c=Kd*s+Kp
step(feedback(g*c,1))

%diakritopoiisi elegkti PD
wb=bandwidth(feedback(g*c,1))
T=(2*pi)/(30*wb)

%tha kanoume diakritopoiisi me ti methodo tustin
cz=c2d(c,T,'tustin')

%elegxos prodiagrafon gia ton diakrito pd
gz=c2d(g,T)
step(feedback(gz*cz,1))

%diakritopoiisi me BD
z=tf('z');
cz_bd=((Kp*T+Kd)*z-Kd)/(T*z)
step(feedback(gz*cz_bd,1))

% d erotima
T=0.2;
gz=c2d(g,T)
cz=c2d(c,T,'tustin')
step(feedback(gz*cz,1))

%Nai uparxei provlima. To sitima ginete astathes. Ara o elegktis den einai
%katallilos. Prepei na ginei apeutheias sxediasi elegti sto diakrito

gz_zpk=zpk(gz) % dinei tin s.m. se morfi rizon

%Meta apo prakseis sto xarti exoume smab(z) me elegkti
z=tf('z');
lz=(0.049604*(z+0.8192))/(z*(z-1))
rlocus(lz)

%gia Y=8.5% prepei K=a1=6.5
a1=6.5
a0=-0.5488*a1
cz_PD = (a1*z+a0)/z

%epalitheusi apotelesmaton diakritou PD
step(feedback(gz*cz_PD,1))

%% 2i askisi
% 1o erotima
s=tf('s');
M=10; p=5;
g=M/(s+p)
% Gia Y<5% pairno æ>0.7
z=0.8; %afino perithorio gia talantoseis
Ts=1;
%Ts=4/(æùn)
wn=4/(Ts*z)
Ki=(wn^2)/M
Kp=(2*z*wn-p)/M
c=(Kp*s+Ki)/s % elegktis h c=Kp+(Ki/s)
gcl=feedback(g*c,1)
step(gcl) %xronoi
wb=bandwidth(gcl) %euros zonis

%2o erotima
T=(2*pi)/(30*wb) %empeirikos kanonas 20ùb <= ùs <= 40ùb
cz=c2d(c,T,'tustin')

%diakritopoiisi me BD
z=tf('z');
cz_bd=((Kp+Ki*T)*z-Kp)/(z-1)

%3o erotima
gz=c2d(g,T)
gclz=feedback(gz*cz,1)
step(gcl,gclz)

%paratiroume oti i peridodos digmatolipsisas einai arketa kali. o elegktis
%ikanopoiei oles tis prodiagrafes kai stis 2 periptoseis synexes kai
%diakrito

%% 3i askisi
%gia tin 1i aksisi
s=tf('s');
z=tf('z');
g=3/(s*(s+3))
wb=bandwidth(feedback(g,1))
T=(2*pi)/(30*wb)
gz=c2d(g,T)
cz=(1/gz)*(1/(z-1)) %prepei gia na paro tin veltisti dunati apokrisi se 
%eisodo vathmida (dld elegktis deadbeat) na isxuei to eksis : 
%G(z)*C(z) = 1/(z-1) dld C(z)=1/[(z-1)*G(z)]

%gia epalitheusi apotelesmatos : minreal(gz*cz)

%gcl1=feedback(gz*cz,1)

%gia tin 2i askisi
g=10/(s+5)
wb=bandwidth(feedback(g,1))
T=(2*pi)/(30*wb)
gz=c2d(g,T)
cz=(1/gz)*(1/(z-1))

%gcl2=feedback(gz*cz,1)

%sugkrisi
%step(gcl1,gcl2)

%sxediasmos sto simulink
simulink