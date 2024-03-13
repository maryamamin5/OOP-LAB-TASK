#include<iostream>
using namespace std;

float subtotal(float arr[],int num) {
    for (int i = 0; i<num; ++i) {
        arr[i] += arr[i - 1];
    }
    for(int i=0;i<num;i++){
    	cout<<arr[i]<<"  ";
	}
}


int main() {
	
   cout<<"when the array  passed to the funtion";
 int elements;
 cin>>elements;
 float arr[elements];
    cout << "when the array is changed: ";
    for(int i=0;i<elements;i++){
    	cin>>arr[i];
	}
    subtotal(arr,elements);

    return 0;
}
