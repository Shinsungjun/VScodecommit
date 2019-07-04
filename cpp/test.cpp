#include <iostream>
using namespace std;

int main(){
    cout << "hello ~ is it work?"<< endl;
    int a = 0;
    for(int i=0;i < 5; i++){
        cout << i << endl;
        a += i;
        cout << "this is a" << a << endl;
    }
    cout << a << endl;
    return 0;
}