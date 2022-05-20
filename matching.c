#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;

int main(){
    char str1[256] = "ths program was created for a numerical analysis class.";
    char str2[256] = "this proglam was create for numerical analysys classes.";
    char strcp[256];
    char judge[256];

    for(i=0; str1[i]!='\0'; i++){
        if(str1[i] == str2[i]){
            judge[i] = 'o';
        }else if(str1[i] == str2[i+1]){
            judge[i] = 'x';
            //ここで間にスペース追加処理
            strcpy(strcp, str1);
            str1[i] = ' ';

            int j;
            for(j=i+1; strcp[j]!='\0'; j++){
                str1[j] = strcp[j-1]; //j-i = i
            }
        }else if(str2[i] == str1[i+1]){
             judge[i] = 'x';
            //ここで間にスペース追加処理
            strcpy(strcp, str2);
            str2[i] = ' ';

            int j;
            for(j=i+1; strcp[j]!='\0'; j++){
                str2[j] = strcp[j-1]; //j-i = i
            }
        }
    }

    int k;
    for(k=0;str1[k]!='\0';k++)printf("%c|", str1[k]);
    printf("\n");
    for(k=0;str2[k]!='\0';k++)printf("%c|", str2[k]);
    printf("\n");
    for(k=0;judge[k]!='\0';k++)printf("%c|", judge[k]);
    printf("\n");

    return 0;
}