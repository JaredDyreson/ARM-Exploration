// #include "mini_uart.h"
#include <stdio.h>

void main(){
    int A = 0, B = 0;
    // uart_init();
    for(int i = 0; i < 4; i++){
        if(i == 0){
            printf("%d, %d = %d\n", A, B, A&B);
        }
        else if(i == 1){
            printf("%d, %d = %d\n", A, B=~B, A&B);
       }
       else if(i == 2){
           //
           printf("%d, %d = %d\n", A=~A, B, A&B);
      }
      else if(i == 3){
          printf("%d, %d = %d\n", A=~A, B=~B, A&B);
    }
  }
}
