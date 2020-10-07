#include <bits/stdc++.h>
using namespace std ;
void leaders (int *arr , int n)
{
	
    int leader =  arr[n-1]; 
  
    cout << leader << " "; 
      
    for (int i = n-2; i >= 0; i--) 
    { 
        if (leader <= arr[i])  
        {            
            leader = arr[i]; 
            cout << leader << " "; 
        } 
    }     
}

int main ()
{
    int n ;
    cin >> n ;
    int *arr = new int [n] ;
    for (int i=0 ; i<n ; i++) 
    {    
        cin >> arr[i] ;
    }
    leaders (arr , n) ;
    delete[] arr ;
    return 0 ;
}
