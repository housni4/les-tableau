#include<stdio.h>

int main()
{
   	int n;
	int somme=0;
	
	printf("entre le nombre des elements ");
	scanf("%d",&n);
	
	int tab[n];
	
	printf("dkhel element d tablo ");
	
	for(int i=0; i<n;i++){
		scanf("%d", &tab[i]);
		somme += tab[i];
	}
	
	printf("%d\n", somme);
	
	return 0;
}
