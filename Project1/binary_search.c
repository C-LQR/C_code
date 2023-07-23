#include <stdio.h>

int binary_search(int arr[], int k) {

}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	//二分查找
	// 在一个有序数组中查找具体的某个数字
	//binary_search()函数，找到了返回下标，否则返回-1
	int ret = binary_search(arr, k);
	if (ret == -1) {
		printf("找不到指定的数字\n");
	}
	else {
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}