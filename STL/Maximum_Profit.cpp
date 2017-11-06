#include<iostream>
#include<algorithm>

using namespace std;

/*
Max - Min
def
  Rj - Ri(j > i)
  Rt(t = 0, 1, 2,...,n-1 )
  2 =< n
  n =< 200000
  1 =< Rt
  Rt =< E9

疑似code
for 1 =< j =< n-1
  for 0 =< i =< j-1
    maxv = max(maxv, R[j] - R[i])

2.2
minv = R[0]
for 1 =< j =< n-1
  maxv = max(maxv, R[j] - minv)
  minv = min(minv, R[j])
*/
