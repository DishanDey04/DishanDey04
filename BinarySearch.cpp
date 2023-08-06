#include <iostream>

int binarySearch(int *arr,int arr_size,int num){
    int i_index=0,f_index=arr_size-1,m_index;
    while(i_index<=f_index){
        m_index=(i_index+f_index)/2;
        if(arr[m_index]==num){return m_index;}
        else if(arr[m_index]>num){f_index=m_index;}
        else if(arr[m_index]<num){i_index=m_index+1;}
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    std::cout<<binarySearch(arr,5,2);
    return 0;
}