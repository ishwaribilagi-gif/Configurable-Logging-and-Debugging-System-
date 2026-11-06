#ifndef LOG_FILE_H
#define LOG_FILE_H

#include <stdio.h>

// Function to save a message into the log file
void save_log(const char *message)
{
    // Open log.txt in append mode
    FILE *fp = fopen("log.txt", "a");

    // Check whether file opened successfully
    if (fp == NULL)
    {
        printf("Unable to open log file\n");
        return;
    }

    // Write message into the file
    fprintf(fp, "%s\n", message);

    // Close the file
    fclose(fp);
}

#endif
