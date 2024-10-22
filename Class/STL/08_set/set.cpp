// stores unique elements
// unordered    // ordered -> self balancing bst ,  red balck tree O(log n)
#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;

int main(){

    //creation
    set<int>st;
    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(40);

    set<int>::iterator it = st.begin();
    while (it!= st.end())
    {
        cout<< *it <<" ";
        it++;
    }

    //find

    if(st.find(202)!= st.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found" <<endl;
    }

    // count

    if(st.count(11)==1){
        cout<<"found"<<endl;
    }
    if (st.count(11)==0)
    {
        cout<<"not found"<<endl;
    }
    
    

}