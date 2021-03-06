#ifndef __TIME_UTILS_H__
#define __TIME_UTILS_H__

// mbed support
#include "mbed.h"

// NTP library support
#include "ntp-client/NTPClient.h"

// number of times we need to try to get the time
#define NTP_NUM_TRIES	5

// initialize time for the endpoint
extern "C" void init_time(void);

#endif // __TIME_UTILS_H__
