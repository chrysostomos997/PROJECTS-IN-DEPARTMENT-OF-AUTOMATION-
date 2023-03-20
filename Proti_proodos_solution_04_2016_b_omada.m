%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%1ος Τρόπος
s=tf('s');
g=(1)/(s*(0.1*s+1)) %Σ.Μ.Α.Β.
%2ος Τρόπος
num=1;
den=conv([1 0],[0.1 1]);
g=tf(num,den) %Σ.Μ.Α.Β.
% g_zpk=zpk(g) Μορφή παρενθέσεων
rlocus(g) % Γεωμετρικός τόπος ριζών
figure(2)
margin(g) %Διάγραμμα bode
K1=6.94; %gia ζ=0.6
Ess=0 % Λόγω του ελευθερου ολοκληρωτη στον παρονομαστή (σκέτο s)
Esv=1/K1
gcl=feedback(K1*g,1) %Σ.Μ.Κ.Β.
pole(gcl) %Εύρεση πόλων κλειστού συστήματος
figure(3)
step(gcl)
bandwidth(gcl) %Εύρος ζώνης
%2ος τρόπος για εύρος ζώνης:
figure(4)
bode(gcl) % gia magnitude -3db pairno bandwidth

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

f=5;
T=1/f;
gz=c2d(g,T)
rlocus(gz)
figure(2)
margin(gz)
K1=3; %gia ζ=0.6
Ess=0
Esv=1/K1
gzcl=feedback(K1*gz,1)
pole(gzcl)
figure(3)
step(gzcl)
bandwidth(gzcl)
figure(4)
bode(gzcl)
%%
f=50;
T=1/f;
gz=c2d(g,T)
rlocus(gz)
figure(2)
margin(gz)
K1=6.1; %gia ζ=0.6
gzcl=feedback(K1*gz,1)
pole(gzcl)
figure(3)
step(gzcl)
bandwidth(gzcl)
figure(4)
bode(gzcl)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

g=1/((s+1)*(s+0.1))
% num=1;
% den=conv([1 1],[1 0.1]);
% g=tf(num,den)
figure(5)
rlocus(g)
K=1.11; % gia ζ=0.5
gcl=feedback(K*g,1)
figure(6)
step(gcl)
%Πρέπει να έχω 10 με 20 δείγματα στο χρόνο ανόδου
%Ο χρόνος ανόδου εδώ είναι 1.49~1.5 άρα 1.5/20 με 1.5/10
T=0.1; %100ms
gz=c2d(g,T)
figure(7)
rlocus(gz)
gzcl=feedback(K*gz,1)
figure(8)
step(gzcl)
%%
T=0.15; %150ms
gz=c2d(g,T)
figure(8)
rlocus(gz)
K=0.95; %Για ζ=0.5 στο διακριτό πεδίο
gzcl=feedback(K*gz,1)
figure(9)
step(gzcl)