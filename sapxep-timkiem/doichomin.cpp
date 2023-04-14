    #include<bits/stdc++.h>
    using namespace std;
    int k;
    bool cmp(int a , int b){
        return abs(a-k)<abs(b-k);
    }
    int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n+5],b[n+5];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
    
        int dem=0;
        for(int i=1;i<=n;i++){
            int idx=i;
            int min=a[i];
            for(int j=i+1;j<=n;j++){
                if(a[j]<min){
                    idx=j;
                    min=a[j];
                }
            }
            if(a[i]>min){
                swap(a[i],a[idx]);
                dem++;
            }
        }
        cout<<dem<<endl;
    }
    }