#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float CeilingValue, FloorValue;
    cout<<"Enter ceiling and Floor Value"<<endl;
    cin>>CeilingValue>>FloorValue;
    cout<<"the ceiling value : "<<ceil(CeilingValue)<<endl<<"The floor value : "<<floor(FloorValue)<<endl;
    return 0;
}