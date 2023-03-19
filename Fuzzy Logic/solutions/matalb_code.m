fuzzy
A = [300 400 600 1000 900]; %desired
B = [350 350 600 950 950]; %real (from initialazation)
error = (abs(A-B)./A)*100 %relative error
mean_error = mean(error) %mean error
