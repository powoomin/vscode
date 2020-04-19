#include "sort.h"
#include <iostream>
#include <cassert>

using namespace std;
void print_list(int *list, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}