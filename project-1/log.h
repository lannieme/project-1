#ifndef _LOG_H_
#define _LOG_H_

#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

FILE *open_log(const char *path);

void Log(FILE *logfile, char *msg);

#endif