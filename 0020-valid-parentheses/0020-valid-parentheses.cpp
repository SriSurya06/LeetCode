class Solution {
public:
    bool isValid(string s) {
        int i;
    int st[10000];
    int t=-1;
    for(i=0;s[i]!='\0';i++)
    {
        if(t==-1)
        {
            t++;
            st[t]=s[i];
        }
        else if(st[t]=='{'&&s[i]=='}' || st[t]=='['&&s[i]==']' || st[t]=='('&&s[i]==')')
        {
            t--;
        }
        else
        {
            t++;
            st[t]=s[i];
        }
    }
    if(t==-1)
    return 1;
    else
    return 0;
    }
};