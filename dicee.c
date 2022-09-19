#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
      int p1=0, p2=0;
      int i=1;
      time_t t;
      srand((unsigned) time(&t));
      while(p1<=100 && p2<=100){
            int c1,c2;
            if(p1==100){
                  printf("Player 1 won:%d",p1);
                  break;
            }
            if(p2==100){
                  printf("Player 2 won:%d",p2);
                  break;
            }
            printf("Turn %d\n",i);
            printf("Player 1 turn at dice:");
            c1=(int)floor(rand() % 6 + 1);
            if(p1+c1>100)
            c1=0;
            else
            p1=p1+c1;
            printf("%d %d\n", c1, p1);
            printf("Player 2 turn at dice:");
            c2=(int)floor(rand() % 6 + 1);
            if(p2+c2>100)
            c2=0;
            else
            p2=p2+c2;
            printf("%d %d\n", c2, p2);
            i++;
      }
      return 0;
}