#include <iostream>
#include <map>
using namespace std;

void print(char *str, map<string, int> &m) {
  map<string, int, greater<string> >::iterator it;  // greater<a, b> (if a > b -> true)
  cout << str << " の要素数： " << m.size() << endl;
  for (it = m.begin(); it != m.end(); it++)
    cout << "  " << (*it).first << " " << (*it).second;
  cout << endl;
}

int main() {
  map<string, int> m;
  m.insert(pair<string, int>("suzuki", 40));
  m.insert(make_pair("yamada", 70));
  print("m", m);
  
  return 0;
}
