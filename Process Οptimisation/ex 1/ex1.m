%matrix
A=[0 1; -5 -2];
B=[0;1];
C=[1 0];
D=0;

%Transfer function open-loop
g=ss(A,B,C,D) 
gs=tf(g)

%controllability
Mc=[B A*B]

%pole placement
P=[-5 -6];
K=place(A,B,P)


%open-closed loop free response 
x0=[2;2];
gcl=ss(A-B*K,B,C,D) %closed loop
figure
initial(g,gcl,x0)

%change poles [-1,-2]
P2=[-1 -2];
K2=place(A,B,P2)
gcl2=ss(A-B*K2,B,C,D) %closed loop
figure
initial(g,gcl,gcl2,x0)

%find U0 after U0=M^-1 * yd me M=-C*A^-1*B
M=-C*inv(A)*B;
yd=1;
u0=inv(M)*yd


%INTZEMPEIS CHRYSOSTOMOS