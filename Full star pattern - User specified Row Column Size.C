#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int i = 0, j = 0, R = 0, c = 0 ;
 	
 	printf("\n enter Row size = ");
 	scanf("%d",&R);
 	printf("\n enter Column size =  ");
 	scanf("%d",&c);
 	
 	printf("\n ======******====== \n\n");
 	
 	for ( i= 1; i<=5; i++)
 	{ 
 	   for (j = 1; j<=6; j++)
 	   {
 	   	printf(" * ");
 	   }
 	   printf(" \n  ");
 	}
 	
 	printf("\n\n ======******======\n");
 	
 	getch();
 	return 0;
 }
 	
 	
