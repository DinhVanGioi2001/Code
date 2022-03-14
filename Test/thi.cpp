#include <bits/stdc++.h>
using namespace std;

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int td(string str, int base)
{
    int len = str.size();
    int power = 1;
    int num = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        num += val(str[i]) * power;
        power = power * base;
    }
    return num;
}

char rv(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

string fd(int base, int inputNum)
{
    string res = "";
    while (inputNum > 0)
    {
        res += rv(inputNum % base);

        inputNum /= base;
    }
    reverse(res.begin(), res.end());

    return res;
}
void cb(string s, int b)
{
    int num = td(s, 2);
    string ans = fd(b, num);
    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        string s;
        cin >> b >> s;
        cb(s, b);
    }

    return 0;
}
// 10010100010010101