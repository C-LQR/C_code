#include <stdio.h>

int binary_search(int arr[], int k) {

}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	//���ֲ���
	// ��һ�����������в��Ҿ����ĳ������
	//binary_search()�������ҵ��˷����±꣬���򷵻�-1
	int ret = binary_search(arr, k);
	if (ret == -1) {
		printf("�Ҳ���ָ��������\n");
	}
	else {
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}