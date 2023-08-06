#include <iostream>

int linearSearch(int* arr , int arr_size, int num){
    for(int i=0;i<arr_size;i++) if(arr[i]==num) return i;
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    std::cout<<linearSearch(arr,sizeof(arr)/sizeof(int),5);
    return 0;
}