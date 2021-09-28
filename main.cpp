#include "SqList.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  SqList L;
  int a[] = {1, 5, 2, 6, 8, 9, 4};
  for (int i = 0; i < 7; ++i) {
    L.data[i] = a[i];
    L.length = 7;
  }
  DisPlay(L);
  InsertElem(L, 6, 15);
  DisPlay(L);
  int e = 0;
  DeleteElem(L, 4, e);
  cout << e << endl;
  cout << LocateElem(L, 5) << endl;
  cout << "hello" << endl;
  return 0;
}
