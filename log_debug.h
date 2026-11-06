#ifndef LOG_DEBUG_H
#define LOG_DEBUG_H

#include <stdio.h>
#include "timer.h"
#include "log_config.h"
#include "log_file.h"



// Check whether DEBUG logging is enabled
#if LOG_LEVEL >= DEBUG

#define LOG_DEBUG(msg, ...) \
do { \
    char buffer[256]; \
    snprintf(buffer, sizeof(buffer), msg, ##__VA_ARGS__); \
    printf("[DEBUG] [%s] [%s:%d] %s\n", \
    get_time(), __FILE__, __LINE__, buffer); \
    save_log(buffer); \
} while(0)


#else

#define LOG_DEBUG(msg, ...)

#endif

#endif
