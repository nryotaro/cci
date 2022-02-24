#include "inter10.h"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

Person::Person(int birth, int death) : birth(birth), death(death){};

int solve(vector<Person> &people) {
  // year[0] -> 1900
  vector<int> year(102, 0);

  for (Person person : people) {
    year[person.birth - 1900] += 1;
    year[person.death - 1900 + 1] -= 1;
  }
  for (int i = 0; i < 101; i++) {
    year[i + 1] += year[i];
  }
  // Person(1989, 1996)
  // year[1989] = 1;
  // year[1990] = 1;
  // ..
  // year[1996] = 1;
  // year[1997] = 0;
  int num_alive_people = -1;
  int index = -1;
  for (int i = 0; i < 102; i++) {
    if (num_alive_people < year[i]) {
      num_alive_people = year[i];
      index = i;
    }
  }
  return index + 1900;
}
