// union of two sets
#include<iostream>
using namespace std;
int main()
{
    int nA, nB;
    cout<<"Enter elements of set A and set B respectively : "<<endl;
    cin>>nA>>nB;

    //initializing the size of the array or set to be represented 
    int setA[nA], setB[nB];
  
    //for union highest number of set would be sum of both set A and set B
    int nU=nA+nB;
    cout<< "The highest number of elements in Union set would be : " <<nU<<endl;
    int setU[nU];
    
    //Entering the elements of set A
    cout<<"Enter the elements of set A : "<<endl;
     for (int i = 0; i < nA; i++)
     {
        cin>>setA[i];
     }
     
    
    //Entering the elements of set B
    cout<<"Enter the elements of set B : "<<endl;
     for (int i = 0; i < nB; i++)
     {
        cin>>setB[i];
     }
     
     //FOR UNION
     int k=0;
     for (int i = 0; i < nA; i++)
     {
        setA[i]=setU[i];
        k++;
     }
     for (int i = 0; i < nB; i++)
     {
        for (int j = 0; j < nA; j++)
        {
            if (setA[j]!=setB[i])
            {
                k++;
               setU[k]=setB[i];
               
            }
            
        }
        
     }

     //expression of union set

     cout<<"The elements of union set are : ";
     for ( int i = 0; i <=k; i++)
     {
        cout<<setU[i]<<endl;
     }
     
     
   //This is the change made to this file
}