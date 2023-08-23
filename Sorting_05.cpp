//QUICK SORT

#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int l, int r){

    int pivot =arr[l];

    int ct=0;
    for(int i=l+1; i<=r; i++){
        if(arr[i]<=pivot)ct++;
    }

    //Place Pivot at Right Place
    int pivotIndex = l+ct;
    swap(arr[pivotIndex], arr[l]);

    int i=l, j=r;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot)i++;

        while(arr[j]>pivot)j++;

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}



void quickSort(vector<int> &arr, int l, int r){
    
    //Base Case
    if(l>=r)return;

    int p = partition(arr, l, r);

    quickSort(arr, l, p-1);

    quickSort(arr, p+1, r);
}


//Space Complexity = O(Log(N))

//Time Complexity (Average) = O(N^2)
//Best Case = O(Nlog(N))
//Worst Case = O(N^2)



int main()
{

    

    return 0;
}
