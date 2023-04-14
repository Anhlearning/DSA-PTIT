    #include<bits/stdc++.h>

    using namespace std;
    using ll=long long ;

    int main(){
        int tc;
        cin>>tc;
        while(tc--){
            int n;
            cin>>n;
            ll a[n+3];
            ll dp[n+3];
            memset(dp,0,sizeof(dp));
            for(int i=1;i<=n;i++){
                cin>>a[i];
                dp[i]=a[i];
            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<i;j++){
                    if(a[j]<a[i]){
                        dp[i]=max(dp[i],dp[j]+a[i]);
                    }
                }
            }
            cout<<*max_element(dp+1,dp+n+1)<<endl;
        }    
    }