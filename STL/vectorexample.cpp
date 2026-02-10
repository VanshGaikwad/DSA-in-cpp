// vector example ->vector is of dynamic size
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    

    cout << "Capacity :" << v.capacity() << endl;
    v.push_back(1); // to add element in vector
    cout << "Capacity :" << v.capacity() << endl;
    v.push_back(2); // to add element in vec
    cout << "Capacity :" << v.capacity() << endl;
    v.push_back(3); // to add element in vector
    cout << "Capacity :" << v.capacity() << endl;

    cout<< "Size of vector means how many element store into it :"<< v.size();

    cout<< "Element at 2nd index:"<< v.at(2)<< endl;

    cout<<"Front:" << v.front()<<endl;
    cout<< "Back:" << v.back()<<endl;

    cout<< "before pop"<<endl;
    for(int i:v){
        cout<< i <<" ";
    }cout<<endl;
    v.pop_back(); // pop
    cout<< "after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<< endl;

    // after clearing vector size (no.of element ) become zero not capacity (memory assigned)

     cout<< "before clear: "<< v.size() <<endl;
    v.clear();
    cout<< "after clear: "<< v.size()<<endl;
    
    vector <int> a(5,1); //size is 5 and intialize all element by 1;
   for(int i : a){
    cout<<i<<" ";
   }cout<< endl;

   vector <int > last(a); //copying a vector into last;
   cout<< "print last"<<endl;
   for(int i : last){
    cout<<i<<" ";
   }
   cout<<endl;


    return 0;
}