#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int) time(0));
    int a,b,count, c, d;   // a và b là khoảng, count là biến đếm, c là số mình đoán, d là số ngẫu nhiên
    count=3;
    printf("nhap so a: ");
    scanf("%d", &a);
    printf("nhap so b: ");
    scanf("%d", &b);
    d=a + rand()%(b-a+1);
    printf("%d", &d);
    while (count<3)
    {
        count++;
        printf("lan doan thu %d : ", count);
        printf("so bạn doan la:");
        scanf("%d", &c);
        if (c==d)
        {
            printf("congratulation\n");
            break;
        }

        else if (count==3)
        {
            printf("YOU LOSE !!!\n");
        }

        else if (d>c) printf("higher\n");
        else printf("lower\n");

    }

    return 0;
}




