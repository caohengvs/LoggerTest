#include "../include/CLog.h"
#include "spdlog/spdlog.h"
CLog::CLog()
{
}

CLog::~CLog()
{
}

void CLog::test(void)
{
    printf("test successful");
}

void CLog::writeLogTest(void)
{
    spdlog::info("Welcome to spdlog version {}.{}.{}  !",1,1,1);
	
}