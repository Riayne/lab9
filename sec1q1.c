#include <stdio.h>

int product(int num1, int num2);
int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);;
    
    printf("Enter second number: ");
    scanf("%d",&num2);

    int result = product(num1, num2);
    printf("Product: %d\n", result);
}

int product(int num1,int num2){

    return num1*num2;
}