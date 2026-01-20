#include<stdio.h>
int main() {
      int a,b;
      int sum,product,difference;
      float quotient;
      printf("Enter 2 numbers\n");
      scanf("%d",&a);
    scanf("%d",&b);

 sum=a+b;
 product=a*b;
 quotient=a/b;
 difference=a-b;

 printf("Sum of 2 numbers is %d\n",sum);
  printf("Product of 2 numbers is %d\n",product);
   printf("Quotient of 2 numbers is %f\n",quotient);
    printf("Difference of 2 numbers is %d\n",difference);
 return 0;
}