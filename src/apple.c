#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
  int l = 0;
  for(int j = 0; j < n; j++){
    l += (A[j] + m - 1) / m;
  }
  if (l <= k){
    return 1;
  }
  else return 0;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while(ub - lb > 1) {
    int mid = (lb + ub) / 2;
    if(p(mid)){
      ub = mid;
    }
    else {
      lb = mid;
    }
  }
  printf("%d\n", ub);

  return 0;
}
