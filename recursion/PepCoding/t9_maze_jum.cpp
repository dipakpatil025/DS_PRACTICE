#include <bits/stdc++.h>
using namespace std;
void print_path(string s, int r, int c, int n)
{
    if (r == n - 1 && c == n - 1)
    {
        cout << s << endl;
        return;
    }

   
        for (int i = 1; i <= n - c; i++)
        {
            char ch = '0' + i;
            print_path(s + 'h' + ch, r, c + i, n);
        }
    

    
        for (int i = 1; i <= n - r; i++)
        {
            char ch = '0' + i;
            print_path(s + 'v' + ch, r + i, c, n);
        }
    
  
        for (int i = 1; i <= n - r && n-c; i++)
        {
            char ch = '0' + i;
            print_path(s + 'd' + ch, r + i, c + i, n);
        }
    
}
int main()
{
    int n = 3;
    print_path("", 0, 0, n);
    return 0;
}