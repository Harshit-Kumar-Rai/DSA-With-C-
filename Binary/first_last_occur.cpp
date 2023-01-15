#include<iostream>
using namespace std;

int first(int arr[], int size, int key){
    
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans  = mid;
            end = mid - 1;
            
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end =  mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int last(int arr[], int size, int key){
    
    int start = 0;
    int end  = size - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while (start <= end)
    {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
            
        }else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end =  mid - 1;
        }
        mid =  (start + end)/2;
        
    }
    return ans;
}

int main(){

    int arr[10] = {1,3,3,3,3,3,3,5,6,10};
    int first_occ = first(arr, 10, 3);
    int last_occ = last(arr, 10, 3);

    cout<<"First Occurence at index:- "<<first_occ<<endl;
    cout<<"Last Occurence at index :- "<<last_occ<<endl;
}
