#include <stdio.h>
#include "cs50.h"
const int N = 3;
float ortalama(int dizi[]);

int main(void){
    printf("Haydi, ortalamani hesaplayalim!\n");
    
    int scores[N];
        for (int i=0; i<N; i++){
        scores[i] = get_int("puan: ");
        }
    printf("ortalaman: %f\n", ortalama(scores));

}

float ortalama(int dizi[]){
        int sum = 0;
        for(int i= 0; i < N; i++){
            sum = sum + dizi[i];
        } 
        return sum / (float) N;
    }