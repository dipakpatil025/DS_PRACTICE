#include <iostream>
using namespace std;

class Constructor
{
public:
    string nm;

    // cout << "hello";
    // Constructor()
    // {
    //     this->nm = "dipak";
    // }
    // Constructor(string nm)
    // {
    //     this->nm = nm;
    // }
    // void changeName(string nm)
    // {
    //     this->nm = nm;
    // }

    // Contrutor overloading

    // Constructor()
    // {
    //     this->nm = "dipak";
    // }

    // Constructor(const Constructor *other)
    // {
    //     this->nm = other->nm;
    // }

    // CALLING CONSTRUCTOR FROM ANOTHER CONTRUCTOR

    Constructor()
    {
        cout << "das" << endl;
        Constructor("jj");
    }
    Constructor(string name)
    {
        this->nm = "dipak";
    }
};

int main()
{
    // Constructor *c1 = new Constructor();
    // Constructor c2;
    // Constructor c3;
    // c2.changeName("kk");
    // cout << c1->nm << endl;
    // cout << c2.nm << endl;
    // cout << c3.nm << endl;

    // // Constructor overloagin
    // Constructor c1;
    // c1.nm = "abc";

    // Constructor c2(c1);

    // cout << &c1.nm << endl;
    // cout << &c2.nm << endl;

    // CALLING CONSTRUCTOR FROM ANOTHER CONTRUCTOR

    Constructor c1;
    c1.nm = "aaaa";
    cout << c1.nm << endl;

    Constructor c2 = c1;

    cout << c2.nm << endl;

    c2.nm = "ll";
    cout << c2.nm << endl;
    return 0;
}