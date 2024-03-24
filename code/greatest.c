// #include<stdio.h>
// void main()
// {
//     int a = 3, b = 2, c = 4;

//     if(a > b) 
//     {
//         if(a>c)
//         printf("%d is greatest \n", a);
//     }

//     else
//     {
//         if(b>c)
//         {
//         printf("%d is greatest \n", b);
//         }
//         else
//         {
//         printf("%d is greatest \n", c);
            
//         }
//     }
// }

#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c;
printf("Enter 3 numbers \n");
scanf("%d %d %d", &a, &b, &c);
printf("\n The largest value is = ");
if (a>b)
{ 
    if(a>c)
    printf("%d", a);

    else
    {
    if(b>c)
    printf("%d", b);
    else
    printf("%d", c);
    }
}
getch();
}