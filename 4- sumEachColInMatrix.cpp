#include <iostream>

int randomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void fillMatrixWithNumber(int arr[3][3])
{

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			arr[i][j] = randomNumber(1, 100);
		}
	}
}

void printMatrix(int arr[3][3])
{

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			std::cout << arr[i][j] << "   ";
		}
		std::cout << std::endl;
	}
}

void printEachColInMatrix(int arr[3][3])
{

	int a = 0, b = 0, c = 0;

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (j == 0)
			{
				a += arr[i][j];
			}
			else if (j == 1)
			{
				b += arr[i][j];
			}
			else if (j == 2)
			{
				c += arr[i][j];
			}
		}
	}
	std::cout << "Row " << 1 << " sum: " << a << std::endl;
	std::cout << "Row " << 2 << " sum: " << b << std::endl;
	std::cout << "Row " << 3 << " sum: " << c << std::endl;
}

// ---------------- Another solution -----------------//

int ColSum(int arr[3][3], int col)
{
	int a = 0;
	for (int i = 0; i <= 2; i++)
	{
		a += arr[i][col];
		// a += arr[row][i];
	}

	return a;
}

// void addRowSumToArray(int arr[3][3], int arr2[3]) {
//
//	for (size_t i = 0; i <= 2; i++)
//	{
//		arr2[i] = RowSum(arr, i);
//
//	}
// }

void printEachRowSum(int arr[3][3])
{

	for (size_t i = 0; i <= 2; i++)
	{
		std::cout << "Row " << i + 1 << " sum: " << ColSum(arr, i) << std::endl;
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3], arr2[3];

	fillMatrixWithNumber(arr);

	printMatrix(arr);
	std::cout << std::endl;
	// printEachColInMatrix(arr);
	// addRowSumToArray(arr, arr2);
	printEachRowSum(arr);

	return 0;
}