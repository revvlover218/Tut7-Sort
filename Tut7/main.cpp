#include <iostream>
#include <ctime>

using namespace std; 

template <class Sort>

void SortArray(Sort &a, Sort &b)
{
	Sort temp;

	temp = a;
	a = b;
	b = temp;
}

template < class Sort >

void BubbleSOrt(Sort Array[], int numElements)
{
	Sort temp;

	for (int i = 0; i < numElements -1; i++)
	{

		for (int j = i; j < numElements; j++)
		{

			if (Array[j] < Array[j])
			{
				//SortArray(Array[j], Array[i]);
				temp = Array[j];
				Array[j] = Array[i];
				Array[i] = temp;
			
			}

		}

	}


}

int main()
{

	const int numELements = 10;
	int array[numELements] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < numELements; i++)
	{
		array[i] = rand() % 15;
	}

	cout << "Unsorted array: " << endl;

	for (int i = 0; i < numELements; i++)
	{
		cout << array[i] << " \n";
	}

	cout << endl;

	BubbleSOrt(array, numELements);

	cout << "Sorted array: " << endl;

	for (int i = 0; i < numELements; i++)
	{
		cout << array[i] << "\n";
	}

	system("PAUSE");

};