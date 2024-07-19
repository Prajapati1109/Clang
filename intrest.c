#include<stdio.h>

 int main(){
 	int p,r,n,area;
 	 printf("Enter the price:");
 	 scanf("%d,",&p);
 	 printf("enter the rate:");
 	 scanf("%d,",&r);
 	 printf("enter the percent:");
 	 scanf("%d,",&n);
      area=p*r*n/100;
	  printf("the simple intrest:%d",area);	 
 }
