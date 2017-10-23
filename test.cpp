#include"Sort.h"
#include<iostream.h>


//void InsertSortTest()
//{
//	int arr[10] = { 11, 3, 5, 7, 7, 2, 4, 6, 8, 10 };
//	InsertSort(arr, 10);
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

//void ShellSortTest()
//{
//		int arr[10] = { 11, 3, 5, 7, 7, 2, 4, 6, 8, 10 };
//		ShellSort(arr, 10);
//		for (int i = 0; i < 10; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//
//}


//void SelectSortTest()
//{
//			int arr[10] = { 1, 3, 5, 7, 9, 2, 11, 6, 8, 10 };
////			SelectSort(arr, 10);
//
//			SelectSort(arr, 10);
//
//			for (int i = 0; i < 10; i++)
//			{
//				cout << arr[i] << " ";
//			}
//			cout << endl;
//}
//


//void HeapSortTest()
//{
//	int arr[10] = { 1, 3, 5, 7, 9, 2, 11, 6, 8, 10 };
//	HeapSort(arr, 10);
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	
//}

//void QuickSortTest()	
//{
//	int arr[10] = { 1, 3, 5, 7, 9, 2, 11, 6, 8, 10 };
//	QuickSort(arr, 0,9);
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//		
//}

//void BubbleSortTest()
//{
//	int arr[10] = { 1, 3, 5, 7, 9, 2, 11, 6, 8, 10 };
//	BubbleSort(arr,10);
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}


//void MergeSortTest()
//{
//		int arr[10] = { 1, 3, 5, 7, 9, 2, 6, 4, 8, 10 };
//		int tmp[10];
//		MergeSort(arr,tmp, 0,9);
//	
//		for (int i = 0; i < 10; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//}


//void CountingSortTest()
//{
//	int arr[10] = { 1, 3, 5, 7, 9, 2, 6, 4, 8, 10 };
//	int tmp[10];
//	CountingSort(arr,9);
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//}


void RadixSortTest()
{
	int arr[10] = { 73, 22, 93, 43, 55, 14, 28, 65, 39, 81 };
			RadixSort(arr,10);
		
			for (int i = 0; i < 10; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
}

void main()
{
//	insertsorttest();

	//shellsorttest();

	//SelectSortTest();

	//HeapSortTest();

//	QuickSortTest();

//	BubbleSortTest();

//	MergeSortTest();

//	CountingSortTest();

	RadixSortTest();
	system("pause");
	return;
}


