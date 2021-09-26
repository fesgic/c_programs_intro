#include <stdio.h>
#include <string.h>
/*get length of string exluding the null byte \0 */

int boy(char s[]);

void main(){
    char s[50];
    printf("%d\n", strlen("boynamedboy"));
    printf("%d", boy("boynamedboy"));
}

int boy(char s[]){
    /*return length of s*/
    int i;
    while (s[i] != '\0'){
        i++;
    }
    return i;
}