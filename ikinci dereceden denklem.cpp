#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,c,disk;
	float karekok,x1,x2;
	printf("ax^2+bx+c=0 denklemindeki degerleri sirasiyla giriniz\n");
	printf("a : ");
	scanf("%d",&a);
	printf("b : ");
	scanf("%d",&b);
	printf("c : ");
	scanf("%d",&c);
	disk=b*b-4*a*c;
	karekok=sqrt(disk);
	if(disk>0)
	{
		x1=(-b+karekok)/2*a;
		x2=(-b-karekok)/2*a;
	}
	else if(disk=0)
	{
		x1=x2=-b/2*a;
	}
	else
	{
		printf("Denklemin reel koku yoktur...!");
		return 0;
	}
	printf("Kokleri sirasiyla\n");
	printf(" x1 = %.1f\n",x1);
	printf(" x2 = %.1f",x2);
}