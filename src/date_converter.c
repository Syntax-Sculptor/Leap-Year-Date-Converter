#include "date_converter.h"

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

DateResult convert_days_since_year(int start_year, int days_since_start) {
    DateResult result;
    result.year = start_year;

    while (days_since_start >= 365) { 
        if (is_leap_year(result.year)) {
            if (days_since_start <= 365) {
                break;
            }
            days_since_start -= 366;
        }
        else {
            days_since_start -= 365;
        }
        
        result.year++;
    }
 
    result.day_of_year = days_since_start + 1;

    return result;
}