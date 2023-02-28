%%INTZEMPEIS CHRYSOSTOMOS
%%ERGASIA 8 ERWTIMA A 

x=0:0.5:5;
y=[0.2 80 150 200 230 270 310 340 380 460 530];


a=polyfit(x,y,3);
%%  GIA T1=0.75 KAI DT1=0.7
t1=0.75;
dt1=0.7;
f1=polyval(a,t1+dt1);
f2=polyval(a,t1);
f3=polyval(a,t1-dt1);
fdd=(f1-f2)/dt1
bdd=(f2-f3)/dt1
cdd=(f1-f3)/(2*dt1)

%%pragmatiki lisi 
u=polyder(a);
ut=polyval(u,t1)

%%sfalmata  GIA T1=0.75 KAI DT1=0.7
efdd=abs((ut-fdd)/ut)*100
ebdd=abs((ut-bdd)/ut)*100
ecdd=abs((ut-cdd)/ut)*100

%%  GIA T2=3.1 KAI DT1=0.7
t2=3.1;
f1=polyval(a,t2+dt1);
f2=polyval(a,t2);
f3=polyval(a,t2-dt1);
fdd=(f1-f2)/dt1
bdd=(f2-f3)/dt1
cdd=(f1-f3)/(2*dt1)
%%pragmatiki lisi 
u=polyder(a);
ut=polyval(u,t2)
%%sfalmata GIA T2=3.1 KAI DT1=0.7
efdd=abs((ut-fdd)/ut)*100
ebdd=abs((ut-bdd)/ut)*100
ecdd=abs((ut-cdd)/ut)*100

%%  GIA T3=4.25 KAI DT1=0.7
t3=4.25;
f1=polyval(a,t3+dt1);
f2=polyval(a,t3);
f3=polyval(a,t3-dt1);
fdd=(f1-f2)/dt1
bdd=(f2-f3)/dt1
cdd=(f1-f3)/(2*dt1)
%%pragmatiki lisi 
u=polyder(a);
ut=polyval(u,t3)
%%sfalmata GIA T3=4.25 KAI DT1=0.7
efdd=abs((ut-fdd)/ut)*100
ebdd=abs((ut-bdd)/ut)*100
ecdd=abs((ut-cdd)/ut)*100

%%  GIA T1=0.75 KAI DT2=0.1
t1=0.75;
dt2=0.1;
f1=polyval(a,t1+dt2);
f2=polyval(a,t1);
f3=polyval(a,t1-dt2);
fdd=(f1-f2)/dt2
bdd=(f2-f3)/dt2
cdd=(f1-f3)/(2*dt2)
%%pragmatiki lisi 
u=polyder(a);
ut=polyval(u,t1)
%%sfalmata GIA T1=0.75 KAI DT2=0.1
efdd=abs((ut-fdd)/ut)*100
ebdd=abs((ut-bdd)/ut)*100
ecdd=abs((ut-cdd)/ut)*100

%%  GIA T2=3.1 KAI DT2=0.1
t2=3.1;
f1=polyval(a,t2+dt2);
f2=polyval(a,t2);
f3=polyval(a,t2-dt2);
fdd=(f1-f2)/dt2
bdd=(f2-f3)/dt2
cdd=(f1-f3)/(2*dt2)
%%pragmatiki lisi 
u=polyder(a);
ut=polyval(u,t2)

%%sfalmata GIA T2=3.1 KAI DT2=0.1
efdd=abs((ut-fdd)/ut)*100
ebdd=abs((ut-bdd)/ut)*100
ecdd=abs((ut-cdd)/ut)*100

%%  GIA T2=4.25 KAI DT2=0.1
t3=4.25;
f1=polyval(a,t3+dt2);
f2=polyval(a,t3);
f3=polyval(a,t3-dt2);
fdd=(f1-f2)/dt2
bdd=(f2-f3)/dt2
cdd=(f1-f3)/(2*dt2)
%%pragmatiki lisi 
u=polyder(a);
ut=polyval(u,t3)

%%sfalmata GIA T2=4.25 KAI DT2=0.1
efdd=abs((ut-fdd)/ut)*100
ebdd=abs((ut-bdd)/ut)*100
ecdd=abs((ut-cdd)/ut)*100


%%  ERWTIMA B. METHODOS ROMBERG 

n1=1;
n2=2;
n4=4;
n8=8;
dx1=2/n1; %(2-0)/n1
dx2=2/n2;
dx4=2/n4;
dx8=2/n8;
x1=0:dx1:2;
x2=0:dx2:2;
x4=0:dx4:2;
x8=0:dx8:2;
y1= x1.*exp(-x1.^2);
y2= x2.*exp(-x2.^2);
y4= x4.*exp(-x4.^2);
y8= x8.*exp(-x8.^2);
I11=trapz(x1,y1)
I12=trapz(x2,y2)
I13=trapz(x4,y4)
I14=trapz(x8,y8)
I21=I12+(I12-I11)/3
I22=I13+(I13-I12)/3
I23=I14+(I14-I13)/3
I31=I22+(I22-I21)/15
I32=I23+(I23-I22)/15
I41=I32+(I32-I31)/15
