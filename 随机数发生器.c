#include<stdio.h>
#include<time.h>
int main()
{
    int i;
    srand(time(NULL));
    for(i=0;i<1000;i++)
        printf("%d\n",rand()%6+1);
    return 0;
}
