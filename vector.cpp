#include <iostream>
#include <vector>
#include "MyVector.h"
#include <string>
using namespace std;
int main()
{
    MyVector<int> myvecint;
    myvecint.push_back(5);
    cout << "at 0 "<<myvecint.at(0)<<endl;
    cout << "Size "<<myvecint.size()<<endl;
    myvecint.push_back(10);
    cout << "at 1 "<<myvecint.at(1)<<endl;
    cout << "Size "<<myvecint.size()<<endl;
    myvecint.push_back(15);
    cout << "at 1 "<<myvecint.at(2)<<endl;
    cout << "Size "<<myvecint.size()<<endl;
    myvecint.push_back(20);
    cout << "at 1 "<<myvecint.at(3)<<endl;
    cout << "Size "<<myvecint.size()<<endl;
    myvecint.push_back(25);
    cout << "at 1 "<<myvecint.at(4)<<endl;
    cout << "Size "<<myvecint.size()<<endl;
    for(int i = 0; i < 5; i++) {
        cout <<"main ["<<i<<"]="<<myvecint.at(i);
    }
    cout <<endl;
    myvecint.insertAt(0, 6);
    cout <<"after insertAt"<<endl;
    for(int i = 0; i < myvecint.size(); i++) {
        cout <<"main ["<<i<<"]="<<myvecint.at(i);
    }
    cout <<endl;
    cout << "Size "<<myvecint.size()<<endl;
    myvecint.remove(0);
    cout <<"after remove zero"<<endl;
    for(int i = 0; i < myvecint.size(); i++) {
        cout <<"["<<i<<"]="<<myvecint.at(i);
    }
    cout <<endl;
    cout << "Size "<<myvecint.size()<<endl;
    cout << "Zero " << myvecint.at(0)<<endl;
    
}

