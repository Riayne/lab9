#include <stdio.h>

int prime(int num){
    int i,flag=0;
    for(i= num-1;i>1;i--){

        if (num%i==0){
            flag = 1;
        }
        
    }
    return flag;
}

int main(){

    int result;

    int n;
    printf("Enter number to be checkedl: ");
    scanf("%d",&n);
    result = prime(n);

    if (result == 1){
        printf("number is  not prime");
    }
    else{

        printf("number is prime");
    }
    
}