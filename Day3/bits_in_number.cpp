# include <iostream>
using namespace std;
int main (){
    cout << "enter a binary number : ";
    int a;
    cin >> a;
    int count = 0;
    while(a>0){
        if(a%10 != 1 && a%10 !=0){
            cout << "invalid input.\n";
            return 0;
        }
        else if(a%10 == 1) count++;
        a /= 10;
    }
    cout << "number of bit(s) in given number is(are) : " << count << endl;
    return 0;
}