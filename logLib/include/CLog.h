#pragma once
#include "spdlog/spdlog.h"
#include "ILog.h"
class CLog : public ILog
{
public:
    CLog();
    virtual ~CLog();

public:
    virtual void test(void) override;
    

};