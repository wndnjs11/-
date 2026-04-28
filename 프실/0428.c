#include<stdio.h>

int main(void){
    char alphabets[5] = {'a','p','p','l','e'};
    for (int i =0; i<sizeof(alphabets); i++){
        printf("%c",alphabets[i]);
    }
    printf("\n");
    return 0;
}  