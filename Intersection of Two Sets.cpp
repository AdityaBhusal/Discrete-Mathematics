//intersection of two sets
#include<iostream>
using namespace std;
int main()
{
    int nA, nB;
    cout<<"Enter the number of elements in A and B respectively : "<<endl;
    cin>>nA>>nB;
    int setA[nA], setB[nB], nI;
    
    //setting the elements of intersection to be lowest of the two sets ie. A and B


    if (nA > nB)
    {
        nI=nB;
    }
    else{
        nI=nA;
    }
    int setI[nI];


    //entering the elements of set A


    cout<<"Enter the elements of set A : "<<endl;
    for (int i = 0; i < nA; i++)
    {
        cin>>setA[i];
    }



     //entering the elements of set B

      cout<<"Enter the elements of set B : "<<endl;

          for (int i = 0; i < nB; i++)
           {
             cin>>setB[i];
          }


          int k=0;
          for (int i = 0; i < nA; i++)
          {
            for (int j = 0; j < nB; j++)
            {
                if ( setA[i]==setB[j] )
                {
                  setI[k]=setA[i];
                  k++;  
                }
            }
            
          }
          
// printing the intersection elements of set a and b


    cout<<"The intersecting elements of set A and set B are : ";
    for (int i = 0 ; i <k ; i++)
     {
        cout<<setI[i]<<endl;
     }
    
    

}