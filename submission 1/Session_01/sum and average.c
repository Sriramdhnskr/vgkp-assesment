#include <stdio.h>

int main() {

	int start,end,sum=0,count;
	printf("Enter the range\n");
	scanf("%d %d",&start,&end);
	count = (end-start)+1;
	for(int i=start;i<=end;i++)
	sum+=start;
	float average = sum/count;
	printf("\nsum and average %d and %.2f ",sum,average);
	return 0;
}
