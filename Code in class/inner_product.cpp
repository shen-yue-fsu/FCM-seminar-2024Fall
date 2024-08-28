#include <iostream>


//This is the function declaration
double inner_product(double x[], double y[], int n);

int main(){
   
    double x[3] = {1,2,3};
    double y[3] = {2,3,4};

    double alpha = 0;
    for(int i=0; i<3; i++){
        alpha = alpha + x[i] * y[i];
    }
    std::cout<< "alpha = "<< alpha << std::endl;
    
    double al = 0;
    int n = 3;
    al = inner_product(x, y, n);
    std::cout<< "al = "<< al << std::endl;
    return 0;
}

double inner_product(double x[], double y[], int n){
    double alpha = 0;
    for(int i=0; i<n; i++){
        alpha = alpha + x[i] * y[i];
    }
    return alpha;
}






