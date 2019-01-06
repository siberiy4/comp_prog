#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	
	int N,M;

	cin>>N>>M;

	vector<vector<bool>> gra(N,vector<bool>(N));
	vector<int> cou(N);


	for(int i=0;i<M;i++){
		int A,B;
		cin>>A>>B;
		cou[A-1]++;
		cou[B-1]++;

		gra[A][B]=true;
		gra[B][A]=true;

	}

	int co=0;
	for(co=0;co<N;co++){
		if(cou[co]==1){
			break;
		}
	}


	for(int i=)





}
