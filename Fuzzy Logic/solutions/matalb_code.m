fuzzy
A = [300 400 600 1000 900]; %Epithimita
B = [350 350 600 950 950]; %Pragmatika (apo arxikopoihsh)
error = (abs(A-B)./A)*100 %Sxetiko sfalma
meso_sfalma = mean(error) %Meso Sfalma