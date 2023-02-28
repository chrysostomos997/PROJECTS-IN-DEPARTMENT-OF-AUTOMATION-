
========================================
%%ASKISI1
%gia na mporesw na dilwsw ti sinartisi 
syms x
f(x)=3*(x^5)-2*(x^3)+6*x-8;
xa=1;
xb=2;
for i=1:16
m1=(xa+xb)/2;
%% elegxw kathe fora gia to prosimo kai allazw ta oria analoga
if f(m1)*f(xa)<0
xb=m1;
else
xa=m1;
end
end
% edw dilwnw x kai y gia to grafima , opou to x ksekinaei apo 0 me vima
% 0.01 ews 2 

x=[0:0.01:2];
y=f(x);
plot(x,y)
===============================================
%%askisi 2 
syms x;
%% me to exp () dilwnw to e^x 
f(x)=x*exp(x)-x^2-4;

xa=1;
xb=2;

%% gia sfalma 0.00001 elegxw an einai megalitero apo tin apoliti timi xb-xa
while abs(xb-xa)<2*0.00001
yn=(ya+yb)/2;
if f(yn)*f(ya)<0
yb=yn;
else
ya=yn;
end
end
%%edw exoume to apotelesma diladi ti riza tis eksiswseis pou einai vgainei
%%to 1.0604 to idio me tin alli eksiswsi 
m1
x2=[0:0.01:2];
y2=f(x);
plot(x2,y2)
%% gia na deiksei kai ta 2 grafimata etsi opws zitaei i askisi to ena katw apo to allo( egw ta exw kanei ksexwrista panw)
%%prepei na kanw ta parakatw alla na allaksw to onoma tou x stin mia
%%sinartisi wste na min emfanizei to idio. GIA PARADEIGMA:

subplot(2,2,1),plot(x,y) , subplot(2,2,3),plot(x2,y2)



