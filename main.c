#include "log_config.h"
#include "log_info.h"
#include "log_debug.h"
#include "log_warning.h"
#include "log_error.h"

int main()
{
    int temperature = 35;
    int humidity = 60;
    float voltage = 3.5;
    int battery = 15;
    int error_code = 404;

    // INFO messages
    LOG_INFO("Program Started");
    LOG_INFO("Temperature = %d", temperature);

    // DEBUG messages
    LOG_DEBUG("Temperature = %d", temperature);
    LOG_DEBUG("Humidity = %d", humidity);
    LOG_DEBUG("Voltage = %.2f", voltage);

    // WARNING messages
    LOG_WARNING("Battery level is low");
    LOG_WARNING("Battery level = %d%%", battery);

    // ERROR messages
    LOG_ERROR("Sensor connection failed");
    LOG_ERROR("Error Code = %d", error_code);

    return 0;
}
