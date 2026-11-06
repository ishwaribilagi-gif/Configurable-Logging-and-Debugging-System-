#ifndef LOG_INFO_H
#define LOG_INFO_H
#include "log_file.h"

#include <stdio.h>
#include "timer.h"
#include "log_config.h"

// Check whether INFO logging is enabled
#if LOG_LEVEL >= INFO

#define LOG_INFO(msg, ...) \
do { \
    char buffer[256]; \
    snprintf(buffer, sizeof(buffer), msg, ##__VA_ARGS__); \
    printf("[INFO] [%s] %s\n", get_time(), buffer); \
    save_log(buffer); \
} while(0)


#else

#define LOG_INFO(msg, ...)

#endif

#endif
