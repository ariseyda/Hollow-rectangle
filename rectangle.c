#include<stdio.h>

//A computer program receives width and height of a rectangle as integers. 
//A hollow rectangle is displayed according to entered edge lengths using '*' and ' ' characters.

int main(){
	
	int width,height,i,j,k;
	
	printf("Please enter width and height of rectangle:");
	scanf("%d%d",&width,&height);
	
	for(i=0;i<height;i++){
		if(i==0 || i==height-1){
			for(j=0;j<width;j++){
			   printf("*");
		}	
	      printf("\n");	
		}
		else{
			for(j=0;j<width;j++){
				if(j==0 || j==width-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		 }
			
			printf("\n");
		}
	}
	
	return 0;
}

