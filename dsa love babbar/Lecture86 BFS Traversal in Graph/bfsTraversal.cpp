#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
        cin >> T;
        for(int i = 0; i < T ; i++){
	    int N;
	    cin >> N;
            if(N == 3){
                cout<< 3 << " " << 2 << " " << 1<< endl;
                continue;
            }
	    vector<int> ans(N);
	    ans[0] = N-1;
	    ans[N-1] = N;
	    ans[1] = N-2;
	    ans[N-2] = N-3;
	    for(int j = 2; j < N-2;j++){
	        ans[j]=N-(j+2);
	    }
	    for(int j = 0;j < N;j++){
	        cout << ans[j] << " ";
	    }
	    cout << endl;
	}

}
