#pragma once

#include<iostream>
#include<string>

struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};

void DemoRectangle();

void WriteRectangle(Rectangle& rectangle);

void ReadRectangle(Rectangle& rectangle);

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

void FindRectangle(Rectangle* rectangles, int count);

void FindMaxRectangle(Rectangle* rectangles, int count);

Rectangle* MakeRectangle(double length, double width, const std::string& color);

Rectangle* CopyRectangle(Rectangle& rectangle);

void DemoReadAndWriteRectangles();