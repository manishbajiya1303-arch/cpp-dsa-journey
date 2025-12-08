// function to add two numbers
# include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}

int main (){
    cout << "enter first integer : ";
    int a;
    cin >> a;
    cout << "enter second integer : ";
    int b;
    cin >> b;
    cout << "sum of the given numbers is : " << add(a,b) << endl;
    return 0;
}