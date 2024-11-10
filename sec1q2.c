#include <stdio.h>
int check(int num);

int main(){
    int num,result;
    printf("enter number: ");
    scanf("%d",&num);
    result = check(num);
    if (result==1)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
    

}

int check(int num){
    if (num % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}