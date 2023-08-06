#include<iostream>

class ADT{
    public:
        int total_size=0,used_size=0;
        int *arr; 
        ADT(){total_size = 0; used_size = 0;}
        ADT(int ts,int us){total_size=ts; used_size=us; arr = new int[ts];}
        void setDATA(void){for(int i=0;i<used_size;i++) std::cin>>arr[i];}
        void getDATA(void){for(int i=0;i<used_size;i++) std::cout<<arr[i]<<" ";std::cout<<std::endl;}
        bool insertDATA(int num,int index){
            if(used_size!=total_size && index+1<=used_size){for(int i=used_size-1;i>=index;i--) arr[i+1]=arr[i]; arr[index]=num; used_size++; return true;}
            else{return false;}
        }
        bool deleteDATA(int index){
            if(index+1<=used_size){for(int i=index;i<used_size;i++) arr[i]=arr[i+1];used_size--; return true;}
            else{return false;}
        }
};

int main(){
    ADT data(10,9);
    data.setDATA();
    data.getDATA();
    data.insertDATA(15,2);
    data.getDATA();
    data.deleteDATA(2);
    data.getDATA();
    return 0;
}