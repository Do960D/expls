#include <iostream>
#include <string>

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

void spaceMaker(std::string x, int* ptrNameSum)
{
		int workTab = ((*ptrNameSum - x.size()) / 2);

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
	std::string name1 = "Test";
	std::string name2 = "Checking";
	std::string name3 = "Workinprogress";
	std::string group = "Hell 666";
	std::string work = "Laboratory  Work";

	/*std::cin >> name1 >> name2 >> name3 >> group;*/

	std::string nameFull = name1 + " " + name2 + " " + name3;
	
	int nameSum;
	int *ptrNameSum = &nameSum;

	*ptrNameSum = nameFull.size();
	

	if (nameSum % 2 != 0)
	{
		nameSum += 1;
		nameFull += " ";
	}

	else
	{
		nameSum +=0;
	}
	
	starPlacer(ptrNameSum);

	spaceMaker(work, ptrNameSum);
	
	spaceMaker(group, ptrNameSum);

	spaceMaker(nameFull, ptrNameSum);
	
	starPlacer(ptrNameSum);
}


