# include <iostream>
using namespace std;
int main (){
    cout << "Enter a number to get its table : ";
    int n;
    cin >> n;
    cout << "Table of " << n << " is : \n";
    for(int i=1;i<11;i++){
        cout << n << " x " << i << "  =  "<< n*i << endl;
    }
    return 0;
}