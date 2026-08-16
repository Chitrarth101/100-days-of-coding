#include<stdio.h>
int main(){
    int hours,minutes,seconds,time;
    printf("write the time in second :");
    scanf("%d",& time);
    hours = time/ 3600;
    minutes = (time% 3600) / 60;
    seconds = time% 60;

    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}