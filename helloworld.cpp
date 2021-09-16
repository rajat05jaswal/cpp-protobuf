#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    vector<string> list;
    list.push_back("10");
    list.push_back("20");
    for(string x: list){
        cout << x << endl;
    }
    cout<<"Ended" << endl;
    return 0;
}