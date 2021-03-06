
//https://www.hackerrank.com/contests/w12/challenges/priyanka-and-toys

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
struct Edge{ int v, w; };

int main(){

	int n, a[100000], c = 0;
	vector<int> cost[100000];
	scanf("%d", &n);
	REP(i, n)
		scanf("%d", &a[i]);
	SORT(a, n);
	REP(i, n){
		if (cost[c].size() == 0)
			cost[c].push_back(a[i]);
		else if (a[i] <= cost[c][0] + 4)
			cost[c].push_back(a[i]);
		else
			cost[++c].push_back(a[i]);
	}
	cout << c + 1 << endl;
	return 0;
}

//Preliminary Solved