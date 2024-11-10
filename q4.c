#include <stdio.h>
int add(int n1,int n2){
    return n1+n2;
}
int subtract(int n1,int n2){
    return n1-n2;
}
int multiply(int n1,int n2){
    return n1*n2;
}
int divide(int n1,int n2){
    return n1/n2;
}

void main(){

    char operator;
    int num1,num2,result;

    printf("enter first number;");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    printf("enter operator");
    scanf(" %c",&operator);

    switch (operator)
    {
        case '+':
            result = add(num1,num2);
            break;
        case '-':
            result = subtract(num1,num2);
            break;
        case '*':
            result = multiply(num1,num2);
            break;
        case '/':
            result = divide(num1,num2);
            break;
    }
    printf("%d",result);
}