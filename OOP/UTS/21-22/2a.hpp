#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "2b.hpp"
#include "2d.hpp"
#include <iostream>
using namespace std;

int SIZE = 3;

template <class T>
class Queue {
    private:
        int neff;
        T *data;
    public:
        Queue(){
            neff = 0;
            data = new T[SIZE];
        }
        ~Queue(){
            delete[] data;
        }
        void enqueue(T item){
            if (neff == SIZE) throw QueueFullException();
            data[neff] = item;
            neff++;
        }
        T dequeue(){
            if (neff == 0) throw QueueEmptyException();
            T temp = data[0];
            for (int i = 0; i < neff-1; i++){
                data[i] = data[i+1];
            }
            neff--;
            return temp;
        }
        friend ostream& operator<<(ostream& os, const Queue<T>& q){
            for (int i = 0; i < q.neff; i++){
                os << q.data[i];
                os  << " ";
            }
            os << endl;
            return os;
        }
};

#endif