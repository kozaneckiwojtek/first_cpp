#include <iostream>
using namespace std;
int policz (int a, int b){
    return a*b;
    return (a+b)*(a-b);
}
int main() {
    cout << "Hello, World!" << endl;
    cout << "W drugim branchu: 2 * 3 ="<<" " <<policz(2,3)<< endl;
    cout << "W trzecim branchu: 2 * 3 ="<<" " <<policz(2,3)<< endl;
    return 0;
}
