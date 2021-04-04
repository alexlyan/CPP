#include <iostream>
#include <string>

int points(const std::array<std::string, 10>& games) {
  int res = 0;
  int length = games.size();
  if (length < 10) {
    return 0;
  } else {

    for (int i = 0; length > i; i++) {
      std::string s = games[i];

      std::string token_a = s.substr(0, s.find(":"));
      int a = std::stoi(token_a);
      std::string token_b = s.substr(2, s.find(":"));
      int b = std::stoi(token_b);
      std::cout << a << " " << b << "\n";

      if (a > b) {
        res += 3;
      } else if ( a < b ){
        continue;
      } else {
        res += 1;
      }

      }

  }
  return res;
}
