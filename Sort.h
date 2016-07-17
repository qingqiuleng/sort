#pragma once 
#include<iostream>
#include<assert.h>

using namespace std;

//void InsertSort(int* parr,int size)//插入排序(升序)
//{
//	assert(parr);
//	for (int i = 1; i < size; i++)
//	{
//		for (int j = i; j >= 0;j--)
//		{
//			if (parr[j]<parr[j-1])
//			{
//				swap(parr[j], parr[j-1]);
//			}
//		}
//	}
//}


//void ShellSort(int* parr,int size)//希尔排序（升序）
//{
//	assert(parr);
//	int gap = size / 2;
//	for (; gap > 0; gap /= 2)
//	{
//		for (int j = 0; j < size; j += gap)
//		{
//			if (parr[j]>parr[gap + j])
//			{
//
//			}
//		}
//	}
//}



//void ShellSort(int a[], int n)
//{
//	int i, j, gap;
//
//	for (gap = n / 2; gap > 0; gap /= 2) //步长
//	for (i = 0; i < gap; i++)        //直接插入排序
//	{
//		for (j = i + gap; j < n; j += gap)
//		if (a[j] < a[j - gap])
//		{
//			int temp = a[j];
//			int k = j - gap;
//			while (k >= 0 && a[k] > temp)
//			{
//				a[k + gap] = a[k];
//				k -= gap;
//			}
//			a[k + gap] = temp;
//		}
//	}
//}


//void SelectSort(int* parr,int size)//选择排序（升序）
//{
//	assert(parr);
//	for (int i = 0; i < size; i++)
//	{
//		int min = parr[i];
//		for (int j = i + 1; j < size; j++)
//		{
//			if (parr[j]<min)
//			{
//				swap(min, parr[j]);
//			}
//		}
//		if (min!=parr[i])
//		{
//			swap(min, parr[i]);
//		}
//	}
//}


//
//void SelectSort(int* parr, int size)//选择排序（优化方案）
//{
//	assert(parr);
//	int left;
//	int right;
//	for (left = 0,right = size - 1; left < right; left++, right--)	
//	{
//		int min = parr[left];
//		int max = parr[right];
//
//		for (int i = left+1; i <= right; i++)//遍历找出最大和最小的元素
//		{
//			if (min>parr[i])
//			{
//				swap(min, parr[i]);
//			}
//			else if (parr[i] > max)
//			{
//				swap(max, parr[i]);
//			}
//		}
//
//		if (min != parr[left])
//		{
//			swap(min, parr[left]);
//			if (max == parr[left])
//			{
//				max = min;
//			}
//		}
//		if (max != parr[right])
//		{
//			swap(max, parr[right]);
//			if (min == parr[right])
//			{
//				min = max;
//			}
//			
//		}
//	}
//}

//void _AdjustDown(int* parr,int parant,int size)//向下调整
//{
//	int child =2*parant+1 ;
//
//	while (child<size)
//	{
//		if (parr[child] < parr[child + 1] && child + 1 < size)
//		{
//			child++;
//		}
//		if (parr[parant] < parr[child])
//		{
//			swap(parr[parant], parr[child]);
//			parant = child;
//			child = 2 * parant + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void HeapSort(int* parr,int size)//堆排序
//{
//	for (int i = (size - 1) / 2; i >= 0; i--)
//	{
//		_AdjustDown(parr, i, size);
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		swap(parr[0], parr[size - 1 - i]);
//		_AdjustDown(parr, 0, size-1-i);
//	}
//}



//void QuickSort(int* parr,int left,int right)//快速排序（升序）
//{
//	
//	assert(parr);
//	if (left >= right)
//	{
//		return;
//	}
//	int key = parr[left];
//	int i = left;
//	int j = right;
//
//	while (i<j)
//	{
//		while (i < j&&key <= parr[j])
//		{
//			j--;
//		}
//		parr[i] = parr[j];
//
//		while (i < j&&key >= parr[i])
//		{
//			i++;
//		}
//		parr[j] = parr[i];
//	}
//
//	parr[i] = key;
//	QuickSort(parr, left, i - 1);//左区域递归
//	QuickSort(parr, i + 1, right);//右区域递归
//}



//
//void BubbleSort(int* parr,int size)//冒泡排序（升序）
//{
//	assert(parr);
//	for (int i = 0; i < size-1; i++)//循环n-1次，每循环完一次，冒泡得一个最大值
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (parr[j]>parr[j + 1])//相邻两个元素比较，将较大的交换到右边arr[j+1]中
//			{
//				swap(parr[j], parr[j + 1]);
//			}
//		}
//	}
//}

//
//void BubbleSort(int* parr,int size)//冒泡排序（升序，优化）
//{
//	assert(parr);
//	bool flag = false;
//
//	for (int i = 0; i < size; i++)
//	{
//		flag = false;
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (parr[j]>parr[j + 1])
//			{ 
//				swap(parr[j], parr[j + 1]);
//				flag = true;
//			}
//		}
//		if (flag == false)//上一个循环比较结束而没有发生交换，但是每两个相邻元素都比较过了，说明已经有序
//		{
//			break;//已经有序跳出循环
//		}
//	}
//}


//
//void Merge(int* parr,int* tmp,int start,int end,int mid )
//{
//	int i = start;
//	int j = mid + 1;
//	int k = start;
//
//	while (i < mid&&j<end)
//	{
//		if (parr[i] < parr[j])
//		{
//			tmp[k++] = parr[i++];
//		}
//		else
//		{
//			tmp[k++] = parr[j++];
//		}
//	}
//
//	while (i <= mid)
//	{
//		tmp[k++] = parr[i++];
//	}
//	while (j <= end)
//	{
//		tmp[k++] = parr[j++];
//	}
//
//	for (i = 0; i <= end; i++)
//	{
//		parr[i] = tmp[i];
//	}
//}
//
//void MergeSort(int* parr,int* tmp, int start,int end)//归并排序（升序）
//{
//	if (start < end)
//	{
//		int midindex = (start + end) / 2;
//		MergeSort(parr, tmp, start, midindex);
//		MergeSort(parr, tmp, midindex + 1, end);
//		Merge(parr, tmp, start, end, midindex);
//	}	
//}



//void CountingSort(int* parr,int size)//计数排序（升序）
//{
//	assert(parr);
//	int* count = new int[20];
//	for (int i = 0; i < 20; i++)
//	{
//		count[i] = 0;
//	}
//	for (int i = 0; i <= size; i++)
//	{
//		count[parr[i]]++;
//	}
//
//	for (int i = 0; i < 20; i++)
//	{
//		if (count[i] == 1)
//		{
//			cout << i<< " ";
//		}
//	}
//	delete[] count;
//}


int GetDigit(int* parr,int size)//获取最大数的位数
{
	int max = parr[0];
	for (int i = 1; i <= size;i++)
	{
		if (max < parr[i])
		{
			max = parr[i];
		}
	}

	int digit = 0;
	while (max >= 10)
	{
		digit++;
		max %= 10;
	}
	digit++;
	return digit;
}

void RadixSort(int* parr,int size)//基数排序（升序）
{
	assert(parr);
	int digit = GetDigit(parr, size);
	int* count = new int[10];
	int* tmp = new int[size];
	int radix = 1;


	for (int i = 0; i < digit; i++)//进行digit次排序
	{
		for (int i = 0; i < 10; i++)//用直接地址法，先将计数器置0
		{
			count[i] = 0;
		}
		for (int i = 0; i < size; i++)//统计每个桶中所含数字的个数
		{
			int d = (parr[i]/radix) % 10;
			count[d]++;
		}
		for (int i = 1; i < 10;i++)//统计出tmp的右边界
		{
			count[i] = count[i - 1] + count[i];
		}
		for (int i = size-1; i >=0;i--)//将count桶里面的数据一次拿到tmp里,从后往前扫描保证排序稳定性
		{
			int d = (parr[i]/radix) % 10;
			tmp[count[d]-1] = parr[i];
			count[d]--;
		}
		for (int i = 0; i < size; i++)//将tmp中数一次拷贝到parr中
		{
			parr[i] = tmp[i];
		}
		radix *= 10;//控制按哪一位排序
	}
	
	delete  []count;
	delete  []tmp;
}


