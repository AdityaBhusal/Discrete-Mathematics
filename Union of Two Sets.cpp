#include<iostream>
using namespace std;
int main(){
	int nA, nB, nU, flag=0;
	cout<<"Enter number of elements for set A and set B : ";
	cin>>nA>>nB;
	
	
	nU=nA+nB;
	
	int setA[nA], setB[nB], setU[nU];
	cout<<"Enter elements of set A: "<<endl;
	for(int i = 0; i<nA; i++)
	{
		cin>>setA[i];
		
	}
	cout<<"Enter elements of set B: "<<endl;
	for(int j = 0; j<nB; j++)
	{
		cin>>setB[j];
	}
	int counter=0;
	
	cout<<"Elements of AUB are: ";
	for (int i=0; i<nA; i++)
	{
		for (int j=0; j<nB; j++)
		{
			if(i==0)
			{
				setU[counter]=setB[j];
                counter++;
			}
			if(setA[i]==setB[j])
			{
				flag++;
			}
		}
		if(flag==0)
		{
			setU[counter]=setA[i];
            counter++;
		}
			flag=0;
		
	}

    cout<<"The elements of Set A union Set B are : ";
    for (int i = 0; i < counter; i++)
    {
        cout<<setU[i]<<" ";
    }
    return 0;
	}