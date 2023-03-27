#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	printf(" ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n\n");
	
	float s1[1],s2[1];
	float ort;
	
	
	printf("Matmatik Notu Giriniz: ");
	scanf("%d",&s1[1]);
	
	printf("Matmatik Notu Giriniz: ");
	scanf("%d",&s1[1]);
	
	
	
	ort=(float)(s1[1]+s2[1])/2;
	
	printf("ortalama: %.2f",ort);
	return 0;
}
