#include <stdio.h>
#include <stdlib.h>



int lineerArama(int kullanicidanDizi[], int diziBoyutuK, int arananElemanK) {//lineer arama için yazýlan fonksiyon.
    int t;
    for (t = 0; t < diziBoyutuK; t++) {
        if (kullanicidanDizi[t] == arananElemanK) {
            printf("\nEleman dizinin %d. indisinde bulundu !!", t);
            return 1; 
        }
    }
    return 0; 
}



int main(int argc, char *argv[]) {
	
	printf("Bahar Urundiker,1220505018,KLU\n");
	printf("Kullanicidan alinan dizi boyutu ve aranacak elemani alip lineer arama yapan kod\n");
	printf("************************************************\n");
	
	int diziBoyutuK,arananElemanK,t;
//Gerekli tanýmlamalarý yaparak kullanýcýdan bu deðerleri istiyoruz.
	
	printf("Lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&diziBoyutuK);
	
	int kullanicidanDizi[diziBoyutuK];
	
	printf("Lutfen aranacak elemani giriniz\n");
	scanf("%d",&arananElemanK);
	

    for(t=0;t<diziBoyutuK;t++){
    	printf("Dizinin %d. elemanini giriniz\n",t+1);
    	scanf("%d",&kullanicidanDizi[t]);
	}
	//Kullanýcýnýn girdiði dizinin elemanlarýný görmek için while döngüsü kullanarak yazdýrýyoruz.
	printf("Dizinin elemanlari:\n");
    t = 0; 
    while (t < diziBoyutuK) {
    printf("%d ", kullanicidanDizi[t]);
    t++;
}
	//fonksiyonun içinde kullanýcýdan aldýðýmýz deðerleri koyuyoruz.
	int sonuc = lineerArama(kullanicidanDizi, diziBoyutuK, arananElemanK);

    if (sonuc == 0) {
        printf("\nEleman bulunamadi.\n");
    }
	return 0;
}
