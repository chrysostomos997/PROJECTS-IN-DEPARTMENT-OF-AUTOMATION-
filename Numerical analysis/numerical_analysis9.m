%%  EULER  method
%% for N=2
x0=1;
y0=1;
y1(1)=y0;
xend=1.5;
N=2;
h1=(xend-x0)/N;
x=[x0:h1:xend]';
y1=zeros(N+1,1);


for i=1:N
fi=(x(i)*y1(i)+x(i)^4*exp(x(i)))/x(i)^2; % differential 
y1(i+1)=y1(i)+h1*fi;
x(i+1)=x(i)+h1;
y1(i+1)
end


%%for N=4
x0=1;
y0=1;
y2(1)=y0;
xend=1.5;
N=4;
h2=(xend-x0)/N;
x=[x0:h2:xend]';
y2=zeros(N+1,1);


for i=1:N
fi=(x(i)*y2(i)+x(i)^4*exp(x(i)))/x(i)^2;
y2(i+1)=y2(i)+h2*fi;
x(i+1)=x(i)+h2;
y2(i+1)
end


%%for N=10
x0=1;
y0=1;
y3(1)=y0;
xend=1.5;
N=10;
h3=(xend-x0)/N;
x=[x0:h3:xend]';
y3=zeros(N+1,1);


for i=1:N
fi=(x(i)*y3(i)+x(i)^4*exp(x(i)))/x(i)^2;
y3(i+1)=y3(i)+h3*fi;
x(i+1)=x(i)+h3;
y3(i+1)
end


%%for N=100
x0=1;
y0=1;
y4(1)=y0;
xend=1.5;
N=100;
h4=(xend-x0)/N;
x=[x0:h4:xend]';
y4=zeros(N+1,1);


for i=1:N
fi=(x(i)*y4(i)+x(i)^4*exp(x(i)))/x(i)^2;
y4(i+1)=y4(i)+h4*fi;
x(i+1)=x(i)+h4;
y4(i+1)
end


%%for N=1000
x0=1;
y0=1;
y5(1)=y0;
xend=1.5;
N=1000;
h5=(xend-x0)/N;
x=[x0:h5:xend]';
y5=zeros(N+1,1);


for i=1:N
fi=(x(i)*y5(i)+x(i)^4*exp(x(i)))/x(i)^2;
y5(i+1)=y5(i)+h5*fi;
x(i+1)=x(i)+h5;
y5(i+1)
end





%% RANGE KUTTA method
%for N=2

x0=1;
y0=1;
y6(1)=y0;
xend=1.5;
N=2;
h=(xend-x0)/N;
x=[x0:h:xend]';
y6=zeros(N+1,1);
for i=1:N
K1=(x(i)*y6(i)+x(i)^4*exp(x(i)))/x(i)^2;
xnew=x(i)+h;
ynew=y6(i)+K1*h;
K2=(xnew*ynew+xnew^4*exp(xnew))/xnew^2;
y6(i+1)=y6(i)+(1/2*K1+1/2*K2)*h;
y6(i+1)
end





%%for N=4

x0=1;
y0=1;
y7(1)=y0;
xend=1.5;
N=4;
h=(xend-x0)/N;
x=[x0:h:xend]';
y7=zeros(N+1,1);
for i=1:N
K1=(x(i)*y7(i)+x(i)^4*exp(x(i)))/x(i)^2;
xnew=x(i)+h;
ynew=y7(i)+K1*h;
K2=(xnew*ynew+xnew^4*exp(xnew))/xnew^2;
y7(i+1)=y7(i)+(1/2*K1+1/2*K2)*h;
y7(i+1)
end


%%for N=10

x0=1;
y0=1;
y8(1)=y0;
xend=1.5;
N=10;
h=(xend-x0)/N;
x=[x0:h:xend]';
y8=zeros(N+1,1);
for i=1:N
K1=(x(i)*y8(i)+x(i)^4*exp(x(i)))/x(i)^2;
xnew=x(i)+h;
ynew=y8(i)+K1*h;
K2=(xnew*ynew+xnew^4*exp(xnew))/xnew^2;
y8(i+1)=y8(i)+(1/2*K1+1/2*K2)*h;
y8(i+1)
end


%%for N=100

x0=1;
y0=1;
y9(1)=y0;
xend=1.5;
N=100;
h=(xend-x0)/N;
x=[x0:h:xend]';
y9=zeros(N+1,1);
for i=1:N
K1=(x(i)*y9(i)+x(i)^4*exp(x(i)))/x(i)^2;
xnew=x(i)+h;
ynew=y9(i)+K1*h;
K2=(xnew*ynew+xnew^4*exp(xnew))/xnew^2;
y9(i+1)=y9(i)+(1/2*K1+1/2*K2)*h;
y9(i+1)
end


%%for N=1000

x0=1;
y0=1;
y10(1)=y0;
xend=1.5;
N=1000;
h=(xend-x0)/N;
x=[x0:h:xend]';
y10=zeros(N+1,1);
for i=1:N
K1=(x(i)*y10(i)+x(i)^4*exp(x(i)))/x(i)^2;
xnew=x(i)+h;
ynew=y10(i)+K1*h;
K2=(xnew*ynew+xnew^4*exp(xnew))/xnew^2;
y10(i+1)=y10(i)+(1/2*K1+1/2*K2)*h;
y10(i+1)
end




%%compare table results

fprintf('step size     '),fprintf('euler method results        '),
fprintf('range kutta method results\n'),fprintf('%0.4f',h1),
fprintf('                '),fprintf('%0.4f',y1(end)),
fprintf('                               '),fprintf('%0.4f',y6(end)),
fprintf('\n'),
fprintf('%0.4f',h2),
fprintf('                '),fprintf('%0.4f',y2(end)),
fprintf('                               '),fprintf('%0.4f',y7(end))
fprintf('\n'),
fprintf('%0.4f',h3),
fprintf('                '),fprintf('%0.4f',y3(end)),
fprintf('                               '),fprintf('%0.4f',y8(end))
,fprintf('\n'),
fprintf('%0.4f',h4),
fprintf('                '),fprintf('%0.4f',y4(end)),
fprintf('                               '),fprintf('%0.4f',y9(end))
fprintf('\n'),
fprintf('%0.4f',h5),
fprintf('                '),fprintf('%0.4f',y5(end)),
fprintf('                               '),fprintf('%0.4f',y10(end))
fprintf('\n')





%% PLOT for N=4
subplot(2,2,1),plot(x,y2,'*r'),
hold on, 
plot(x,y2),title(' EULER method'),xlabel('x'),ylabel('y')

subplot(2,2,2),plot(x,y7,'*r')
hold on ,
plot(x,y7),title(' RANGE KUTTA method'),xlabel('x'),ylabel('y')

subplot(2,2,3),plot(x,y2,'*r')
hold on 
plot(x,y2)
hold on 
plot(x,y7,'*r')
hold on 
plot(x,y7),title('METHODS EULER-RANGE KUTTA'),xlabel('x'),ylabel('y')




