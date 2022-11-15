////假定栈中存储的数据类型为int
//typedef char STDataType;
//
////支持动态增长的栈
//typedef struct Stack
//{
//	STDataType* _data;
//	//栈的容量
//	int _capacity;
//	//栈顶的下标
//	int _top;
//}Stack;
//
//void StackInit(Stack* ps)
//{
//	assert(ps);
//	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * 4);
//	if (tmp == NULL)
//	{
//		perror("malloc failed");
//		exit(-1);
//	}
//	ps->_data = tmp;
//	ps->_top = 0;
//	ps->_capacity = 4;
//}
//
//void StackPush(Stack* ps, STDataType x)
//{
//	assert(ps);
//	if (ps->_top == ps->_capacity)
//	{
//		STDataType* tmp = (STDataType*)realloc(ps->_data, ps->_capacity * 2 * sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc failed");
//			exit(-1);
//		}
//		ps->_data = tmp;
//		ps->_capacity *= 2;
//	}
//	ps->_data[ps->_top] = x;
//	ps->_top++;
//}
//
//bool StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->_top == 0;
//}
//
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	ps->_top--;
//}
//
//STDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	return ps->_data[ps->_top - 1];
//}
//
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->_top;
//}
//
//
//
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->_data);
//	ps->_data = NULL;
//	ps->_capacity = 0;
//	ps->_top = 0;
//}
//
//
//typedef struct {
//	Stack pushstack;
//	Stack popstack;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&obj->pushstack);
//	StackInit(&obj->popstack);
//
//	return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->pushstack, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//	int out = myQueuePeek(obj);
//	StackPop(&obj->popstack);
//	return out;
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (!StackEmpty(&obj->popstack))
//	{
//		return StackTop(&obj->popstack);
//	}
//	while (!StackEmpty(&obj->pushstack))
//	{
//		StackPush(&obj->popstack, StackTop(&obj->pushstack));
//		StackPop(&obj->pushstack);
//	}
//	return StackTop(&obj->popstack);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->pushstack) && StackEmpty(&obj->popstack);
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->pushstack);
//	StackDestroy(&obj->popstack);
//	free(obj);
//}
//
///**
// * Your MyQueue struct will be instantiated and called as such:
// * MyQueue* obj = myQueueCreate();
// * myQueuePush(obj, x);
//
// * int param_2 = myQueuePop(obj);
//
// * int param_3 = myQueuePeek(obj);
//
// * bool param_4 = myQueueEmpty(obj);
//
// * myQueueFree(obj);
//*/