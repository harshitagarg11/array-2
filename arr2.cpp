#include <iostream>
using namespace std;
void three_largest_elements(int arr[],int arr_size){
	int max,max2,max3;
	max=max2=max3=arr[0];
	for(int i=0;i<arr_size;i++)
	{
		if(arr[i]>max){
		max3=max2;
		max2=max;
		max=arr[i];
		}
		else if(arr[i]>max2){
		max3=max2;
		max2=arr[i];
		}
		else if(arr[i]>max3){
		max3=arr[i];
	    }
}
	cout<<"Largest three elemenst of array:"<<max<<","<<max2<<","<<max3;
	    
}
int main(){
    int arr[8]={20,42,65,24,18,48,98,55};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<"The array is:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
	
	three_largest_elements(arr,n);	
	
	return 0;		
}	
