//55555
//4444
//333
//22
//1
#include<stdio.h>
int main() {
	int i,j;
    for(int i=5; i>=1;i--) { 
       
        for (int space = 5; space > i; space--) {
            printf(" ");  
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");  
    }

    return 0;
}

