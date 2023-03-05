s=tf('s');
g=1/(s^2+2*s+25)
gss=ss(g)
A=gss.a; 
B=gss.b; 
C=gss.c;
D=gss.d;

%% augmented system
Aa=[A,[0;0;];-C,0]
Ba=[B;0;]
K=place(Aa,Ba,[-4 -5 -7])


%%poles observer
obsepoles=[-20 -25]; % x5 
L=place(A',C',obsepoles)'; 


