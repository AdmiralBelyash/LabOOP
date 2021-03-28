#pragma once

struct  Time
{
	int Hour;
	int Minute;
	int Second;
};

void DemoTime();

Time* MakeTime(int hour, int minute, int second);

Time* CopyTime(Time& time);

void ReadTime(Time& time);

void WriteTime(Time& time);