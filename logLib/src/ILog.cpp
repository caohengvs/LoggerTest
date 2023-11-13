#include "../include/ILog.h"
#include "../include/CLog.h"

ILog *ILog::s_getInstance(void)
{
    static CLog oLog;
    return dynamic_cast<ILog *>(&oLog);
}