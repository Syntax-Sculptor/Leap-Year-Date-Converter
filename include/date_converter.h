#ifndef DATE_CONVERTER_H
#define DATE_CONVERTER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    int year;
    int day_of_year;
} DateResult;

DateResult convert_days_since_year(int start_year, int days_since_start);
int is_leap_year(int year);

#ifdef __cplusplus
}
#endif

#endif