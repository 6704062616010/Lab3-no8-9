#include<stdio.h>
int main()
{
    int h,m,s,next;
    scanf("%d:%d:%d",&h,&m,&s);
    printf("hour:%d \nminute:%d \nsecond:%d",h,m,s);
    scanf("%d",&next);
    printf("Next minutes: %d\n",next);

    m = m + next;

    h = h+(m/60);
    m = m%60;

    h = h % 24;
    printf("hour:%d \nminute:%d \nsecond:%d",h,m,s);
    return 0;
}
