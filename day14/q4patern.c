#include<stdio.h>
int main(){
    char ch = 'E';
    for(int i=1 ; i<=5 ;i++){
        for(int j=5; j>=i;j--){ 
          printf("%c",ch);
        }
        printf("\n");
        ch--;
    }
}
