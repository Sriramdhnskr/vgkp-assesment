#include<stdio.h>

int main(){
	int rows, val=1;
	printf("Enter the number of rows for Pascal triangle");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++){
		for(int j=0;j<=i;j++){
			if(i==0 || j==0){
				val = 1;
			}else{
				val = val*(i-j+1)/j;
			}printf("%d ",val);
		}printf("\n");
	}
	return 0;
}
