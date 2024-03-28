#ifndef QUEUEEXCEPTION_HPP
#define QUEUEEXCEPTION_HPP

#include <iostream>
using namespace std;

class QueueException {
    public:
        virtual string what() = 0;
};

class QueueFullException : public QueueException {
    public:
        string what() override {
            return "Queue telah penuh";
        }
};

class QueueEmptyException : public QueueException {
    public:
        string what() override {
            return "Queue telah kosong";
        }
};

#endif
