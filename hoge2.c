#include<stdio.h>
#include<string.h>

int main(){
    int i;

    char hoge[256] = "あいうえお";
    char cp[256];

    strcpy(cp, hoge);
    printf("%s\n", cp);
    return 0;
}