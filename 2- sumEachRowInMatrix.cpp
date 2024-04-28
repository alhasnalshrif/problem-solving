//#include<iostream>
//
//using namespace std;
//
//
//int randomNumber(int From, int To)
//{
//	int randNum = rand() % (To - From + 1) + From;
//	return randNum;
//}
//
//void fillMatrixWithNumber(int arr[3][3]) {
//
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 2; j++)
//		{
//			arr[i][j] = randomNumber(1, 100);
//
//		}
//	}
//}
//
//void printMatrix(int arr[3][3]) {
//
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 2; j++)
//		{
//			cout << arr[i][j] << "   ";
//
//		}
//		cout << endl;
//
//	}
//}
//
//
//void printEachRowInMatrix(int arr[3][3]) {
//
//	int a = 0;
//
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 2; j++)
//		{
//			a = a + arr[i][j];
//
//		}
//		cout << "Row " << i+1 << " sum: " << a << endl;
//
//		a = 0;
//
//	}
//}
//
//
//// ---------------- Another solution -----------------//
//
//int RowSum(int arr[3][3],int row) {
//	int a = 0;
//	for (int i = 0; i <= 2; i++)
//	{
//	a+=	arr[row][i];
//	}
//
//	return a;
//}
//
//void printEachRowSum(int arr[3][3]) {
//
//	for (size_t i = 0; i <= 2; i++)
//	{
//		cout << "Row " << i + 1 << " sum: " << RowSum(arr,i) << endl;
//	}
//}
//
//
//int main() {
//
//	srand((unsigned)time(NULL));
//
//	int arr[3][3];
//
//
//
//	fillMatrixWithNumber(arr);
//
//
//	printMatrix(arr);
//	cout << endl;
//	printEachRowInMatrix(arr);
//	printEachRowSum(arr);
//
//
//	return 0;
//}