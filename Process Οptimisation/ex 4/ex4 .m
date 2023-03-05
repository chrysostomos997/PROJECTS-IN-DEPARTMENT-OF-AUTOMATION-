s=tf('s');
g=1/(s^2+2*s+25)
gss=ss(g)
A=gss.a; 
B=gss.b; 
C=gss.c;
D=gss.d;


% NOISE
Qn=1;
Rn=0.5;

%%
%%LQG
[kest,L,p]=kalman(ss(A,[B,[1;1]],C,0),Qn,Rn);
L=lqe(A,B,C,Qn,Rn);


%%LQI
Q=diag([1,1,100])
[Ka,s,p]=lqi(gss,Q,Rn);
Kz=Ka(1,3);
K=Ka(1,[1,2]);

%%
%%LQR
Qx=[10,0;0,10];
R=1;
[K,S,P]=lqr(A,B,Qx,R);