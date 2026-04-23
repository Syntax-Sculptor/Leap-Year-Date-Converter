#include <cassert>
#include "date_converter.h"

int main()
{
    // TEST: Return the first day of the year if days since year is 0.
    DateResult result = convert_days_since_year(2024, 0);

    assert(result.year == 2024);
    assert(result.day_of_year == 1);

    // TEST: Increase the year by 1.
    DateResult result2 = convert_days_since_year(2025, 365);

    assert(result2.day_of_year == 1);
    assert(result2.year == 2026);

    // TEST: Leap year non-skipping
    DateResult result3 = convert_days_since_year(2024, 365);
    
    assert(result3.day_of_year == 366);
    assert(result3.year == 2024);

    // TEST: Leap year progressing year
    DateResult result4 = convert_days_since_year(2024, 366);

    assert(result4.day_of_year == 1);
    assert(result4.year == 2025);

    return 0;
}