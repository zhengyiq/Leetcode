////数据类型
//typedef int QDataType;
//
////队列的结点
//typedef struct QueueNode
//{
//	QDataType _data;
//	struct QueueNode* _next;
//}QNode;
//
////队列的处于入的指针
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//	int size;
//}Queue;
//
////队列初始化
//void QueueInit(Queue* pq);
//
////队列销毁
//void QueueDestory(Queue* pq);
//
////入队列
//void QueuePush(Queue* pq, QDataType x);
//
////出队列
//void QueuePop(Queue* pq);
//
////队列首元素
//QDataType QueueFront(Queue* pq);
//
////队列尾元素
//QDataType QueueBack(Queue* pq);
//
////队列是否为空
//bool QueueEmpty(Queue* pq);
//
////队列元素个数
//int QueueSize(Queue* pq);
//
////队列初始化
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//
//	pq->head = NULL;
//	pq->tail = NULL;
//	pq->size = 0;
//}
//
////队列销毁
//void QueueDestory(Queue* pq)
//{
//	assert(pq);
//
//	while (pq->head != NULL)
//	{
//		QNode* del = pq->head;
//		pq->head = pq->head->_next;
//		free(del);
//	}
//
//	pq->head = NULL;
//	pq->tail = NULL;
//	pq->size = 0;
//}
//
////入队列
//void QueuePush(Queue* pq, QDataType x)
//{
//	assert(pq);
//
//	if (pq->head == NULL)
//	{
//		QNode* newnode = (QNode*)malloc(sizeof(QNode));
//		if (newnode == NULL)
//		{
//			perror("malloc failed");
//			exit(-1);
//		}
//		newnode->_data = x;
//		pq->head = newnode;
//		pq->tail = newnode;
//		pq->tail->_next = NULL;
//	}
//	else
//	{
//		QNode* newnode = (QNode*)malloc(sizeof(QNode));
//		if (newnode == NULL)
//		{
//			perror("malloc failed");
//			exit(-1);
//		}
//		newnode->_data = x;
//		pq->tail->_next = newnode;
//		pq->tail = pq->tail->_next;
//		pq->tail->_next = NULL;
//	}
//
//	pq->size++;
//}
//
////出队列
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	//assert(pq->head != NULL);
//	assert(!QueueEmpty(pq));
//
//	Queue* del = pq->head;
//	pq->head = pq->head->_next;
//	free(del);
//
//	if (pq->head == NULL)
//	{
//		pq->tail = NULL;
//	}
//
//	pq->size--;
//}
//
////队列首元素
//QDataType QueueFront(Queue* pq)
//{
//	assert(pq);
//	//assert(pq->head != NULL);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->_data;
//}
//
////队列尾元素
//QDataType QueueBack(Queue* pq)
//{
//	assert(pq);
//	//assert(pq->head != NULL);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->_data;
//}
//
////队列是否为空
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//
//	return pq->head == NULL && pq->tail == NULL;
//}
//
////队列元素个数
//int QueueSize(Queue* pq)
//{
//	assert(pq);
//
//	return pq->size;
//}
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&obj->q1);
//	QueueInit(&obj->q2);
//	return obj;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (QueueEmpty(&(obj->q1)))
//	{
//		QueuePush(&(obj->q1), x);
//	}
//	else
//	{
//		QueuePush(&(obj->q2), x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	int top = 0;
//	Queue* EmptyQ = &(obj->q1);
//	Queue* UNEmptyQ = &(obj->q2);
//	if (QueueEmpty(&(obj->q2)))
//	{
//		EmptyQ = &(obj->q2);
//		UNEmptyQ = &(obj->q1);
//	}
//	while (QueueSize(UNEmptyQ) > 1)
//	{
//		top = QueueFront(UNEmptyQ);
//		QueuePop(UNEmptyQ);
//		QueuePush(EmptyQ, top);
//	}
//	top = QueueFront(UNEmptyQ);
//	QueuePop(UNEmptyQ);
//	return top;
//}
//
//int myStackTop(MyStack* obj) {
//	int top = 0;
//	Queue* EmptyQ = &(obj->q1);
//	Queue* UNEmptyQ = &(obj->q2);
//	if (QueueEmpty(&(obj->q2)))
//	{
//		EmptyQ = &(obj->q2);
//		UNEmptyQ = &(obj->q1);
//	}
//	while (QueueSize(UNEmptyQ) >= 1)
//	{
//		top = QueueFront(UNEmptyQ);
//		QueuePop(UNEmptyQ);
//		QueuePush(EmptyQ, top);
//	}
//	return top;
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return (QueueEmpty(&(obj->q1)) && QueueEmpty(&(obj->q2)));
//}
//
//void myStackFree(MyStack* obj) {
//	QueueDestory(&(obj->q1));
//	QueueDestory(&(obj->q2));
//	free(obj);
//}
//
///**
// * Your MyStack struct will be instantiated and called as such:
// * MyStack* obj = myStackCreate();
// * myStackPush(obj, x);
//
// * int param_2 = myStackPop(obj);
//
// * int param_3 = myStackTop(obj);
//
// * bool param_4 = myStackEmpty(obj);
//
// * myStackFree(obj);
//*/