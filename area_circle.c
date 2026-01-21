#include<stdio.h>

int main() {
    int r,C,A;
    printf("Enter Radius of Circle\n");
    scanf("%d",&r);

    
    C=2*3.14*r;
    A=3.14*r*r;

    printf("Circumference of Circle is %d\n",C);

    printf("Area of Circle is %d",A);
    
    return 0;



}