#ifndef LOG_WARNING_H
#define LOG_WARNING_H
#include "log_file.h"


#include <stdio.h>
#include "timer.h"
#include "log_config.h"

// Check whether WARNING logging is enabled
#if LOG_LEVEL >= WARNING

#define LOG_WARNING(msg, ...) \
do { \
    char buffer[256]; \
    snprintf(buffer, sizeof(buffer), msg, ##__VA_ARGS__); \
    printf("[WARNING] [%s] %s\n", get_time(), buffer); \
    save_log(buffer); \
} while(0)

#else

#define LOG_WARNING(msg)

#endif

#endif
