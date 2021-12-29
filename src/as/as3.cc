#include "as3.h"
#include <bits/stdc++.h>

void solve(char *s, int length) {
  int space_num = 0;
  for (int i = 0; i < length; i++) {
    if(s[i] == ' ')
      space_num++;
  }
  int point = length + space_num * 2 - 1;
  s[point+1] = '\0';
  for(int i = length -1;i>=0;i--) {
    if(s[i] == ' ') {
      s[point--] = '0';
      s[point--] = '2';
      s[point--] = '%';
    } else {
      s[point--] = s[i];
    }
  }
  
}
