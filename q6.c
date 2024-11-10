#include <stdio.h>

void maxMin(int arr[],int *max,int *min,int len){
    *max=arr[1];
    *min=arr[1] ;
    for(int i=0;i<len;i++){
        if (arr[i]>*max){
            *max = arr[i];
        }
        else if (arr[i]<*min)
        {
            *min = arr[i];
        }

    }
}

int main(){
    int size,arr[size];
    printf("enter size of array:");
    scanf("%d",&size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

     int max, min;

    maxMin(arr, &max, &min,size);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    

}