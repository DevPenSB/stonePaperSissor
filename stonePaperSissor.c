#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// int randomNumber(int n)
// {
//     srand(time(NULL));
//     return rand()%n;
// }
    /**
     *  rock < sessor
     * rock < paper
     * paper < sessor 
     */
    // printf("The random number between 0 to 3 is:   %d\n",randomNumber(3));
int main(){
    int cominput,put=0;
    int num;
    srand(time(NULL));
    cominput=rand()%3;
    put=cominput+1;
    char name;
        printf("plese enter your name\n");
        scanf("%s",&name);
        printf("plese remember the values\n");
        printf("1- for rock \n");
        printf("2- for paper\n");
        printf("3- for sissegor\n");
        scanf("%d",&num);

if (num>put)
{
    printf("congratulation  you have win the match\n");
}
else if (num<put)
{
    printf("ufff you hav loss the match\n");
}
else if (num==put)
{
    printf("ohh noo! match draw\n");
}
else if(num<1)
{
    printf("invalid option\n");
}
else if(num>3)
{
    printf("invalid option\n");
}
else 
{
    printf("error\n");
}
printf("computer had choosed %d",put);
    return 0;
}