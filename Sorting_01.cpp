//SELECTION SORT

#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &arr, int n){
    for(int i=0; i<n-1; i++){

        int mnIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mnIndex])mnIndex=j;
        }

        swap(arr[i],arr[mnIndex]);
    }
}


//Space Complexity = O(1)

//Time Complexity = O(N^2)
//Best Case = O(N^2)
//Worst Case = O(N^2)



int main()
{

    

    return 0;
}