#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void topla(float x,float y){		
printf("%f\n",x+y);	
}
void cikar(float x,float y){		
printf("%f\n",x-y);	
}
void carp(float x,float y){		
printf("%f\n",x*y);
}
void bol(float x,float y){		
printf("%f\n",x/y);
}

int main() {
	
float num1,num2;
int secim;
char devam_mi='y';
char clear;
	
while(1)
{
	
printf("Ilk sayiyi giriniz:");	
scanf("%f", &num1);	

printf("Ikinci sayiyi giriniz:");	
scanf("%f", &num2);

printf("Islemi seciniz \n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");	
scanf("%d", &secim);

switch(secim){
	
case 1: topla(num1,num2);
break;

case 2: cikar(num1,num2);
break;

case 3: carp(num1,num2);
break;

case 4: bol(num1,num2);
break;

default : printf("Bilinemeyen islem lutfen 1 ve 4 arasinda bir deger giriniz");	

	
}

printf("Cikmak istiyorsaniz x'e basiniz(istemiyorsaniz rastgele bir karaktere basin):");			
scanf(" %c", &devam_mi);	
if(devam_mi=='x'){
	break;
}
printf("Ekrani temizlemek istiyorsaniz c'ye basiniz(istemiyorsaniz rastgele bir karaktere basin):");
scanf(" %c", &clear);
if(clear=='c'){
	system("CLS");
}
			
}

return 0;

}
