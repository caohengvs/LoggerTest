#pragma once
class CLog;
#pragma once
#define _SYS_STATUS_DLL_
#include "../include/HeaderDefine.h"
class _SYS_STATUS_HEADER_DLL_ ILog
{
public:
    ILog() = default;
    virtual ~ILog() = default;

public:
    static ILog *s_getInstance(void);

public:

    virtual void test(void) = 0;
};