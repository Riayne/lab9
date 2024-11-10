#include <stdio.h>
#include <string.h>

void main(){
    char words[5][25]={"chair","table","fridge","sofa","television"};
    char searchWord[25];
    int found = 0;

    printf("Enter a word to search: ");
    scanf("%s", searchWord);

    for (int i= 0;i<5;i++){
        if(strcmp(words[i],searchWord)==0){
            found = 1;
            break;
        }
    }
     if (found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

}