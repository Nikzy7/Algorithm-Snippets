//Time complexity:O(n^2)
#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  

void selectionSort(int arr[], int size)  
{  
    int i, j, min_idx;  
  
 
    for (i = 0; i < size-1; i++)  
    {  
      
        min_idx = i;  
        for (j = i+1; j < size; j++) 
        {
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
        }
  
       
        swap(&arr[min_idx], &arr[i]);  
    }  
} 
 
  

int main()  
{  
    int size;
    cin>>size;
    int arr[size];  
    int i;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   
    selectionSort(arr, size);  
    cout<<"Sorted array: \n";  
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;  
}  