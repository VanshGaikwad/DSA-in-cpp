// deque example it can do push and pop from front and back both sides.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back(); // or you can try d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.push_back(3);
    d.push_back(4);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Print first index element" << d.at(1) << endl;

    cout<<"front:" << d.front()<<endl;
    cout<<"back:"<< d.back()<< endl;

    cout<<"Empty or not:" << d.empty()<<endl;

    cout<<"before erase:"<< d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); // we hae to specify the range
    cout<<"after erase"<<d.size()<<endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;



}