#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    //map and multimap arrange keys in alphabetically ascending order
    //Map and multimap are both self balancing tree - THus CRUD takes O(log n)
    //multimap can have multiple same keys but cannot use [] to access the key-value
    multimap<string,int> M;
    M.emplace("Yo",1);
    M.emplace("Wassup",2);
    M.emplace("Mah",3);
    M.emplace("Boy",4);

    // delete one instance using iterator

    M.erase(M.find("Mah"));
    for(auto m:M){
        cout<<m.first<<" "<<m.second<<endl;
    }

    //Unorderd Map 
    //Not sorted ascending or any order - thus CRUD takes O(1)
    unordered_map<string, int> UM;

    return 0;
}