#include <iostream>
#include <string>



int main()
{
	srand(time(NULL));

	std::string text;

	int lineCounter = 0;
	int* ptrLineCounter = &lineCounter;
	
	for (size_t i = 0; i < rand(); i++)
	{
		int min = 97;
		int max = 122;
		
		bool luck = rand() % 10;

		char letter = min + (rand() % ((max - min) + 1));

		text += letter;
				
		if (!luck)
		{
			text += "\n";
			++ *ptrLineCounter;

		}
	}

	std::cout << text << std::endl << *ptrLineCounter;

























}


