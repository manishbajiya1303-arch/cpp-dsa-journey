# include <iostream>
using namespace std;
int sumupto(int n){
    int sum = 0;
    for(int i= 1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main (){
    int n;
    cout << "enter value of n : ";
    cin >> n;
    cout << "sum of numbers 1 to "<<n<<" is : "<< sumupto(n)<< endl;
    return 0;
}