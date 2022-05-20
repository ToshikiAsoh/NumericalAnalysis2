#include <stdio.h>

int main(){
    int i;
    char str[256] = "Hello world";
    char str2[256];
    
    for(i=0;i<256;i++){
        printf("%c", str[i]);
    }
    printf("\n");



    str2[0] = ' ';
    for(i=7;i<256;i++){
        str2[i+1] = str[i];
    }

    for(i=0;i<256;i++){
        str[i] = str2[i];
    }

    for(i=0;i<256;i++){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}