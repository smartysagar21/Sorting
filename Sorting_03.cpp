//INSERTION SORT

#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int> &arr, int n){
    for(int i=1; i<n; i++){

        int temp=arr[i];
        int j=i-1;
        while(temp < arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=temp;
    
    }
}


//Space Complexity = O(1)

//Time Complexity = O(N^2)
//Best Case = O(N)
//Worst Case = O(N^2)



int main()
{

    

    return 0;
}