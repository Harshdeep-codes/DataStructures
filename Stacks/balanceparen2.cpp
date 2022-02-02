#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s)
{
    int n = s.size();
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (st.empty()==false)
        {
            if (st.top()== s[i]-1 || st.top()== s[i]-2)
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        
        
    }
    if (!st.empty())
    {
    return false;
    }
    else return true;
}
int main()
{
    string s = "{[()}";
    if (isValid(s))
    {
        cout << "String is Valid" << endl;
    }
    else
    {
        cout << "String is Not Valid" << endl;
    }
    return 0;
}