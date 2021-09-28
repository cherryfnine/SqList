#pragma
#ifndef __SqList__
#define __SqList__
constexpr int MaxSize = 50;
typedef int ElemType;
typedef struct {
  ElemType data[MaxSize];
  int length;
} SqList;
#endif

//初始化顺序表
void InitList(SqList &L);

//给顺序表赋值
void Assign(SqList &L, ElemType a, int n);

//增加顺序表的长度
void CreaseList(SqList &L, int len);

//顺序表第i个位置插入元素
bool InsertElem(SqList &L, int i, ElemType e);

//顺序表删除第i个元素,并返回被删除的元素
bool DeleteElem(SqList &L, int i, ElemType &e);

//顺序表查找第i个元素，并返回
ElemType LocateElem(SqList &L, int i);

//判断顺序表是否为空
bool IsEmpty(SqList &L);

//求顺序表的长度
int ListLength(SqList &L);

//销毁顺序表
void DestroyList(SqList &L);

//输出顺序表
void DisPlay(SqList &L);