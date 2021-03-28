#include "Circle.h"
#include "Functions.h"
using namespace std;

void DemoCircle()
{	
		string color = "Red";
		Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, color);
		color = "Green";
		Circle* circle2 = MakeCircle(2.0, -12.0, 12.75, color);
		color = "Green";
		Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, color);

		Circle* coppyCircle1 = CopyCircle(*circle1);
		Circle* coppyCircle2 = CopyCircle(*circle2);
		Circle* coppyCircle3 = CopyCircle(*circle3);

		delete circle1;
		delete circle2;
		delete circle3;
		delete coppyCircle1;
		delete coppyCircle2;
		delete coppyCircle3;
}

Circle* MakeCircle(double x, double y, double radius, string& color)
{
	Circle* newCircle = new Circle();
	newCircle->X = x;
	newCircle->Y = y;
	newCircle->Radius = radius;
	newCircle->Color = color;
	return newCircle;
}

Circle* CopyCircle(Circle& circle)
{
	Circle* copyCircle = new Circle();
	copyCircle->X = circle.X;
	copyCircle->Y = circle.Y;
	copyCircle->Radius = circle.Radius;
	copyCircle->Color = circle.Color;
	return copyCircle;
}