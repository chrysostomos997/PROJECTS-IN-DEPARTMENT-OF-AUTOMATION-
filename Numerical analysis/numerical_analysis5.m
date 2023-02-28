

%% 5

%% X=PI/8
x=linspace(0,2*pi,120);
y=sin(x).^5;
 x2=interp1(x,y,pi/8,'nearest')
 x3=interp1(x,y,pi/8,'linear')
 x4=interp1(x,y,pi/8,'cubic')
 x5=interp1(x,y,pi/8,'spline')
 plot(x,y)
 hold on 
 plot(pi/8,x2,'r*')
 hold on 
 plot(pi/8,x3,'r*')
 hold on
 plot(pi/8,x4,'r*')
 hold on 
 plot(pi/8,x5,'r*')
  
 subplot(2,2,1),plot(x,y),hold on ,plot(pi/8,x2,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD NEAREST')
 subplot(2,2,2),plot(x,y),hold on,plot(pi/8,x3,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD LINEAR')
 subplot(2,2,3), plot(x,y),hold on,plot(pi/8,x4,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD CUBIC')
 subplot(2,2,4), plot(x,y),hold on,plot(pi/8,x5,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD SPLINE')

fprintf('method nearest: %2.4f \n',x2);
fprintf('method linear: %2.4f \n',x3);
fprintf('method cubic: %2.4f \n',x4);
fprintf('method spline: %2.4f \n',x5);


%%  X=PI/4
x2=interp1(x,y,pi/4,'nearest')
 x3=interp1(x,y,pi/4,'linear')
 x4=interp1(x,y,pi/4,'cubic')
 x5=interp1(x,y,pi/4,'spline')
  subplot(2,2,1),plot(x,y),hold on ,plot(pi/4,x2,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD NEAREST')
 subplot(2,2,2),plot(x,y),hold on,plot(pi/4,x3,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD LINEAR')
 subplot(2,2,3), plot(x,y),hold on,plot(pi/4,x4,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD CUBIC')
 subplot(2,2,4), plot(x,y),hold on,plot(pi/4,x5,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD SPLINE')
 
fprintf('method nearest: %2.4f \n',x2);
fprintf('method linear: %2.4f \n',x3);
fprintf('method cubic: %2.4f \n',x4);
fprintf('method spline: %2.4f \n',x5);
%%  X=(3*PI)/5
x2=interp1(x,y,(3*pi)/5,'nearest')
 x3=interp1(x,y,(3*pi)/5,'linear')
 x4=interp1(x,y,(3*pi)/5,'cubic')
 x5=interp1(x,y,(3*pi)/5,'spline')
 
 subplot(2,2,1),plot(x,y),hold on ,plot((3*pi)/5,x2,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD NEAREST')
 subplot(2,2,2),plot(x,y),hold on,plot((3*pi)/5,x3,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD LINEAR')
 subplot(2,2,3), plot(x,y),hold on,plot((3*pi)/5,x4,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD CUBIC')
 subplot(2,2,4), plot(x,y),hold on,plot((3*pi)/5,x5,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHOD SPLINE')
 
 fprintf('method nearest: %2.4f \n',x2);
fprintf('method linear: %2.4f \n',x3);
fprintf('method cubic: %2.4f \n',x4);
fprintf('method spline: %2.4f \n',x5);
%% X=(3*PI)/7
x2=interp1(x,y,(3*pi)/7,'nearest')
 x3=interp1(x,y,(3*pi)/7,'linear')
 x4=interp1(x,y,(3*pi)/7,'cubic')
 x5=interp1(x,y,(3*pi)/7,'spline')
 subplot(2,2,1),plot(x,y),hold on ,plot((3*pi)/7,x2,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHODOS NEAREST')
 subplot(2,2,2),plot(x,y),hold on,plot((3*pi)/7,x3,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHODOS LINEAR')
 subplot(2,2,3), plot(x,y),hold on,plot((3*pi)/7,x4,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHODOS CUBIC')
 subplot(2,2,4), plot(x,y),hold on,plot((3*pi)/7,x5,'r*'),grid on ,xlabel('x'),ylabel('y'),title('METHODOS SPLINE')
 
 fprintf('method nearest: %2.4f \n',x2);
fprintf('method linear: %2.4f \n',x3);
fprintf('method cubic: %2.4f \n',x4);
fprintf('method spline: %2.4f \n',x5);
