#include "Enums.h"

void DemoEnums()
{
	//2.2.8.3
	Color color = Green;
	EducationForm  educationForm = EVENING;
	Genre  ganre = Action;
	Season  season = Summer;
	SmartphoneManufacturer smartphoneManufacturer = Huawai;
	WeekDay  weekDay = Monday;
	//2.2.8.4
	const int COUNT = 6;
	Color colorArray[COUNT] =
	{
		Red, Blue, DarkBlue,
		Green, Purple, Red
	};
	EducationForm  educationFormArray[COUNT] =
	{
		INTRAMURAL, EXTAMURAL, EVENING,
		REMOTE, INTRAMURAL, INTRAMURAL
	};
	Genre  genreArray[COUNT] =
	{
		Comedy, Drama, Thriller,
		Action, Horror, Blockbuster
	};
	Season  seasonArray[COUNT] =
	{
		Winter, Summer, Autumn,
		Spring, Winter, Summer
	};
	SmartphoneManufacturer smartphoneManufacturerArray[COUNT] =
	{
		Apple, Xiaomi,  Samsung,
		Huawai, Motorola, Lenovo
	};
	WeekDay  weekDayArray[COUNT] =
	{
		Monday, Tuesday, Wednesday,
		Thursday, Friday, Suturday
	};
}