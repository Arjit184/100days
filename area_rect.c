#include<stdio.h>

int main() {
    int l,b,P,A;
    printf("Enter length of rectangle\n");
    scanf("%d",&l);

    printf("Enter breadth of rectangle\n");
    scanf("%d",&b);

    P=2*(l+b);
    A=l*b;

    printf("Perimeter of Rectangle is %d\n",P);

    printf("Area of Rectangle is %d",A);
    
    return 0;



}