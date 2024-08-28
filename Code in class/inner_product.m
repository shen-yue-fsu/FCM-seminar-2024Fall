clear;clc;

x = [1;2;3];
y = [2;3;4];

alpha = 0;

for i=1:3
    alpha = alpha + x(i) * y(i);
end






al = inner_product(x,y);

function alpha = inner_product(x,y)

n = length(x);
alpha = 0; 

for i=1:n
    alpha = alpha + x(i) * y(i);
end

end




