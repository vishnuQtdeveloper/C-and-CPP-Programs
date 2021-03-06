
//http://www.codechef.com/CDSM2014/problems/CHFBOOKS

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

	int t, n, m, p[10000];

	ll int sumn, summ;
	scanf("%d", &t);
	REP(tc, t){
		scanf("%d%d", &n,&m);
		summ = sumn = 0;
		REP(i, n){
			scanf("%d", &p[i]);
			sumn += p[i];
		}
		SORT(p, n);
		REP(i, m)
			summ += p[i];
		printf("%lld\n", sumn - 2*summ);
	}
	return 0;
}

//Solved