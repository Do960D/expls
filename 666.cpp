#include <iostream>

void spacePlacer(int workTab) 
{
	for (short i = 0; i < workTab; ++i)
		std::cout << " ";
}

void starPlacer(int* ptrNameSum)
{
	std::cout << "\n\t";
	for (short i = 0; i < *ptrNameSum + 2; ++i)
	{
		std::cout << "*";
	}
};

void spaceMaker(char x[], int* ptrNameSum)
{
	
		int workTab = ((*ptrNameSum - strlen(x)) / 2);

		std::cout << "\t";
		std::cout << "\n\t";

		std::cout << "*";

		spacePlacer(workTab);

		std::cout << x;

		spacePlacer(workTab);

		std::cout << "*";
	
}

int main()
{
	char name1[20] = "Test";
	char name2[20] = "Checking";
	char name3[20] = "Workinprogress";
	char group[10] = "Hell 666";
	char work [20] = "Laborotory Work";

	int nameSum;
	int *ptrNameSum = &nameSum;

	nameSum = strlen(name1);
	nameSum += strlen(name2);
	nameSum += strlen(name3) + 2;
		
	if (nameSum % 2 != 0)
	{
		nameSum += 1;
	}

	else
	{
		nameSum +=0;
	}
	
	/*std::cin >> name1 >> name2 >> name3 >> group;*/

	starPlacer(ptrNameSum);

	spaceMaker(work, ptrNameSum);
	
	spaceMaker(group, ptrNameSum);

	std::cout << "\n\t*" << name1 << " " << name2 << " " << name3 << "*";
	
	starPlacer(ptrNameSum);
}


