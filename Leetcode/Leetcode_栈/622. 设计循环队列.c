//typedef struct {
//    int* a;
//    int head;
//    int tail;
//    int k;
//} MyCircularQueue;
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj);
//
//bool myCircularQueueIsFull(MyCircularQueue* obj);
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    if (obj == NULL)
//    {
//        perror("malloc failed");
//        exit(-1);
//    }
//    obj->a = (int*)malloc(sizeof(int) * (k + 1));
//    obj->head = 0;
//    obj->tail = 0;
//    obj->k = k;
//    return obj;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj))
//    {
//        return false;
//    }
//
//    obj->a[obj->tail] = value;
//    obj->tail = (obj->tail + 1) % (obj->k + 1);
//    return true;
//
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return false;
//    }
//
//    obj->head = (obj->head + 1) % (obj->k + 1);
//    return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//
//    return obj->a[obj->head];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//
//    int rear = (obj->tail - 1 + obj->k + 1) % (obj->k + 1);
//
//    return obj->a[rear];
//
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    if (obj->head == obj->tail)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//    if (((obj->tail + 1) % (obj->k + 1)) == obj->head)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    free(obj);
//}
//
///**
// * Your MyCircularQueue struct will be instantiated and called as such:
// * MyCircularQueue* obj = myCircularQueueCreate(k);
// * bool param_1 = myCircularQueueEnQueue(obj, value);
//
// * bool param_2 = myCircularQueueDeQueue(obj);
//
// * int param_3 = myCircularQueueFront(obj);
//
// * int param_4 = myCircularQueueRear(obj);
//
// * bool param_5 = myCircularQueueIsEmpty(obj);
//
// * bool param_6 = myCircularQueueIsFull(obj);
//
// * myCircularQueueFree(obj);
//*/