#include<stdio.h>
int main()
{
    int x;
    printf("choose any week number(1-7): ");
    scanf("%d",&x);

        switch(x)
          {
             case 1:
              printf("Monday\nGood morning");
              break;
             case 2:
              printf("Tuesday\nHow are you?");
              break;
             case 3:
              printf("wednesday\nI hope you are good.");
              break;
             case 4:
              printf("Thursday\nIt was great to you at event.");
              break;
             case 5:
              printf("Friday\nThis article made me think of you.");
              break;
             case 6:
              printf("Saturday\nI loved your recent photos.");
              break;
             case 7:
              printf("Sunday\nI hope you enjoyed your weekend.");
              break;
              default:
              printf("Default");
          }

    return 0;
}
