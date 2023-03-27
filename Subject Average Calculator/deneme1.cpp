#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	printf("                *****NOT SISTEMI*****\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	printf(" ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n\n");
	
	float matematik[2],turkce[2],fizik[2],kimya[2],biyoloji[2],tarih[2],ingilizce[2];
	float mort,tort,fort,kort,bort,thort,iort,gort;
	
	printf("Matmatik Notu Giriniz: ");
	scanf("%f",&matematik[1]);
	
	printf("Matmatik Notu Giriniz: ");
	scanf("%f",&matematik[2]);
	
	mort=(matematik[1]+matematik[2])/2;
	
	if (mort >= 85){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Matematik Ortalaman: %.2f\tCOK IYI!\n\n",mort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		}
	else if (mort<85 && mort >=70){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Matematik Ortalaman: %.2f\tIYI!\n\n",mort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (mort < 70){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Matematik Ortalaman: %.2f\tDAHA COK CALISMALISIN!\n\n",mort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	printf("Turkce Notu Giriniz: ");
	scanf("%f",&turkce[1]);
	
	printf("Turkce Notu Giriniz: ");
	scanf("%f",&turkce[2]);
	
	tort=(turkce[1]+turkce[2])/2;
	
	if (tort >= 85.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Turkce Ortalaman: %.2f\t\tCOK IYI!\n\n",tort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (tort<85.0 && tort >=70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Turkce Ortalaman: %.2f\t\tIYI!\n\n",tort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (tort < 70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Turkce Ortalaman: %.2f\t\tDAHA COK CALISMALISIN!\n\n",tort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	printf("Fizik Notu Giriniz: ");
	scanf("%f",&fizik[1]);
	
	printf("Fizik Notu Giriniz: ");
	scanf("%f",&fizik[2]);
	
	fort=(fizik[1]+fizik[2])/2;
	
	if (fort >= 85.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Fizik Ortalaman: %.2f\t\tCOK IYI!\n\n",fort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (fort<85.0 && fort >=70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Fizik Ortalaman: %.2f\t\tIYI!\n\n",fort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (fort < 70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Fizik Ortalaman: %.2f\t\tDAHA COK CALISMALISIN!\n\n",fort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	printf("Kimya Notu Giriniz: ");
	scanf("%f",&kimya[1]);
	
	printf("Kimya Notu Giriniz: ");
	scanf("%f",&kimya[2]);
	
	kort=(kimya[1]+kimya[2])/2;
	
	if (kort >= 85.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Kimya Ortalaman: %.2f\t\tCOK IYI!\n\n",kort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (kort<85.0 && kort >=70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Kimya Ortalaman: %.2f\t\tIYI!\n\n",kort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (kort < 70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Kimya Ortalaman: %.2f\t\tDAHA COK CALISMALISIN!\n\n",kort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	printf("Biyoloji Notu Giriniz: ");
	scanf("%f",&biyoloji[1]);
	
	printf("Biyoloji Notu Giriniz: ");
	scanf("%f",&biyoloji[2]);
	
	bort=(biyoloji[1]+biyoloji[2])/2;
	
	if (bort >= 85.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Biyoloji Ortalaman: %.2f\tCOK IYI!\n\n",bort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (bort<85.0 && bort >=70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Biyoloji Ortalaman: %.2f\tIYI!\n\n",bort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (bort < 70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Biyoloji Ortalaman: %.2f\tDAHA COK CALISMALISIN!\n\n",bort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	printf("Tarih Notu Giriniz: ");
	scanf("%f",&tarih[1]);
	
	printf("Tarih Notu Giriniz: ");
	scanf("%f",&tarih[2]);
	
	thort=(tarih[1]+tarih[2])/2;
	
	if (thort >= 85.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Tarih Ortalaman: %.2f\t\tCOK IYI!\n\n",thort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (thort<85.0 && thort >=70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Tarih Ortalaman: %.2f\t\tIYI!\n\n",thort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (thort < 70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Tarih Ortalaman: %.2f\t\tDAHA COK CALISMALISIN!\n\n",thort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	printf("Ingilizce Notu Giriniz: ");
	scanf("%f",&ingilizce[1]);
	
	printf("Ingilizce Notu Giriniz: ");
	scanf("%f",&ingilizce[2]);
	
	iort=(ingilizce[1]+ingilizce[2])/2;
	
	if (iort >= 85.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Ingilizce Ortalaman: %.2f\tCOK IYI!\n\n",iort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (tort<85.0 && tort >=70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Ingilizce Ortalaman: %.2f\tIYI!\n\n",iort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (iort < 70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Ingilizce Ortalaman: %.2f\tDAHA COK CALISMALISIN!\n\n",iort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	gort=(mort+tort+fort+kort+bort+thort+iort)/7;
	
	if (gort >= 85.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		printf("Genel Ortalaman: %.2f\t\tCOK IYI!\n\n",gort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (gort<85.0 && gort >=70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("Genel Ortalaman: %.2f\t\tIYI!\n\n",gort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	else if (gort < 70.0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
		printf("Genel Ortalaman: %.2f\t\tDAHA COK CALISMALISIN!\n\n",gort);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	}
	
	
	return 0;
}
