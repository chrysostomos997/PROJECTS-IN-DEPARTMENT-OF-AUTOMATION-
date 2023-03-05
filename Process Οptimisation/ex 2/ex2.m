%% 2  
s=tf('s');
g=1/(s^2+4*s+20)
gss=ss(g)
A=gss.a; 
B=gss.b; 
C=gss.c;
D=gss.d;



%find error (without integral)
sp=1;
gcl=feedback(g,1)
[y,t]=step(sp*gcl); 
sserror=abs(sp-y(end))*100
step(sp*gcl)

%add integral
gcli=feedback((1/s)*g,1)
[y,t]=step(sp*gcli); 
sserror=abs(sp-y(end))*100
step(sp*gcli)


%Augmented system
Aa=[A,[0;0;];-C,0]
Ba=[B;0;]
K=place(Aa,Ba,[-4 -5 -7]) %P[-4 -5 -7] ,P[-8 -10 -12], P[-18 -20 -25]
