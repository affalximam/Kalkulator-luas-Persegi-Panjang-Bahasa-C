#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){
    float panjang, lebar, hasil;
    char ulang;
    top:
    clear();
    printf("\n-----------------------------------\n");
    printf("Kalkulator menghitung luas Persegi Panjang\n");
    printf("By : AFFALXIMAM\n");
    printf("-----------------------------------\n\n");

    printf("Masukan panjang (cm) : ");
    scanf("%f", &panjang);
    printf("Masukan lebar (cm) : ");
    scanf("%f", &lebar);

    hasil = panjang * lebar;
    printf("Luas Persegi panjang adalah (cm) : %.0f \n\n", hasil);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
    if(ulang == 'y'){
        clear();
        goto top;
    }
    if(ulang == 't'){
        printf("\nProgram Selesai");
    }
    else{
        goto cek;
    }
    return 0;
}