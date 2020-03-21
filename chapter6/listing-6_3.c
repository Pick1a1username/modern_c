#include <time.h>
#include <stdbool.h>
#include <stdio.h>

bool leapyear(unsigned year) {
  /* All years that are divisible by 4 are lear years,
     unless they start a new century, provided they
     are not divisible by 400. */
  return !(year % 4) && ((year % 100) || !(year % 400));
}

#define DAYS_BEFORE                             \
(int const[12]) {                               \
  [0] = 0, [1] = 31, [2] = 59, [3] = 90,        \
  [4] = 120, [5] = 151, [6] = 181, [7] = 212,   \
  [8] = 243, [9] = 273, [10] = 304, [11] = 334, \
}

struct tm time_set_yday(struct tm t) {
  // tm_mdays starts at 1.
  t.tm_yday += DAYS_BEFORE[t.tm_mon] + t.tm_mday - 1;
  // Takes care of leap years
  if ((t.tm_mon > 10) && leapyear(t.tm_year+1900))
    ++t.tm_yday;
  return t;
}

int main(void) {
  struct tm today = {
    .tm_year = 2019-1900, // Years since 1900
    .tm_mon  = 4-1,       // Months since january     [0, 11]
    .tm_mday = 3,         // Day of the month         [1, 31]
    .tm_hour = 10,        // Hours since midnight     [0, 23]
    .tm_min  = 0,         // Minutes after the hour   [0, 59]
    .tm_sec  = 47,        // Seconds after the minute [0, 60]
  };
  printf("this year is %d, next year will be %d\n",
         today.tm_year+1900, today.tm_year+1900+1);
  today = time_set_yday(today);
  printf("day of the year is %d\n", today.tm_yday);
}


