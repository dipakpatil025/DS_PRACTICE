#include<bits/stdc++.h>
using namespace std;
    
int main()
{

    // Internal implementaion of vector
    // vector<int> v; // size of zero;
    // cout<<"Size : "<<v.size()<<" capacity : " <<v.capacity()<<endl;
 
    // v.push_back(1); //{0} size = 2
    // cout<<"Size : "<<v.size()<<" capacity : " <<v.capacity()<<endl;
 
    // v.push_back(2) ;//{0,2} size = 4;
    // cout<<"Size : "<<v.size()<<" capacity : " <<v.capacity()<<endl;
 
    // v.push_back(2) ;//{0,2} size = 4;
    // cout<<"Size : "<<v.size()<<" capacity : " <<v.capacity()<<endl;
 
    // v.push_back(2) ;//{0,2} size = 4;
    // cout<<"Size : "<<v.size()<<" capacity : " <<v.capacity()<<endl;
 
    // v.push_back(2) ;//{0,2} size = 4;
    // cout<<"Size : "<<v.size()<<" capacity : " <<v.capacity()<<endl;
    // v.clear();
    // cout<<"Size : "<<v.size()<<" capacity : " <<v.capacity()<<endl;




    // vector<int> v1 (5,10);
    // vector<int> v2 (v1.begin(),v1.end()); //copy from to to
    // vector<int> vv2 (v1.begin(),v1.begin()+3); = {10,10} //copy from to to
    // // OR
    // vector<int> v3 (v1); //copy      vector 


 
    vector<int> vv;
    vv.push_back(10);
    vv.emplace_back(10); 
    //  Both are same but emplace_back take less time.
 
    return 0;
}