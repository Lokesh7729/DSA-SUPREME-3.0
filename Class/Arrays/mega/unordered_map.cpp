#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> desk_map;

    // insertion
    desk_map[1] = 50;
    desk_map[2] = 51;
    desk_map[3] = 52;

    desk_map[2] = 53; // reassign

    // iterate
    cout<< "before erase : "<<endl;
    unordered_map<int, int>::iterator it;
    for (it = desk_map.begin(); it != desk_map.end(); it++)
    {
        int key = it->first;
        int value = it->second;
        cout << "key : " << key << " " << "value :" << value << " " << endl;
    }

    // for (auto it : desk_map)
    // {
    //     int key = it.first;
    //     int value = it.second;
    //      cout << "key : " << key << " " << "value :" << value << " " << endl;
    // }

    // find ? 
    // 2 is key
    if(desk_map.find(2) != desk_map.end()){
        // found
        int value= desk_map[2];
        cout<<"found "<< value<<endl;

    }else{
        cout<<"Not found"<<endl;
    }

    // deletion 
    // we will use key to delete
    desk_map.erase(2);


    // after erase
    for (it = desk_map.begin(); it != desk_map.end(); it++)
    {
        int key = it->first;
        int value = it->second;
        cout << "key : " << key << " " << "value :" << value << " " << endl;
    }

    // find after erase 
     if(desk_map.find(2) != desk_map.end()){
        int value= desk_map[2];
        cout<<"found "<< value<<endl;

    }else{
        cout<<"Not found"<<endl;
    }

}