#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int) time(0));
    int a,b,count, c, d;   // a và b là khoảng, count là biến đếm, c là số mình đoán, d là số ngẫu nhiên
    count=8;
    printf("nhap so a: ");
    scanf("%d", &a);
    printf("nhap so b: ");
    scanf("%d", &b);
    d=a + rand()%(b-a+1);

    do
    {

        printf("\nlan doan thu %d :", count);
        printf("\nso ban doan la:");
        scanf("%d", &c);
        if (c==d)
        {
            printf("congratulation\n");
            break;
        }

        else if (count==1)
        {
            printf("YOU LOSE !!!\n");
            printf("%d", d);
        }

        else if (d>c) printf("higher\n");
        else printf("lower\n");
        count--;
    }

    while (count!=0);
    return 0;
}




