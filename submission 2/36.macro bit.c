#include<stdio.h>

void bin(unsigned n);

#define SetBit(number,bit) (number|=(1<<bit-1))

#define ClearBit(number,bit) (number&=(~(1<<bit-1)))

#define Toggle(number,bit) (number ^ (1<<bit-1))

#define bitcheck(number,bit) ((number) &   (1<<(bit-1)))


int main()
{
	int i,x,n;
	scanf("%d%d",&i,&x);
	printf("Enter the number:%d and bit: %d",i,x);
	printf("\n Binary of %d is : ",i);
	bin(i);
	i=SetBit(i,x);
	printf("\n\n Set %d bit of %d   : ",x,i);
	bin(i);

	i=ClearBit(i,x);
	printf("\n\n Clear %d bit chg %d  : ",x,i);
	bin(i);

	i=Toggle(i,x);
	printf("\n\n Toggle %d bit of %d : ",x,i);
	bin(i);

	i=bitcheck(i,x);
	printf("\n\n check %d bit chg %d : ",x,i);
	bin(i);

	return 0;
}

void bin(unsigned n)
{
    unsigned i;
    for (i = (1 << 31) ; i > 0; i = (i>>1))
        if(n & i)
			printf("1");
		else
			printf("0");
}
