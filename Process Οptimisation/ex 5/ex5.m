s=tf('s');
g=30/(s^2+2*s+50)
gss=ss(g)
A=gss.a; 
B=gss.b; 
C=gss.c;
D=gss.d;

%%diakritopoihsh
ts=0.1;
sysd=c2d(gss,ts);
step(gss)
hold on 
step(sysd)  %%  step for system discretization



[Ad,Bd,Cd,Dd]=ssdata(sysd);

e=length(Ad);  
Aa=[Ad zeros(e,1); Cd*Ad 1]; %% augmented matrix Ad,Bd,Cd
Ba=[Bd ; Cd*Bd];
Ca=[zeros(1,e) 1];
sysa=ss(Aa,Ba,Ca,0,0.1);

r=1; %% steady state
Np=20; %defining prediction
Nc=5; Nc1=1; Nc2=10; Nc3=20; %defining control

for i=1:Np
    F(i,:)=Ca*Aa^i;
    phi(i,:)=Ca*Aa^(i-1)*Ba;
end

for i=2:Nc
    phi(:,i)=[zeros(i-1,1);phi(1:Np-i+1,1)];
end

xk=[0.1; 0.1; 0.1;];
Rs=1*ones(Np,1);
R=10*eye(Nc);
Du=inv(phi'*phi +R)*phi'*(Rs-F*xk)

%find  Kx,Ky
Kmpc=inv(phi'*phi+R)*phi'*F;
Kx=Kmpc(1,[1 2]);
Ky=Kmpc(1,3);