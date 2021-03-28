#include "Rectangle.h"
#include "Functions.h"

void DemoRectangle()
{
	
	Rectangle  rectangle;
	rectangle.Length = 15;
	rectangle.Width = 40;
	rectangle.Color = "Green";
	
	Rectangle  rectangle2;
	rectangle2.Length = 30;
	rectangle2.Width = 200;
	rectangle2.Color = "Purple";
	std::cout << "Before: " << std::endl;
	WriteRectangle(rectangle);
	WriteRectangle(rectangle2);

	Exchange(rectangle, rectangle2);

	std::cout << "After: " << std::endl;
	WriteRectangle(rectangle);
	WriteRectangle(rectangle2);
	
	Rectangle  rectangleSecond;
	ReadRectangle(rectangleSecond);
	WriteRectangle(rectangleSecond);
	const int COUNT = 5;
	Rectangle rectangleArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadRectangle(rectangleArray[i]);
	}
	for (int i = 0; i < COUNT; i++)
	{
		WriteRectangle(rectangleArray[i]);
	}
	
	FindRectangle(rectangleArray, COUNT);
	
	FindMaxRectangle(rectangleArray, COUNT);
	
	Rectangle* rectanglePointer = &rectangle;
	
	Rectangle* rectanglePointer2 = &rectangle;
	std::cout << rectanglePointer << std::endl;
	std::cout << rectanglePointer2 << std::endl;
}

void WriteRectangle(Rectangle& rectangle)
{
	std::cout << "Reactangle has a size " << rectangle.Length
			  << "x" << rectangle.Width
		      << "; Color  " << rectangle.Color << std::endl;
}

void ReadRectangle(Rectangle& rectangle)
{
	std::cout << "Input the length (positive): ";
	rectangle.Length = InputIndex();
	std::cout << std::endl;
	std::cout << "Input the width (positive): ";
	rectangle.Width = InputIndex();
	std::cout << std::endl;
	std::cout << "Input the color: ";
	std::cin >> rectangle.Color;
	std::cout << std::endl;
}

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle rectangleTemp = rectangle1;
	rectangle1 = rectangle2;
	rectangle2 = rectangleTemp;
}

void FindRectangle(Rectangle* rectangles, int count)
{
	Rectangle rectangleMaxLength = rectangles[0];

	for (int i = 0; i < count; i++)
	{
		if (rectangleMaxLength.Length < rectangles[i].Length)
		{
			rectangleMaxLength = rectangles[i];
		}
	}

	std::cout << "The rectangle with max  length: " << std::endl;
	WriteRectangle(rectangleMaxLength);
}

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	Rectangle rectangleMaxArea = rectangles[0];
	double maxArea = rectangleMaxArea.Length * rectangleMaxArea.Width;

	for (int i = 1; i < count; i++)
	{
		double tempArea = rectangles[i].Length * rectangles[i].Width;
		if (maxArea < tempArea)
		{
			rectangleMaxArea = rectangles[i];
			maxArea = tempArea;
		}
	}

	std::cout << "The rectangle with max area: " << std::endl;
	WriteRectangle(rectangleMaxArea);
}

Rectangle* MakeRectangle(double length, double width,const std::string& color)
{
	Rectangle* newRectangle = new Rectangle();
	newRectangle->Length = length;
	newRectangle->Width = width;
	newRectangle->Color = color;
	return newRectangle;
}

Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copyRectangle = new Rectangle();
	copyRectangle->Length = rectangle.Length;
	copyRectangle->Width = rectangle.Width;
	copyRectangle->Color = rectangle.Color;
	return copyRectangle;
}

void DemoReadAndWriteRectangles()
{
	const int COUNT = 5;
	Rectangle rectangleArray[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		ReadRectangle(rectangleArray[i]);
	}

	for (int i = 0; i < COUNT; i++)
	{
		WriteRectangle(rectangleArray[i]);
	}
}
