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
//
//
//	return 0;
//}