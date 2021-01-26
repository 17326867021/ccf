# include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int map[n][n];
	// 输入 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> map[i][j];
		}
	}
	// 输出 
	for(int sum = 0; sum <= (n-1)*2 ; sum++){
		for(int i = 0; i <= sum; i++){
			if(sum%2){ // sum是奇数 
				if(i < n && sum-i < n){
					cout << map[i][sum-i] << " ";
				}
			}else{
				if(i < n && sum-i < n){
					cout << map[sum-i][i] << " ";
				}
			}  
		}
	}
	
	return 0;
}
