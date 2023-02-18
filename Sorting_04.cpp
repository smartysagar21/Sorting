//MERGE SORT

#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr, int l, int r){

    int mid = (l+r)/2;

    int len1 = mid - l + 1;
    int len2 = r - mid;

    int first[len1], second[len2];

    int curr = l;
    for(int i=0; i<len1; i++)first[i]=arr[curr++];

    curr = mid+1;
    for(int i=0; i<len2; i++)second[i]=arr[curr++];

    int i=0, j=0, k=l;
    
    while(i<len1 && j<len2){
        if(first[i] < second[j]){
            arr[k++]=first[i++];
        }
        else{
            arr[k++]=second[j++];
        }
    }

    while(i<len1){
        arr[k++]=first[i++];
    }

    while(j<len2){
        arr[k++]=second[j++];
    }

}


void mergeSort(vector<int> &arr, int l, int r){
    
    //Base Case
    if(l >= r)return;

    int mid = (l+r)/2;

    //Merge Sort Left Part
    mergeSort(arr, l, mid);

    //Merge Sort Right Part
    mergeSort(arr, mid+1, r);

    //Merging The Array
    merge(arr, l, r);
        
}


//Space Complexity = O(N)

//Time Complexity = O(N*log(N))
//Best Case = O(N*log(N))
//Worst Case = O(N*log(N))



int main()
{

    

    return 0;
}