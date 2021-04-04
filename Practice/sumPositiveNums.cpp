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
