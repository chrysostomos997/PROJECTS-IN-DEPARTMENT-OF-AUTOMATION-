%%INTZEMPEIS CHRYSOSTOMOS
%% for N=5
a=0;
b=2;
n=5;
dx=(b-a)/n;
x=a:dx:b; %
y=exp(-x.^2);
t=0;

for i=1:n
    t=t+(dx/2)*(y(i)+y(i+1));
end

plot(x,y,'-r*'), grid on ,xlabel('x'),ylabel('y'),title(' trapezoidal rule for 5 ')


%TRAPZ
I=trapz(x,y)


%INT
syms z
f=exp(-z^2);
I2=int(f,a,b);
double(I2)



%% for N=10
a=0;
b=2;
n=10;
dx=(b-a)/n;
x=a:dx:b; % or x=linspace(a,b,n+1)
y=exp(-x.^2);
t=0;
for i=1:n
    t=t+(dx/2)*(y(i)+y(i+1));
end

plot(x,y,'-r*'), grid on ,xlabel('x'),ylabel('y'),title('trapezoidal rule for 10')



%TRAPZ
I=trapz(x,y)

%INT
syms z
f=exp(-z^2);
I2=int(f,a,b);
double(I2)


%% for N=20
a=0;
b=2;
n=20;
dx=(b-a)/n;
x=a:dx:b; % or x=linspace(a,b,n+1)
y=exp(-x.^2);
t=0;
for i=1:n
    t=t+(dx/2)*(y(i)+y(i+1));
end

plot(x,y,'-r*'), grid on ,xlabel('x'),ylabel('y'),title('trapezoidal rule for 20')



%TRAPZ
I=trapz(x,y)

%INT
syms z
f=exp(-z^2);
I2=int(f,a,b);
double(I2)




%% SIMPSON for 5
a=0;
b=2;
n=5;
dx=(b-a)/n;
x=a:dx:b;  % or x=linspace(a,b,n+1)
y=exp(-x.^2);
t=0;
for i=1:2:n-1
    t=t+(dx/3)*(y(i)+4*y(i+1)+y(i+2));
end

plot(x,y,'-r*'), grid on ,xlabel('x'),ylabel('y'),title(' SIMPSON rule for 5 ')

%% for 10
a=0;
b=2;
n=10;
dx=(b-a)/n;
x=a:dx:b; % or x=linspace(a,b,n+1)
y=exp(-x.^2);
t=0;
for i=1:2:n-1
    t=t+(dx/3)*(y(i)+4*y(i+1)+y(i+2));
end

plot(x,y,'-r*'), grid on ,xlabel('x'),ylabel('y'),title('SIMPSON rule for 10 ')

%%for 20
a=0;
b=2;
n=20;
dx=(b-a)/n;
x=a:dx:b; % or x=linspace(a,b,n+1)
y=exp(-x.^2);
t=0;
for i=1:2:n-1
    t=t+(dx/3)*(y(i)+4*y(i+1)+y(i+2));
end

plot(x,y,'-r*'), grid on ,xlabel('x'),ylabel('y'),title('SIMPSON rule for 20')

%%I  F(X) --> 0?x?2
x=[0:0.02:2];
y=exp(-x.^2);
plot(x,y),grid on ,xlabel('x'),ylabel('y'),title('graph (0?x?2)')

