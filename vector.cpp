#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  vector<int> v = {1, 6, 10, 8, 4};
  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i]<<" ";
  }
    return 0;
}
