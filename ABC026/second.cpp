#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


/*
double GaussLegendre(int n) {
  int i;
  double a = 1.0, b = 1.0 / sqrt(2.0), t = 1.0 / 4, p = 1.0, tmp = 0;
  double ret;
  for (i = 0; i < n; i++) {
    tmp = a;
    a = (tmp + b) / 2;
    b = sqrt(tmp * b);
    t = t - (p * (a - tmp) * (a - tmp));
    p = 2 * p;
  }
  return (a + b) * (a + b) / (4 * t);
}
*/
int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    vector<double> vec(N);

    for(auto &x:vec){
        cin>>x;
    }
    sort(vec.begin(),vec.end());

     double ans=0;

    for(int i=0;i<N;++i){
        if(i%2==0){
            ans+=vec[i]*vec[i];
        }else{
            ans-=vec[i]*vec[i];
        }
    }

    ans*=M_PI;

    printf("%0.10f\n",abs(ans));

    return 0;
}
