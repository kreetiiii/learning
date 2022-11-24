#include<iostream>
using namespace std;

constexpr int Square(int number) {return number*number; }

int main(){
    const int Array_length=5;
    int myNumbers [Array_length]={5,6,7,8,9}; //has a capacity of only 5 elements.
    int moreNumbers [Square(Array_length)]; //has a capacity of 25 elements.

    cout<<"Enter the index of the element to be changed in array myNumbers (from 0-4): ";
    int elementIndex1=0;
    cin>>elementIndex1;

    cout<<"Enter a new value: ";
    int newValue1=0;
    cin>>newValue1;

    cout<<"Enter the index of the element to be changed in array moreNumbers (from 0-24): ";
    int elementIndex2=0;
    cin>>elementIndex2;

    cout<<"Enter a new value: ";
    int newValue2=0;
    cin>>newValue2;

    myNumbers [elementIndex1]=newValue1;
    moreNumbers [elementIndex2]=newValue2;

    cout<<"Element "<<elementIndex1<<" in array myNumbers is "<<newValue1<<endl;
    cout<<"Final array1 is ["<<myNumbers[0]<<","<<myNumbers[1]<<","<<myNumbers[2]<<","<<myNumbers[3]<<","<<myNumbers[4]<<"]"<<endl;
    cout<<"Element "<<elementIndex2<<" in array moreNumbers is "<<newValue2<<endl;
    return 0;
}

/*In case the input value for the elementIndex1 is greater than 4, 
it causes a fence-post error whcih is based on the idea that 
number of posts used to build a fence is one more than the
number of sections in the fence.*/

//However, this program is not causing any such error for some reason.
