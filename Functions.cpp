#include "Functions.h"


using namespace std;

int InputInt()
{
	while (true)
	{
		std::string inputValue;
		int number;
		size_t length;
		getline(cin, inputValue);

		try
		{
			number = stoi(inputValue, &length);

			if (length == inputValue.length())
				return number;
		}
		catch (exception) {}

		cout << inputValue << " is not a number" << endl;
	}
}

int InputIndex()
{
	while (true)
	{
		int i = InputInt();

		if (i >= 0)
			return i;

		cout << "Number should not be lesser than 0" << std::endl;
	}
}