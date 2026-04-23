#include <cassert>
#include "date_converter.h"

int main()
{
    DateResult result = convert_days_since_year(2024, 0);

    assert(result.year == 2024);
    assert(result.day_of_year == 1);

    return 0;
}