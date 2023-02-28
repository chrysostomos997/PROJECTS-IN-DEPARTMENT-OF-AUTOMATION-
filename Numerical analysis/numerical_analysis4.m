%% 4 

A=[25 5 1
64 8 1
144 12 1]

B=[106.8; 177.2; 279.2]


[m,n]=size(A)
N=20 ; % number of loops


x=[0 0 0];
xx(1,:)=x; 


for k=2:N
for i=1:n
    s=0;
    for j=1:n
        if j~=i
            s=s+A(i,j)*x(j);
        end 
    end
    x(i)=(1/A(i,j))*(B(i)-s);
end


xx(k,:)=x; kk=k;

end 


disp(['The solution is [  ' num2str(x) ']' ])