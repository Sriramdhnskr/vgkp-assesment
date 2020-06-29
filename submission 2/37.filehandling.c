#include <stdio.h>
#include <stdlib.h>
int isEven(const int NUM);
int isPrime(const int NUM);
int main()
{
    FILE * fPtrn,
         * fPtreven,
         * fPtrodd,
         * fPtrprime;
    int num;
    fPtrn= fopen("sriram/numbers.txt","r");
    fPtreven=fopen("sriram/even.txt","w");
    fPtrodd= fopen("sriram/odd.txt","w");
    fPtrprime= fopen("sriram/prime_numbers.txt","w");
    if(fPtrn == NULL || fPtreven == NULL || fPtrodd== NULL || fPtrprime == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened successfully.\n");
    while (fscanf(fPtrn, "%d", &num) != -1)
    {
        if (isPrime(num))
        {
            fprintf(fPtrprime, "%d\n", num);
        }
        else if (isEven(num))
        {
        fprintf(fPtreven, "%d\n", num);
        }
        else
        {
            fprintf(fPtrodd, "%d\n", num);
        }
    }
    fclose(fPtrn);
    fclose(fPtreven);
    fclose(fPtrodd);
    fclose(fPtrprime);
    printf("Data written to files successfully.");
    return 0;
}
int isEven(const int NUM)
{
    return !(NUM & 1);
}
int isPrime(const int NUM)
{
int i;
if (NUM < 0)
    {
return 0;
    }
for ( i=2; i<=NUM/2; i++ )
    {
if (NUM % i == 0)
{
    return 0;
}
}

    return 1;
}
