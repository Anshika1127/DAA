#include<iostream>
using namespace std;

int comparisons=0;
int inversions=0;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;  
            swap(&arr[i], &arr[j]); 
            comparisons++;
            inversions++;
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    inversions++;
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
          cin>>a[i];

        quickSort(a,0, n-1);

        for(int i=0;i<n;i++)
           cout<<a[i]<<" ";
   
        cout<<"\ncomparisons = "<<comparisons<<endl;
        cout<<"inversions = "<<inversions<<endl;
   }
   return 0;
}
