# include <iostream>
using namespace std;
int main (){
    int n;
    cout << "enter value of n : ";
    cin >> n;
    cout << "numbers from 1 to " << n << " are : \n";
    for (int i=1;i<=n;i++){
        cout << i << endl;
    }
    return 0;
}