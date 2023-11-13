#include "../include/ILog.h"
#include "../include/CLog.h"

ILog *ILog::s_getInstance(ELoggerType eType)
{
    switch (eType)
    {
    case ELoggerType::eSpdLogger:
    case ELoggerType::epLogger:
    {
        static CLog oLog;
        return dynamic_cast<ILog *>(&oLog);
		
    }
    }
    return nullptr;
}