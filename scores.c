#include <stdio.h>
#include "cs50.h"

int main(void){
    printf("Hello world!\n");
    int scores[3];
    for (int i=0; i<3; i++){
    scores[i] = get_int("Puan: ");
    }
   
    printf("Ortalamam: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    }