#include "Time.h"
#include "Functions.h"

void DemoTime()
{
	
	Time time;
	time.Hour = 12;
	time.Minute = 8;
	time.Second = 30;
	
	Time  timeSecond;
	ReadTime(timeSecond);
	WriteTime(timeSecond);
	const int COUNT = 5;

	Time timeArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadTime(timeArray[i]);
	}
	for (int i = 0; i < COUNT; i++)
	{
		WriteTime(timeArray[i]);
	}
	
	Time* timePointer = &time;
	
	Time* timePointer2 = &time;
	std::cout << timePointer << std::endl;
	std::cout << timePointer2 << std::endl;
}

Time* MakeTime(int hour, int minute, int second)
{
	Time* newTime = new Time();
	newTime->Hour = hour;
	newTime->Minute = minute;
	newTime->Second = second;
	return newTime;
}

Time* CopyTime(Time& time)
{
	Time* copyTime = new Time();
	copyTime->Hour = time.Hour;
	copyTime->Minute = time.Minute;
	copyTime->Second = time.Second;
	return copyTime;
}

void  ReadTime(Time& time)
{
	std::cout << "Input hours (from 0 to 23): ";
	time.Hour = InputIndex();
	std::cout << std::endl;
	std::cout << "Input minutes (from 0 to 59): ";
	time.Minute = InputIndex();
	std::cout << std::endl;
	std::cout << "Input seconds (from 0 to 59): ";
	time.Second = InputIndex();
	std::cout << std::endl;
}

void WriteTime(Time& time)
{
	std::cout << "Time is  " << time.Hour << ":";
	if (time.Minute < 10)
	{
		std::cout << 0;
	}
	std::cout << time.Minute << ":";
	if (time.Second < 10)
	{
		std::cout << 0;
	}
	std::cout << time.Second << std::endl;
}