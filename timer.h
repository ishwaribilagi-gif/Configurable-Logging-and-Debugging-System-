#ifndef TIMER_H
#define TIMER_H

#include <time.h>

// Function to get current time without an extra newline
char *get_time()
{
    static char time_string[30];

    time_t current_time;

    time(&current_time);

    struct tm *local_time = localtime(&current_time);

    strftime(time_string, sizeof(time_string),
             "%a %b %d %H:%M:%S %Y", local_time);

    return time_string;
}

#endif
