# include<stdio.h>
# include<string.h>

int main()
{
    char arr1[3][10];
    int i,j,k=0;
    int len;

    for(i=0;i<3;i++)
    {
        printf("enter %d name:\n",i+1);
       scanf("%s",&arr1[i]);
    }

    char arr2[3][10];

    for(i=0;i<3;i++)
    {
        strcpy(arr2[i],arr1[i]);
        strrev(arr2[i]);
    
   
    }
    int result;
    for(i=0;i<3;i++)
    {
      result=strcmp(arr1[i],arr2[i]);

      if(result==0)
      {
        printf("%s is palindrome\n",arr1[i]);
      }
    }
    return 0;
}