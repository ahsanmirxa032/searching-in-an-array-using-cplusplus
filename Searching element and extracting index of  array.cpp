#include<iostream>
using namespace std;
int main()
{
	const int max=50;
	int counter=0;
	int choice=0;
	int arr[max]={3,6,3,5,9};
	int indexarr[max];
	int indexcounter=0;
	int lb,ub=4;
	cout<<"Current Array is"<<endl;
	for(lb=0;lb<=ub;lb++)
	{
		cout<<arr[lb]<<"\t";	
	}
	cout<<endl;
	cout<<"Enter element you wanna search"<<endl;
	cin>>choice;	
	for(lb=0;lb<=ub;lb++)
	{
		if(arr[lb]==choice)
		{
			counter++;
			indexarr[indexcounter]=lb;
			indexcounter++;
		}
	}
	
	cout<<"The given element exist "<<counter<<" times"<<endl;
	cout<<endl;
	cout<<"First occurance is at "<<indexarr[0]<<" index."<<endl;
	cout<<endl;
	
	cout<<"Indexes of the search element are "<<endl;
	
	for(int i=0;i<indexcounter;i++)
	{
		cout<<indexarr[i]<<"\t";
	}
//	indexcounter=0;
//	for(lb=0;lb<=ub;lb++)
//	{
//		if(lb==indexarr[indexcounter])
//		{
//			arr[lb]=0;
//			indexcounter++;
//		}
//	}
//	cout<<endl;
//	cout<<"Current Array is"<<endl;
//	for(lb=0;lb<=ub;lb++)
//	{
//		cout<<arr[lb]<<"\t";	
//	}
 return 0;
}

