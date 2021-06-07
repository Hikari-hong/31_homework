#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int player = 0;
    int computer = 0;
    int num = 0;
    int be=0;
    srand((unsigned)time(NULL));


    printf("hikari@HikarinoMacBookPro $ > 휴먼. 당신은 누구인가?\n");
    printf("hikari@HikarinoMacBookPro $ > root 권한을 얻기 위해서는 나와 게임을 해야할것이야.\n");
    printf("hikari@HikarinoMacBookPro $ > 그 게임은!!\n");
    printf("hikari@HikarinoMacBookPro $ > 베스킨~ 라빈스~ 써리~ 원~\n");
    printf("hikari@HikarinoMacBookPro $ > 귀엽고~ 깜찍하게~ 써리~ 원~\n");
    printf("hikari@HikarinoMacBookPro $ > 이제 게임을 시작하지.\n");
    printf("hikari@HikarinoMacBookPro $ > 너부터 시작해.\n\n");


    while (1)
    {
        printf("\nhikari@HikarinoMacBookPro $ > 1부터 3까지의 수에서 하나를 입력해줘 : ");
        scanf("%d", &player);

        if (player > 3 || player <= 0)
        {
            printf("hikari@HikarinoMacBookPro $ > 1부터 3이라니까? -_-\n\n");
            continue;
        }

        for (int i = 1; i <= player; i++)
        {
            num++;
            if (num <= 31)
            {
                printf("%d \n", num);
            }
        }
        if (num >= 31)
        {
            printf("\nhikari@HikarinoMacBookPro $ > 너는 졌어. 다음에 다시 도전하게나.\n");
            be = 1;
            break;
        }

        computer = (rand() % 3 + 1);
        printf("\nhikari@HikarinoMacBookPro $ > 나는 %d\n", computer);

        for (int i = 0; i < computer; i++)
        {
            num++;
            if (num <= 31)
            {
                printf("%d \n", num);
            }
        }
        if (num >= 31)
        {
            printf("\nhikari@HikarinoMacBookPro $ > su");
            printf("\nPassword: *******");
            printf("\nhikari@HikarinoMacBookPro # > ...");
            printf("\nhikari@HikarinoMacBookPro # > 주인님 이제 이 커널은 주인님의 것입니다. :)\n");
            be = 1;
            break;
        }
        if (be == 1)
        {
            break;
        }
    }
    return 0;
}