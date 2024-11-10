#include <stdio.h>

void swap(int *n1,int *n2){
 int temp;
 temp = *n1;
 *n1 = *n2;
 *n2 = temp;

}

void main(){
    int num1,num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    swap(&num1,&num2);
    printf("the first number is now %d\n", num1);
    printf("the second number is now %d",num2);

}

