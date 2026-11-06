#ifndef LOG_ERROR_H
#define LOG_ERROR_H
#include "log_file.h"

#include <stdio.h>
#include "timer.h"
#include "log_config.h"   // Include configuration file

// Check whether ERROR logging is enabled
#if LOG_LEVEL >= ERROR

#define LOG_ERROR(msg, ...) \
do { \
    char buffer[256]; \
    snprintf(buffer, sizeof(buffer), msg, ##__VA_ARGS__); \
    printf("[ERROR] [%s] [%s:%d] %s\n", \
    get_time(), __FILE__, __LINE__, buffer); \
    save_log(buffer); \
} while(0)

#else

#define LOG_ERROR(msg)   // Disable ERROR logging

#endif

#endif
