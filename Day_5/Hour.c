// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes, seconds;
    scanf("%d", &totalSeconds)
    // Conversion
    hours = totalSeconds / 3600;           
    minutes = (totalSeconds % 3600) / 60;  
    seconds = totalSeconds % 60;            
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}


