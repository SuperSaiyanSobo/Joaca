#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int k = 1;
    int a[2*n][2*n] = {1};
    int niv = 1;
    int ok = 1;
    int count = 0;
    for(int i = n; i >= 1 ; i--){
    	for(int j = 1 + count; j <= 2*n - k - count; j++){
    		if(ok == 1){
    			a[i][j] = 1;
    			ok = 0;
    		}
    		else{
    			a[i][j] = 0;
    			ok = 1;
    		}
    	}
    	if(ok == 1){
    		ok = 0;
    	}
    	else{
    		ok = 1;
    	}
    	count++;
    }
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= 2*n - 1; j++){
    		if(a[i][j] == 1){
    			cout<<"*";
    		}
    		else{
    			cout<<".";
    		}
    	}
    	cout<<endl;
    }
}