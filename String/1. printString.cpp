#include<iostream>
#include<string>
using namespace std;

int main() {
    char str1[] = {'h', 'e', 'l', 'l', 'o',' ', 'w', 'o', 'r', 'l', 'd'};
    char str2[] = "hello world";
    int n = sizeof(str2)/sizeof(str2[0]);
    for(int i = 0; i < n; i++) {
        cout << str2[i] ;
    }
    cout<<endl;
    string str = "hello world";
    cout << str << endl;
    return 0;
}
