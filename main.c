#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ð������:ʵ��һ�������������ð������
//int main()
//{
//    int arr[10];
//    int i = 0;
//    int j = 0;
//    int m = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < m - 1; i++)
//    {
//        for (j = 0; j < m - i; j++)
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = 0;
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//    }
//    for (i = 0; i < m ; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//����Ŀ���ơ�
//
//�������
//
//����Ŀ���ݡ�
//
//����һ���������飬��ɶ�����Ĳ���
//
//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//void init(int arr[],int sz);
//void print(int arr[],int sz);
//void reverse(int arr[],int sz);
//int main()
//{
//    int arr[10];
//    int i=0;
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    init(arr,sz);
//    print(arr,sz);
//    printf("\n");
//    for(i=0;i<sz;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    reverse(arr,sz);
//    print(arr,sz);
//    return 0;
//}
//void init(int arr[],int sz)
//{
//    int i=0;
//    for(i=0;i<sz-1;i++)
//    {
//        arr[i]=0;
//    }
//}
void print(int arr[],int sz)
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
}
//void reverse(int arr[],int sz)
//{
//    int i=0;
//    while(i<sz-1)
//    {
//        int tmp=0;
//        tmp=arr[i];
//        arr[i]=arr[sz-1];
//        arr[sz-1]=tmp;
//        i++;
//        sz--;
//    }
//}

//����Ŀ���ơ�
//
//��������
//
//����Ŀ���ݡ�
//
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
int main()
{
    int A[5];
    int B[5];
    int i=0;
    int j=0;
    int sz=sizeof(A)/sizeof(A[0]);
    for(i=0;i<sz;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\n");
    for(i=0;i<sz;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<sz;i++)
    {
        int tmp=0;
        tmp=A[i];
        A[i]=B[i];
        B[i]=tmp;
    }
    printf("\n");
    print(A,sz);
    printf("\n");
    print(B,sz);
    return 0;
}















