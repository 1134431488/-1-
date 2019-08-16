/* mktime example: weekday calculator */
#include <stdio.h> /* printf, scanf */
#include <time.h> /* time_t, struct tm, time, mktime */

int main ()
{
time_t rawtime; // time_t 用来声明什么？还是其他？
struct tm * timeinfo; // 指针吗
int year, month ,day;
const char * weekday[] = { "Sunday", "Monday",
"Tuesday", "Wednesday",
"Thursday", "Friday", "Saturday"};

/* prompt user for date */
printf ("Enter year: "); fflush(stdout); scanf ("%d",&year);
printf ("Enter month: "); fflush(stdout); scanf ("%d",&month);
printf ("Enter day: "); fflush(stdout); scanf ("%d",&day);

/* get current timeinfo and modify it to the user's choice */ 
time ( &rawtime ); // 主要是从这里开始
timeinfo = localtime ( &rawtime );
timeinfo->tm_year = year - 1900; // 为什么要减去1900 ？
timeinfo->tm_mon = month - 1;
timeinfo->tm_mday = day; // 主要是这一大段函数的详细解释

/* call mktime: timeinfo->tm_wday will be set */
mktime ( timeinfo ); // 还有这句函数什么意思

printf ("That day is a %s.\n", weekday[timeinfo->tm_wday]); // 通过指针 get 星期几？

return 0;
}
