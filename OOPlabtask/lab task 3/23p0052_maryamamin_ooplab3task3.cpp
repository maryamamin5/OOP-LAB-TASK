#include<iostream>
using namespace std;
void eliminate_duplicate (int arr[],int &num  ){
     num=13;
	int index=0;
	int i,j;
	for(i=0;i<num;i++){
		for(j=0;j<index;j++){
			if (arr[i]==arr[j]){
				break;
			}
			
		}
		if(j==index){
			arr[index]=arr[i];
			index++;
		}
	}
	num=index;
	
}
int main()
{

	int arr[13]={58,26,91,67,26,70,70,91,58,58,58,66,26};
	int arrsize=13;
		eliminate_duplicate(arr,arrsize);
		
	
    for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<"\nelimination of duplication are"<<"\n"<<arrsize;
	
return 0;
}