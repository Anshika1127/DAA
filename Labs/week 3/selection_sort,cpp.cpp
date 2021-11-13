#include<iostream>
using namespace std;
 
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void selectionSort(int a[], int n)
{
	int comparisons=0, shifts=0;
	for(int i=0;i<n-1;i++)
	{
		int min_ind=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min_ind]>a[j])
			{
				min_ind=j;
			}
			comparisons++;
		}
		swap(&a[min_ind],&a[i]);
		shifts++;
	}
	for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
	cout<<"\n"<<comparisons<<endl;
	cout<<shifts<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		selectionSort(arr,n);
	}
	return 0;
}
