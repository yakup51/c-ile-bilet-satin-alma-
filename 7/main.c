#include <stdio.h>
#include <stdlib.h>
// BÝLET SATIN ALMA PROGRAMI


int main()
{
    char biletAl;
    int biletSayisi=100;

    for ( ; biletSayisi>0;){
    printf("BILET ALMAK ISTERMISINIZ????\n");
    printf("CEVABINIZ EVET ISE (E) VEYA (e) YAZABILIRSINIZ\a\n");
    scanf(" & c", &biletAl);
    if(biletAl='e'||biletAl=='E'){
    int alinanBiletSayisi;
    printf("KAC TANE BILET ALMAK ISTERSINIZ??\n");
    scanf("%d",&alinanBiletSayisi);
    biletSayisi-= alinanBiletSayisi;
    printf("ALINABILECEK TOPLAM BILEET SAYISI==%d\n",biletSayisi);
    }
   else {
    break;
   }
    //printf("ALINAN BILET SAYISI== %d\n KALAN BILET SAYISI==%d\  n",100-biletSayisi,biletSayisi);

    }


    return 0;
}
