#include <stdio.h>
#include "cs50.h"

const int N = 3;
float hesapla(int dizi[]);
int main(void){
    printf("merhaba ortalama hesaplamaya hos geldiniz: \n");
    int scores[N];
    for(int i=0; i<N; i++){
        scores[i] = get_int("notlari giriniz: ");
    }
    printf("ortalamaniz hesaplandi: %f\n", hesapla(scores));

}

float hesapla(int dizi[]){
    int toplam = 0;
    for(int i=0; i<N; i++){
        toplam += dizi[i];
    }
    return(toplam / (float) N);
} 