#include <stdio.h>
#include <stdlib.h>

int main() {
    int year, month, day;
    int expYear, expMonth, expDay;
    
    scanf("%d %d %d", &day, &month, &year);
    scanf("%d %d %d", &expDay, &expMonth, &expYear);
    

    printf("%d", ((((long)year * 10000L) + ((long)month * 100L) + (long)day) - (((long)expYear * 10000L) + ((long)expMonth * 100L) + (long)expDay)<= 0)? 0:((year - expYear) > 0)?10000:((month-expMonth)>0)?(month-expMonth)*500:(day-expDay) *15);
    return 0;
}