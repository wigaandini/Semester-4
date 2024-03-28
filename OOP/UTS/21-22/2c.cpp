#include "2a.hpp"
#include "2d.hpp"

int main (){
    Queue<int> q;
    

    try {
        q.dequeue();
        cout << q;
    } catch (QueueException& e){
        cout << e.what() << endl;
    } 

    try{
        q.enqueue(1);
    } catch (const exception& e){
        cout << e.what() << endl;
    }

    q.enqueue(8);
    cout << q;
    q.enqueue(6);
    cout << q;
    q.enqueue(4);
    cout << q;

    try {
        q.enqueue(9);
        cout << q;
    } catch (QueueException& e){
        cout << e.what() << endl;
    }

    cout << "dequeue: " << q.dequeue() << endl;
    cout << q;
    q.enqueue(2);
    cout << q;
    cout << "dequeue: " << q.dequeue() << endl;

    cout << q;


    cout << "-----------------------------------" << endl;

    Queue<float> qf;

    try {
        qf.dequeue();
        cout << qf;
    } catch (QueueException& e){
        cout << e.what() << endl;
    }

    qf.enqueue(8.5);
    cout << qf;
    qf.enqueue(6.5);
    cout << qf;
    qf.enqueue(4.5);
    cout << qf;

    try {
        qf.enqueue(9.5);
        cout << qf;
    } catch (QueueException& e){
        cout << e.what() << endl;
    }

    cout << "dequeue: " << qf.dequeue() << endl;
    cout << qf;
    qf.enqueue(2);
    cout << qf;
    cout << "dequeue: " << qf.dequeue() << endl;

    cout << qf;


    cout << "-----------------------------------" << endl;

    Queue<Mobil> qm;
    try {
        qm.dequeue();
        cout << qm;
    } catch (QueueException& e){
        cout << e.what() << endl;
    }

    Mobil m1("Toyota", "B 1234 CD", 2019);
    Mobil m2("Honda", "B 4321 CD", 2018);
    Mobil m3("Suzuki", "B 1111 CD", 2017);
    Mobil m4("Mitsubishi", "B 2222 CD", 2016);

    qm.enqueue(m1);
    cout << qm;
    qm.enqueue(m2);
    cout << qm;
    qm.enqueue(m3);
    cout << qm;

    try {
        qm.enqueue(Mobil("Daihatsu", "B 3333 CD", 2015));
        cout << qm;
    } catch (QueueException& e){
        cout << e.what() << endl;
    }

    cout << "dequeue: ";
    Mobil m = qm.dequeue();
    cout << m << endl;
    cout << qm;
    qm.enqueue(m4);
    cout << qm;
    cout << "dequeue: ";
    m = qm.dequeue();
    cout << m << endl;

    cout << qm;


    
    return 0;
}