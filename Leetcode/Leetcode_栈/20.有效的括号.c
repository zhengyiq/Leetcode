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
//bool isValid(char* s) {
//	Stack sta;
//	StackInit(&sta);
//	while (*s)
//	{
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			StackPush(&sta, *s);
//			++s;
//		}
//		else
//		{
//			if (StackEmpty(&sta))
//			{
//				StackDestroy(&sta);
//				return false;
//			}
//			char top = StackTop(&sta);
//			StackPop(&sta);
//			if ((*s == ')' && top != '(')
//				|| (*s == ']' && top != '[')
//				|| (*s == '}' && top != '{'))
//			{
//				StackDestroy(&sta);
//				return false;
//			}
//			else
//			{
//				++s;
//			}
//		}
//	}
//	bool ret = StackEmpty(&sta);
//	StackDestroy(&sta);
//	return ret;
//}