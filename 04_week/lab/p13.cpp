#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int len=n,k=1,p=0,i;
	
	while(k<=n*n) {
		//loop top side
		for(i=p;i<len;i++) {
			arr[p][i]=k++;
		}
			
		//loop right side 	
		for(i=p+1;i<len;i++)
		{
			arr[i][len-1]=k++;
		}
		
		//loop bottom side
		for(i=len-2;i>=p;i--)
		{
			arr[len-1][i]=k++;
		}
		
		//loop left side
		for(i=len-2;i>p;i--)
		{
			arr[i][p]=k++;
		}
		
		p++;
		len--;
	}
	//if n is even then we place the last number in 
	//the middle of two dim array
	if(n%2 != 0) {
		arr[(n+1)/2][(n+1)/2]=n*n;
	}
	
	//we display array elements of array
	for(i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}