#pragma once

enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	DarkBlue,
	Purple
};
//2.2.8.5
void WriteColor(Color);
//2.2.8.6
Color ReadColor();
//2.2.8.7
int CountRed(Color* color, int count);
//2.2.8.8
int CountColor(Color* color, int count, Color findedColor);
