#include"../logLib/include/ILog.h"
int main()
{
    ILog* pLog = ILog::s_getInstance(ELoggerType::eSpdLogger);
    pLog->test();
    pLog->writeLogTest();
}