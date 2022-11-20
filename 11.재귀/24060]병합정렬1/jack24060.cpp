#include <iostream>
#include <string.h>
using namespace std;

#define MAX 500000
int MAX_mem_count=0;
int merge_sort(int A[], int p, int r)
{ //# A[p..r]�� �������� �����Ѵ�.
    if (p < r) {
        int q = (p + r) / 2;    //   # q�� p, r�� �߰� ����
        merge_sort(A, p, q);    //  # ���ݺ� ����
        merge_sort(A, q + 1, r); // # �Ĺݺ� ����
        merge(A, p, q, r);      //  # ����
    }
}

// A[p..q]�� A[q+1..r]�� �����Ͽ� A[p..r]�� �������� ���ĵ� ���·� �����.
// A[p..q]�� A[q+1..r]�� �̹� ������������ ���ĵǾ� �ִ�.
int merge(int A[],int p,int q,int r) {
    MAX_mem_count++;
    int i = p;
    int j = q + 1;
    int t = 1;
    int tmp[]={0,};
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) tmp[t++] = A[i++]; // # tmp[t] = A[i]; t++; i++;
        else tmp[t++] = A[j++]; // # tmp[t] = A[j]; t++; j++;
    }
    while (i <= q) // # ���� �迭 �κ��� ���� ���
        tmp[t++] = A[i++];
    while (j <= r) // # ������ �迭 �κ��� ���� ���
        tmp[t++] = A[j++];
    i = p;
    t = 1;
    while (i <= r) // # ����� A[p..r]�� ����
        A[i++] = tmp[t++];
}
int main(){

    int arr[]={0,};
    int a = sizeof(arr);

    cin >> a;
    cin>>MAX_mem_count;

    return 0;
}
