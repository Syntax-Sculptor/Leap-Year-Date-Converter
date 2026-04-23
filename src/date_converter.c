#include "date_converter.h"

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

DateResult convert_days_since_year(int start_year, int days_since_start) {
    DateResult result;
    result.year = start_year;
    result.day_of_year = 0;
    
    while (days_since_start >= 365) { 
        int days_in_year = is_leap_year(result.year) ? 366 : 365;

        if (days_since_start < days_in_year) {
            break;
        }

        days_since_start -= days_in_year;
        result.year++;
    }
 
    result.day_of_year = days_since_start + 1;

    return result;
}