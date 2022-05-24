#include <iostream>
using namespace std;


int main()

 {
 	int n;
 	cout<<"adad ra vaerd konid"<<endl;
 	cin>> n;
 	for(int i=1;i<=n;i++)
 	{
 		for(int k=1;k<=i;k++)
 	{cout<<" ";
		 }	
 		for(int j=(i-1)*2;j<n;j++)
 		{
 				 cout<<"*";
 			
		 }
		 
	cout<<endl;
	 }
	 
 	
	return 0;
}