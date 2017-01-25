#include "Sortings.hpp"
#include <utility>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int size_file;
			
	cin >> size_file;

	int vector[size_file];

	int var = atoi(argv[1]);

	for (int i = 0; i < size_file; i++)
	{
		int aux;
		cin >> aux;
		vector[i] = aux;
	}

	switch (var){
		case 1:
			Sortings::SelectionSort(vector,size_file);		
			break;

		case 2:	
			Sortings::InsertionSort(vector,size_file);
			break;
		
		case 3:
			Sortings::QuickSort(vector,0,size_file);
			break;

		case 4:
			Sortings::MergeSort(vector,0,size_file);
			break;	
		
		case 5:
			Sortings::HeapSort(vector,size_file);
			break;		
	}
	for (int i = 0; i < size_file; i++)
	{
		cout << vector[i] << endl;;	
	}
	return 0;
}