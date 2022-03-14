 #include<bits/stdc++.h>


using namespace std;


int main()

{

        int h;

        cin << h;

        while (h)

        {

        int x, y, p, t = 1;

        cin >> x >> y >> p;

        for (int i = 0; i < y; i++)

        t = t * x % p;

        cout << t;

        h--;

        }

        return 0;

}
