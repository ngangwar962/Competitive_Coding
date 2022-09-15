#include<iostream.h>
using namespace std;

string lookandsay(int n) 
    {
        string st="1";
        int i,j,k;
        if(n==1)
        return "1";
        if(n==2)
        return "11";
        if(n==3)
        return "21";
        st = "21";
        for(i=4;i<=n;i++)
        {
            map<int,int> m;
            j=0;
            int lth = st.length();
            int count = 1;
            
            string result="";
            while(j<(lth-1))
            {
                while(j<(lth-1) && st[j]==st[j+1])
                {
                    count++;
                    j++;
                }
                if(j!=(lth-1) && st[j]!=st[j+1])
                {
                    string digit = to_string(count);
                    result += (digit+st[j]);
                    count=1;
                }
                j++;
            }
            string digit = to_string(count);
            if(j==lth)
            result += (digit+st[j-1]);
            else
            result += (digit+st[j]);
            st = result;
        }
        return st;
    }