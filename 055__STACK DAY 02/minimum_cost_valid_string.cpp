#include <iostream>
#include<stack>
using namespace std; 

int findMinimumCost(string str) {
  if(str.length() % 2 == 1) {
    return -1;
  }

  stack<char> s;
  for(int i = 0; i < str.length(); i++) {
    char ch = str[i];

    if(ch == '{') {
      s.push(ch);
    }
    else {
      // ch is a closed brace
      if (!s.empty() && s.top() == '{') { // Fix logical operator here
        s.pop();
      }
      else {
        s.push(ch);
      }
    }
  }

  // Stack contains invalid expression
  int a = 0;
  int b = 0;
  while(!s.empty()) {
    if(s.top() == '{') {
      b++;
    }
    else {
      a++;
    }
    s.pop();
  }
  
  int ans = (a + 1) / 2 + (b + 1) / 2;
  return ans;
}

int main() {
  string expression = "}}}}{{{{";
  int result = findMinimumCost(expression);
  cout << "Minimum cost: " << result << endl;
  return 0;
}
