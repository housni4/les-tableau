#include<stdio.h>#include <stdio.h>
#include <stdlib.h>

int main()
{ int i, n;
    printf("donner le nombre d'éléments d'un tableau:\t");
    scanf("%d",&n);

    int t[n];
    for (i= 0; i<n;i++){
        printf("entier %d ",i+1);
        scanf("%d",&t[i]);
        }

         for ( i= 0; i<n;i++){
        printf("%d\n",t[i]);
}
return 0;
}
	    

