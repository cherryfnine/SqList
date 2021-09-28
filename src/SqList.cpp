#include "SqList.h"
#include <iostream>
#include <malloc.h>
using namespace std;
//使用数组初始化顺序表
// void InitList(SqList &L, ElemType *a[], int n) {

// }

// //给顺序表赋值
// void Assign(SqList &L, ElemType a, int n) {
//   for (int i = 0; i < n; ++i) {
//     L.data[i] = a[i];
//   }
// }

//增加顺序表的长度
// void CreaseList(SqList &L, int len);

//顺序表第i个位置插入元素
bool InsertElem(SqList &L, int i, ElemType e) {
  if (i < 1 || i > L.length) {
    return false;
  }
  if (L.length >= MaxSize) {
    return false;
  }
  for (int j = L.length; j < i; --j) {
    L.data[j] = L.data[j - 1];
  }
  L.data[i - 1] = e;
  L.length++;
  return true;
}

//顺序表删除第i个元素,并返回被删除的元素
bool DeleteElem(SqList &L, int i, ElemType &e) {
  if (i < 0 || i > L.length) {
    return false;
  }
  e = L.data[i - 1];
  for (int j = i; j < L.length; ++j) {
    L.data[j - 1] = L.data[j];
  }
  L.length--;
  return true;
}

//顺序表查找第i个元素，并返回
ElemType LocateElem(SqList &L, int i) { return L.data[i - 1]; }

//判断顺序表是否为空
bool IsEmpty(SqList &L) {
  if (L.length > 0) {
    return true;
  }
}

//求顺序表的长度
int ListLength(SqList &L) { return L.length; }

//销毁顺序表
void DestroyList(SqList &L);

//输出顺序表
void DisPlay(SqList &L) {
  for (int i = 0; i < L.length; ++i) {
    cout << L.data[i] << ' ';
  }
  cout << endl;
}