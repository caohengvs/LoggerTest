#include"../logLib/include/ILog.h"
int main()
{
    ILog* pLog = ILog::s_getInstance();
    pLog->test();
}