#include <stdio.h>
int main() {
    //internetten yardim alinmistir!!//
	int GunS, y, ay, gunler;	
	
	printf("Gun sayisini giriniz: ");
	
	scanf("%d", &GunS);
	
	y = (int) GunS/365;
	
	GunS = GunS-(365*y);
		
	ay = (int)GunS/30;
	
	gunler = (int)GunS-(ay*30);
	
	printf(" %d yil(lar) \n %d ay(lar) \n %d gun(ler)", y, ay, gunler);
	return 0;
}