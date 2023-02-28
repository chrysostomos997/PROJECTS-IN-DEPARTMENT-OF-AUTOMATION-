

% Α - Β
A=[25 5 1 
64 8 1
144 12 1];

b=[106.8
177.2
279.2]

% matrix Ab
Ab=[A,b]
% elementary row operation known as row reduction
Ab(2,:)=Ab(2,:)-(Ab(2,1)/Ab(1,1))*Ab(1,:)
Ab(3,:)=Ab(3,:)-(Ab(3,1)/Ab(1,1))*Ab(1,:)
Ab(3,:)=Ab(3,:)-(Ab(3,2)/Ab(2,2))*Ab(2,:)


%computes the solution vector x for a system of linear equations represented by the augmented matrix Ab

x=zeros(3,1)
x(3)=Ab(3,end)/Ab(3,3)
x(2)=(Ab(2,end)-Ab(2,3)*x(3))/Ab(2,2)
x(1)=((Ab(1,end)-(Ab(1,3)*x(3)+Ab(1,2)*x(2)))/Ab(1,1))
