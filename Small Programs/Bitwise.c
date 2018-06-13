#include <stdio.h>

int main(){
    unsigned int A = 0, B = 1;
    A = ~A;
    if(A&B){
        printf("True\n");
    }
    else{
        printf("Not true\n");
    }
}
