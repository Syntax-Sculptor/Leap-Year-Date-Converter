#include "date_converter.h"

DateResult convert_days_since_year(int start_year, int days_since_start) {
    DateResult result;
    result.year = start_year;

    while (days_since_start >= 365) {
        days_since_start -= 365;
        result.year++;
    }
    
    result.day_of_year = days_since_start + 1;

    return result;
}