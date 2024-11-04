#include <bits/stdc++.h>
using namespace std;
#define ll long long
// class heap{
//     public:
//     int arr[100];
//     int size;
//     heap(){
//         arr[0] = -1;
//         size = 0;
//     }
//     void insert(int val)
//     {
//         size++;
//         arr[size] = val;
//         int i = size;
//         while(i>1 && arr[i]>arr[i/2])
//         {
//             swap(arr[i],arr[i/2]);
//             i = i/2;
//         }
//     }
//     void print()
//     {
//         for(int i = 1; i <= size ; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     void pop()
//     {
//         if(size==0)
//         {
//             cout<<"noting to delete"<<endl;
//             return;
//         }
//         swap(arr[1],arr[size]);
//         size--;
//         int i =1;
//         while(i<size)
//         {
//             if(2*i<size &&arr[i]<arr[2*i])
//             {
//                 swap(arr[i],arr[2*i]);
//             }
//             else if(2*i+1<size &&arr[i]<arr[2*i+1]){
//                 swap(arr[i],arr[2*i]);
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }

// };

void heapify(int arr[], int n, int i)
{
    // int largest = i;
    // int left = 2 * i;
    // int right = 2 * i + 1;
    // if (left < n && arr[largest] > arr[left])
    // {
    //     largest = left;
    // }
    // if (right < n && arr[largest] > arr[right])
    // {
    //     largest = right;
    // }
    // if (largest != i)
    // {
    //     swap(arr[i], arr[largest]);
    //     heapify(arr, n, largest);
    // }
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left < n && arr[largest]<arr[left])
    {
        largest = left;
    }
    if(right< n && arr[largest]<arr[right])
    {
        largest = right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int arr[5] = {56, 34, 776, 2, 5};
    heapSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}