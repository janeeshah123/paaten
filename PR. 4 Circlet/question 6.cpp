#include<stdio.h>
 int main(){
 	int i,j,n=5;
 	 for (i=1;i<=n; i++) {
 	 	for (j= 1;j<=1;j++) {
 	 		printf("%d",j);
		  }
		  for(j=1;j<=2*(n-i);j++) {
		  	printf(" ");
		  }
		  for(j=i;j>=1;j--) {
		  	printf("%d",j);
		  }
		  printf("\n");
	  }
	  return 0;
 }   
