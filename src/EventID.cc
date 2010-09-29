/**
 * EventID
 * s8 
 *
 * Created by Samvel Khalatian on Sep 28, 2010
 * Copyright 2010, All rights reserved
 */

#include <stdexcept>

#include "RecoBTag/PerformanceMeasurements/interface/EventID.h"

using std::runtime_error;

using s8::EventID;

void EventID::setRun(const int &run)
{
    if (run < 0)
        throw runtime_error("[EventID] Bad run number supplied.");

    _run = run;
}

void EventID::setLumiBlock(const int &lumiBlock)
{
    if (lumiBlock < 0)
        throw runtime_error("[EventID] Bad LumiBlock number supplied.");

    _lumiBlock = lumiBlock;
}

void EventID::setEvent(const int &event)
{
    if (event < 0)
        throw runtime_error("[EventID] Bad Event number supplied.");

    _event = event;
}
