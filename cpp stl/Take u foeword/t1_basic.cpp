#include<bits/stdc++.h>
using namespace std;

namespace dipak
{
    int val = 25;
} // namespace dipak
struct HaveSome
{
   int fun;
   HaveSome()
   {
      fun = 69;
   }
};


struct node{
    std::string str;
    int age;
    char fav_char;
    node(string name_ ,int  age_ ,char  fav_c_){
        cout<<"hello MF";
        str = name_;
        age = age_;
        fav_char =  fav_c_;
    }
};
int main()
{
    int val = 10;
    
    std::cout<<val<<"\n";   
    std::cout<<dipak::val<<"\n";

    // It Works by wrong way of defineing
       
    
    // user_define_dataTypr ele1;
    // ele1.str = "dipak";
    // ele1.age = 88;
    // ele1.fav_char = 'd';
    // cout<<"age : "<<ele1.age<<endl;       

    // Right way of defineing
    // user_define_dataTypr d = new user_define_dataTypr("Diapk",88,'c');

   
    HaveSome *k = new HaveSome();
    cout<<(k)->fun<<endl;

    node *n = new node("Dipak",88,'b');
    cout<<n->age<<endl;
    return 0;
}