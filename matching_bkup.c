#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char str1[256] = "ths program was created for a numerical analysis class.";
    char str2[256] = "this proglam was create for numerical analysys classes.";
    char copy[256];
    char judge[256];


    for(i=0;str1[i]!='\0';i++){
        int n = i;

        if(str1[n] == str2[n]){
            judge[n] = 'o';

        }else{
            judge[n] = 'x';
        }
    }


//結果の表示
    int k;

    for(k=0;str1[k]!='\0';k++)printf("%c|", str1[k]);
    printf("\n");
    for(k=0;str2[k]!='\0';k++)printf("%c|", str2[k]);
    printf("\n");
    for(k=0;judge[k]!='\0';k++)printf("%c|", judge[k]);
    printf("\n");

    return 0;
}