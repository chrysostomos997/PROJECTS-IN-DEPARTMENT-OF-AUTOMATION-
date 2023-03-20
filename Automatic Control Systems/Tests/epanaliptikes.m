%% Askisi 1
%1os tropos dilosis sinartisis metaforas
s=tf('s');
g=(1.25)/(s*(s+0.4)*(0.6*s+1))

%2os tropos dilosis sinartisis metaforas
num=1.25;
den=conv(conv([1 0],[1 0.4]),[0.6 1]);
g=tf(num,den)

%a erotima
rlocus(g)

%b erotima
figure(2)
margin(g)

%2os tropos gia b erotima
bode(g)

%c erotima
K=0.1; %gia overshoot <20%

%d erotima
Ess=0; %logo eleutherou olokliroti
Kv=(1.25*K)/0.4;
Esv=1/Kv

%e erotima
t=feedback(K*g,1)
poloi = pole(t)

%xroniki apokrisi
figure(3)
step(t)

%euros zonis wb
wb = bandwidth(t)

%% Askisi 2
%Dilosi kai eyresi periodon deigmatolipsias
w1=30*wb
w2=5*wb
T1=2*pi/w1
T2=2*pi/w2

%diakriti morfi sunartiseon metaforas
g1z=c2d(g,T1)
g2z=c2d(g,T2)

%erotima a
rlocus(g1z)
rlocus(g2z)

%erotima b
margin(g1z)
margin(g2z)

%erotima c
K1=0.088 % overshoot <20%
K2=0.0574 % overshoot <20%

%d erotima
Ess1=0; %logo eleutherou olokliroti
Kv1=(1.25*K1)/0.4;
Esv1=1/Kv1

Ess2=0; %logo eleutherou olokliroti
Kv2=(1.25*K2)/0.4;
Esv2=1/Kv2

%e erotima
tz1=feedback(K1*g1z,1)
tz2=feedback(K2*g2z,1)

poloi_1 = pole(tz1)
poloi_2 = pole(tz2)

%xroniki apokrisi
figure(3)
step(t,tz1,tz2)

%euros zonis wb
wb1 = bandwidth(tz1)
wb2 = bandwidth(tz2)

%% Askisi 3
s=tf('s')
g=10/(s+1)
rlocus(g)
zeta=1; %overshoot < 5% (me perithorio lathous)
Tset=2; % Tset = 4/zeta*wn
wn=4/(zeta*Tset)

%Eksisonontas ti geniki morfi X.E. 2ou vathmou me tin diki mas X.E.
%(paronomastis kleistoy sustimatos) vriskoume Kp kai Ki
Kp=0.3;
Ki=0.4;

%dilosi sunartisis metaforas elegkti sto sunexes pedio
c=(Kp*s+Ki)/s

% kleisto systima synexoys xronoy (epalitheusi)
t=feedback(c*g,1)
step(t)

%epilogi periodou deigmatolipsias
wb=bandwidth(t);
T = 2*pi/(30*wb); %20 me 40 fores to wb (emperikos kanonas)

%methodos tustin
cz_tustin = c2d(c,T,'tustin') %sinartisi metaforas elegkti C(z)

%methodos backward difference
%1os tropos dilosis elegkti sto diakrito
num = [Kp+Ki*T -Kp];
den = [1 -1];
c_bd = tf(num,den,T)

%2os tropos dilosis elegkti sto diakrito
z = tf('z');
c_bd = ((Kp+Ki*T)*z - Kp)/(z-1)

%sugkrisi xronikon apokriseon
gz=c2d(g,T); %diakriti morfi arxikou sustimatos
t_tustin=feedback(cz_tustin*gz,1) %kleisto sistima me tustin elegkti
t_bd=feedback(c_bd*gz,1) %kleisto sustima me backward differecne elegkti
step(t,t_tustin,t_bd)

%% Askisi 4
%a erotima
g=1/(s*(s+1))
T=0.5;
gz=c2d(g,T)
rlocus(gz)
K=0.41 %gia overshoot < 5%
zeta = 0.7;
wn = (0.1*pi)/T
tz1 = feedback(K*gz,1)
step(tz1)

%b erotima
cz=tf([1 -0.5],[1 -0.1],T)
gz_open = cz*gz;
rlocus(gz_open)
K=1.44; %gia overshoot <5%
zeta=0.7;
wn=1.05;
tz2=feedback(K*gz_open,1)
step(tz2)
%den ikanopoio tis prodiagrafes epomenos epilego mikrotero K apo rlocus
K=1.25
tz3=feedback(K*gz_open,1)
step(tz3)

gz_zpk = zpk(gz) %emfanizei se morfi rizon ti sunartisi metaforas
%meta apo mathimatikes prakseis kataligoume:
gz_open = 0.1065*tf([1 0.8467],[1 -1 0],T)
rlocus(gz_open)
a1 = 2.6; %euresi K apo rlocus gia Y<5% (K=a1)
a0 = -0.6065*a1
cz=tf([a1 a0],[1 0],T)
tz=feedback(cz*gz,1);
step(tz)

%% Askisi 5
g=1/(s*(s+1))
rlocus(g)
K=0.7; %gia Y<10%
t=feedback(K*g,1);
step(t)

%b erotima
c=(s+2)/(s+10);
rlocus(c*g)
K=10; % gia Y=6% (<10%)
t=feedback(K*c*g,1); 
step(t)

%diakritopoiisi elegkti
T=2*pi/(30*bandwidth(t))
cz=c2d(K*c,T,'tustin')
gz=c2d(g,T)
tz=feedback(cz*gz,1);
step(tz)
%diorthosi K
K1=0.8*K;
cz=c2d(K1*c,T,'tustin')
gz=c2d(g,T)
tz=feedback(cz*gz,1);
step(tz)

%c erotima
Kp=2.25;
Kd=1;
c=Kp+Kd*s
cz=c2d(c,T,'tustin')
tz=feedback(cz*gz,1);
step(tz)

%d erotima
T = 0.2
gz=c2d(g,T)
gz_zpk=zpk(gz)
gz_open = 0.018731*tf([1 0.9355],[1 -1 0],T)
rlocus(gz_open)
a1 = 15; %euresi K apo rlocus gia Y<10% (K=a1)
a0=-0.8187*a1;
cz=tf([a1 a0],[1 0],T)
tz=feedback(cz*gz,1);
step(tz)
