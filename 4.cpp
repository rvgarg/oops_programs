#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,p[100],res=0;
	    cin>>n;
	    for(int i=0;i<n;i++)cin>>p[i];
	    for(int i=0;i<n;i++){
	        bool good = true;
	        for(int j=max(0,i-5);j<i;j++){
                    cout<<"its j"<<j<<endl;
	            if(p[j]<p[i])good=false;
	        }
	        if(good){cout<<"Now"<<endl;res+=1;}
	    }
	    cout<<res<<endl;
	}
	return 0;
}
