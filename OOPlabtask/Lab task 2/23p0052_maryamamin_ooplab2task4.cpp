#include<iostream>
using namespace std;

int main() {
    int rows,cols;
    int num;
    cout<<"enter a number\n";
    cin>>num;
   
    for (rows= 0; rows<=num; rows++) {
        for (cols=0; cols<=rows;cols++) {
            cout << "* ";
        }
        cout<<endl;
    }
    
    for (rows=0; rows<=num; rows++) {
        for (cols = num-1; cols>= rows; cols--) {
            cout << "* ";
        }
        cout << endl;
    }
    

    return 0;
}
