#ifndef QUEUETEMPLATECLASS_H
#define QUEUETEMPLATECLASS_H
#define MAX 20

template <typename T> class Queue
{
    public:
        Queue();
        void add(T data);
        void del();
        void printQueue();
        T getStart();
        T getEnd();
        virtual ~Queue();
    protected:
    private:

        T *arr;
        int head;
        int tail;
};

#endif // QUEUETEMPLATECLASS_H
