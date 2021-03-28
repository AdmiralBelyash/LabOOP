#pragma once
#include<string>
//2.2.7.1
struct Circle
{
	double X;
	double Y;
	double Radius;
	std::string Color;
};

void DemoCircle();

Circle* MakeCircle(double x, double y, double Radius, std::string& color);

Circle* CopyCircle(Circle& circle);
