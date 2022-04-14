#include <iostream>
using namespace std;

double MaxR(double* arr, int n, int &max) {
	if (n>1)
	{
		if (arr[n - 1] >= arr[max])
			max = n - 1;
		n--;
		MaxR(arr, n, max);
	}
	return arr[max];
}

double Max(double* arr, int n, int &max) {
	max = n - 1;
	for (int i = n - 1; i > 0; --i)
		for (int j = i - 1; j >= 0; --j)
			if (arr[max] < arr[j])
				max = j;
	return arr[max];
}

int main()
{
	int k = 0, arrSize, max = 0;
	cout << "vvedite razmer massiva\n";
	cin >> arrSize;
	double* arr = new double[arrSize]();
	for (int i = 0; i < arrSize; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	while (k != 1 && k != 2) {
		cout << "Enter 1 for RECURS or 2 for NOrecurs: ";
		cin >> k;
	}
	switch (k)
	{
	case 1:
		cout << "Maksimalniy element REKURS arr[" << max << "]=" 
				<< MaxR(arr, arrSize, max) << endl;
		break;
	case 2:
		cout << "Maksimalniy element NOrekurs arr[" << max << "]="
			<< Max(arr, arrSize, max) << endl;
	default:
		break;
	}
	delete[]arr;
	return 0;
  }
