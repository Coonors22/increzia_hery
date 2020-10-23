#include<stdio.h>
main()
{
	int i, nb, T[30], p = 0, n = 0;
	
	printf("Entrer la taille du tableau : ");
	scanf("%d",&nb);
	
    for(i=0; i<nb; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T[i]);
   	    if(T[i] >= 0){
   	        p = p+ T[i];
		}
		else{
			n = n + T[i];
		}
	}
   		printf("La somme de valeurs positives est : %d\n", p);
		printf("La somme de valeurs negatives est : %d\n", n);  
}
