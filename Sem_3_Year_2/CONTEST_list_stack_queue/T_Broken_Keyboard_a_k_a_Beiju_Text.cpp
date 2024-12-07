#include <iostream>
#define ll long long int
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    iOS

    string s;
    while (cin >> s)
    {
        string s_left_part = "", s_right_part = "";
        cin >> s;
        bool bracket_on = false;
        string tmp;
        for (int i = 0; i < s.size(); i++)
        {
            if (bracket_on == false && s[i] == '[')
                bracket_on = true;
            else if (bracket_on == true && s[i] == ']')
            {
                if (!tmp.empty())
                    s_right_part = tmp + s_right_part;
                tmp.erase();
                if (i < s.size() - 2 && s[i + 1] != ']')
                    bracket_on = false;
            }
            else if (bracket_on == false && s[i] != '[')
            {
                s_left_part += s[i];
            }
            else if (bracket_on == true && s[i] != ']')
            {
                if (s[i] == '[')
                    continue;
                tmp += s[i];
            }
            // if(!tmp.empty()) cout << i << " - " << tmp << " ";
        }
        cout << s_right_part + s_left_part << nl;
    }

    return 0;
}