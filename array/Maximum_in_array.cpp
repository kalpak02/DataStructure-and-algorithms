#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5] = {3,1,2,5,4};
    int maximum = INT_MIN; // best practice is to make maximum = minimum possible integer value
    for(int i = 0;i<5;i++){ // linear search
        if(arr[i]>maximum){ // comparing current number with the current maximummum
            maximum = arr[i]; // update maximum if condition is fulfilled
        }
    }
    cout<<"maximummum element = "<<maximum; // printing the maximummum value
    return 0;
}