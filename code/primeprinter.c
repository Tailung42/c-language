#include<stdio.h>
int isPrime(int num);
void main()
{
    int lim;
    printf("Enter the limit upto which you want prime numbers to be printed");
    scanf("%d", &lim);
   for( int i = 2; i <= 100; i++)
   {
    if (isPrime(i))
    {
        printf("%d", i);
    }

   }
}

int isPrime(int num)
{
    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0 && num != i)
        {return 0;
        break;
        }
        
        else if(num % i == 0 && num == i )
        {
            return 1;
        }
    }

}