#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand((unsigned int) time(0));
    int a,b,count, c, d;   // a và b là khoảng, count là biến đếm, c là số mình đoán, d là số ngẫu nhiên
    count=1;
    printf("\t\tCHAO MUNG BAN DEN VOI GAME DOAN SO \n");
    printf("\nCHU Y a > b \n");

                        do //do để khai báo a và b a>b
                        {
                            printf("nhap so a: ");
                            scanf("%d", &a);
                            printf("nhap so b: ");
                            scanf("%d", &b);
                            printf("ban co 8 lan doan\n\n\n");
                            d=a + rand()%(b-a+1);
                        }
                        while (a>=b); // while để có lặp lại trò chơi game hay không


                        do // do để xuất kết quả xem đúng hay sai
                        {
                            printf("\n\tlan doan thu %d ", count);
                            printf("\nso ban doan la:");
                            scanf("%d", &c);
                            if (c==d)
                            {
                                printf("congratulation\n");
                                break;
                            }

                            else if (count==8)
                            {
                                printf("YOU LOSE !!!\n");
                                printf("%d", d);
                            }

                            else if (d>c) printf("higher\n");
                            else printf("lower\n");
                            count++;
                        }
                        while (count<=8);// while để xuất kết quả xem đúng hay sai

    return 0;
}




