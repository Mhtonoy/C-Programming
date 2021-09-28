/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Time
{
    int hour, min, sec;
};

void differenceBetweenTimePeriod(struct Time start, struct Time stop, struct Time* diff);

int main()
{
    
    struct Time startTime, endTime, diff;
    
    printf("Enter start time in 24 hours format: \n");
    printf("Enter hours, minute and second respectivly\n");
    scanf("%d %d %d", &startTime.hour, &startTime.min, &startTime.sec);
    
    printf("Enter end time in 24 hours format: \n");
    printf("Enter hours, minute and second respectivly\n");
    scanf("%d %d %d", &endTime.hour, &endTime.min, &endTime.sec);
    
    differenceBetweenTimePeriod(startTime, endTime, &diff);

    printf("Time difference: ");
    printf("%d:%d:%d - %d:%d:%d = %d:%d:%d",startTime.hour, startTime.min, startTime.sec, endTime.hour, endTime.min, endTime.sec, diff.hour, diff.min, diff.sec);

    return 0;
}


void differenceBetweenTimePeriod(struct Time start, struct Time stop, struct Time* diff)
{
    if(stop.sec < start.sec)
    {
        --stop.min;
        stop.sec += 60;
    }
    
    diff -> sec = stop.sec - start.sec;
    
    if(stop.min < start.min)
    {
        --stop.hour;
        stop.min += 60;
    }
    
    diff -> min = stop.min - start.min;
    
    diff->hour = stop.hour - start.hour;
    
    
}

