//#include<iostream>
//
//
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
//			std::cout << arr[i][j] << "   ";
//
//		}
//		std::cout << std::endl;
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
//		std::cout << "Row " << i+1 << " sum: " << a << std::endl;
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
//void addRowSumToArray(int arr[3][3],int arr2[3]) {
//
//	for (size_t i = 0; i <= 2; i++)
//	{
//		arr2[i]= RowSum(arr, i) ;
//
//	}
//}
//
//void printEachRowSum( int arr2[3]) {
//
//	for (size_t i = 0; i <= 2; i++)
//	{
//		std::cout << "Row " << i + 1 << " sum: " << arr2[i] << std::endl;
//
//	}
//}
//
//
//
//int main() {
//
//	srand((unsigned)time(NULL));
//
//	int arr[3][3], arr2[3];
//
//
//
//	fillMatrixWithNumber(arr);
//
//
//	printMatrix(arr);
//	std::cout << std::endl;
//	//printEachRowInMatrix(arr);
//	addRowSumToArray(arr,arr2);
//	printEachRowSum(arr2);
//
//
//	return 0;
//}