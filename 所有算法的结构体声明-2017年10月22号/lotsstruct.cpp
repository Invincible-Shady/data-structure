// 到2107年10月22号所有的算法的结构体声明

#define MaxSize 50
typedef ElemType char;
//(1)顺序表
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;

//(2)链表
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LinkNode;

//(3)双链表
typedef struct DNode{
    ElemType data;
    struct DNode *prior;//指向前驱结点
    struct DNode *next;//指向后继结点
}DLinkNode;

//(4)栈的顺序结构
typedef struct{
    ElemType data[MaxSize];
    int top;//栈顶指针，即存放栈顶元素在data数组中的下标
}SqStack;

//(5)共享栈的顺序结构
typedef struct{
    ElemType data[MaxSize];
    int top1,top2;
}DStack;

//(6)栈的链式存储结构
typedef struct linknode{
    ElemType data;
    struct linknode *next;
}LinkStNode;

//(7)队列的顺序队
typedef struct{
    ElemType data[MaxSize];
    int front,rear;//进队rear+1,出队front+1
}SqQueue;

//(8)队列的环形队
typedef struct{
    ElemType data[MaxSize];
    int front,rear;
}SqQueue;
front=(front+1)%MaxSize;
rear=(rear+1)%MaxSize;

//(9)链队存储结构
typedef struct qnode{
    ElemType data;//存放元素
    struct qnode *next;//下一个结点指针
}DataNode;//链队的数据结点的类型

typedef struct{
    DataNode *front;//指向队首结点
    DataNode *rear;//指向队尾结点
}LinkQuNode;//链队结点类型

//(10)顺序串
typedef struct{//固定是char类型
    char data[MaxSize];
    int length;
}SqString;

//(11)链串(太浪费不提倡)
typedef struct snode{
    char data;
    struct snode *next;
}LinkStrNode;