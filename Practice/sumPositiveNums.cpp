# First Solution
#include <vector>
using namespace std;

int positive_sum (const std::vector<int> arr){
    int sum_pos = 0;

    if (arr.size() == 0) {
      return 0;
    }

    for (int i = 0; arr.size() > i; i ++) {
      if (arr[i] >= 0) {
        sum_pos += arr[i];
      }
    }
  return sum_pos;

}


// Second Solution
#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
  int res = 0;
  for (const std::string& g : games)
    res += g[0] > g[2] ? 3 : g[0] == g[2] ? 1 : 0;
  return res;
}

//Third Solution

int points(const std::array<std::string, 10>& games) {
    int sum = 0;

  for (int i = 0; i < 10; i++) {
    int x, y;

    sscanf(games[i].c_str(), "%d:%d", &x, &y);
    sum += x == y ? 1: x > y ? 3: 0;

  }
  return sum;
}
