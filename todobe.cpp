    //
    // Created by liuliu on 2020/10/20.
    //
     
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int te;
        cin >> te;
        while(te--)
        {
            int n;
            cin >> n;
            int num[n];
     
            for(int t=0;t<n;t++)
            {
                cin >> num[t];
            }
            int lfpos,rtpos;
            for(int t=0;t<n;t++)
            {
                if(num[t]==1)
                {
                    lfpos = t;
                    break;
                }
            }
            for(int t=n;t>=0;t--)
            {
                if(num[t]==1)
                {
                    rtpos = t;
                    break;
                }
            }
            int cnt = 0;
            for(int t=lfpos;t<=rtpos;t++)
            {
                if(num[t]==0)
                    cnt++;
            }
            printf("%d\n",cnt);
          
        }
        return 0;
    }
