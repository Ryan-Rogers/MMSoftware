//***************************************************************************
//***  PC Profiling for dsPIC33 and PIC24
//***************************************************************************
//

#ifndef __CODE_PROFILING_16__
#define __CODE_PROFILING_16__

// Used for PC sampling:
struct CodeProfilingData
{
 unsigned int timerPeriod;
 unsigned int timerLoopCount;
 unsigned int priorityLevel;
};

#endif // __CODE_PROFILING_16__
