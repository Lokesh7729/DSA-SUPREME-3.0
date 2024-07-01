// map -> collection of key value pairs

#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
        // unordered map -> constant time 
        // ordered map -> O(log n)

    // creation
    unordered_map<string,string> table;


    // insertion
    table["in"]= "India";
    table.insert(make_pair("en", "England"));

    pair<string, string>p;
    p.first= "br";
    p.second= "brazil";
    table.insert(p);

    // cout<<table.size()<<endl;
    // table.clear();
    // cout<<table.size()<<endl;

    if (table.empty()==true)
    {
        cout<<"Map is empty "<<endl;
    }else{
        cout<<"Map is not empty"<<endl;
    }
    
    // at
    cout<<table.at("in")<<endl;
    table.at("in")= "india2";
    cout<<table.at("in")<<endl;
    table["in"]="Inida";
    cout<<table.at("in")<<endl;


    unordered_map<string, string>::iterator it =table.begin();
    while (it!= table.end())    
    {
        pair<string,string>p= *it;
        cout<<p.first<< " "<< p.second<<endl; 
        it++;
    }
    
    // cout<<table.size()<<endl;
    // table.erase(table.begin(),table.end());
    // cout<<table.size()<<endl;



// find
if (table.find("in")!= table.end()){
    cout<<"found"<<endl;
}else{
    cout<<"not found"<<endl;
}

//count
if (table.count("il")==0)
{
    cout<<"key not found"<<endl;
}else{
    cout<<"key found" <<endl;
}


    return 0;
}