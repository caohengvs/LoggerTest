#pragma once
#include "ILog.h"
class CLog : public ILog
{
public:
    CLog();
    virtual ~CLog();

public:
    virtual void test(void) override;
    virtual void writeLogTest(void) override;
	

};