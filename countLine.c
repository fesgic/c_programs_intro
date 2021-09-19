#include <stdio.h>
/*count number of lines in input*/

void main(){
    int c, nc;
    nc=0;
    while ((c=getchar())!=EOF){
        if(c == ' '){
            ++nc;
            printf("%d %s", nc, c);
         }
        else if(c == '\t'){
            ++nc;
            //printf("%d", nc);
            putchar(c);
        }
        else if(c == '\n')
            ++nc;
            //printf("%d", nc);
            putchar(c);
    }
}