#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> vi = {0, 0 , 0}; 
    while(n--){
    	int x, y, z;
    	cin>>x>>y>>z;
    	vi[0]+=x;
    	vi[1]+=y;
    	vi[2]+=z;
    }
    bool flag = true;
    for(auto item: vi){
    	if (item!=0){
    		flag = false;
    		break;
    	}
    }

    if (flag){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }
    return 0;
}