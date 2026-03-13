#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // creation
    // unordered_map<string,int> m;
    map<string,int> m;

    // insertion
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);

    // 2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    // 3
    m["mera"] =1;
    m["mera"] =2;

    // searching
    cout<<m["mera"] <<endl;
    cout<<m.at("babbar") <<endl;

    // cout<< m.at("unknown_key")<<endl;

    // created entry
    cout<<m["unknwon"] <<endl;
    //  cout<< m.at("unknown_key")<<endl;

     cout<<m.size() <<endl;

    //  to check presence : absent : 0, present: 1
    cout<<m.count("bro")<<endl;
    cout<<m.count("babbar") <<endl;

    // erase
    m.erase("love");
    cout<<m.size()<<endl;

    for(auto i : m){
        cout << i.first  << " "<< i.second<<endl;
        
    }

    cout<<endl;

    // using iterator
    map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first <<" "<<it->second<<endl;
        it++;
    }


    
    return 0;
}