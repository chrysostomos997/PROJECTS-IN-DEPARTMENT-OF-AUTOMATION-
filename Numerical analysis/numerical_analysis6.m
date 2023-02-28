
%% find x  
y1=@(x) sin(x)./(x+eps);

y1(0)
y1(2)
y1(4)
y1(6)
y1(8)
y1(10)
y1(12)
y1(16)

%% matrix
T=[0 2 4 6 8 10 12 14 16];
R=[0 0.4546 -0.1892 -0.0466 0.1237 -0.0544 -0.0447 0.0708 -0.0180];
%%  performs polynomial curve fitting to a set of data points (T,R) using the polyfit and polyval functions
a=polyfit(T,R,1);
a1=polyfit(T,R,2);
a2=polyfit(T,R,5);
z=polyval(a,T);
z1=polyval(a1,T);
z2=polyval(a2,T);


%%
x = [0:0.1:16];
y= sin(x)./(x+eps);
plot(x,y)
hold on 
plot(T,R,'*r')
hold on 
plot(T,z)
hold on 
plot(T,z1)
hold on 
plot(T,z2)
hold on 
title('sin ')
hold on 
xlabel('x')
hold on 
ylabel('y')
