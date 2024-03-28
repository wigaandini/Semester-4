#include <iostream>
#include <queue>

void printPQ(const std::priority_queue<int>& pq){
    std::priority_queue<int> temp = pq;
    while(!temp.empty()){
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << std::endl;
}

int main(){
    std::priority_queue<int> pq;

    for(int i = 0; i < 50; i++){
        pq.push(rand()%100);
    }

    printPQ(pq);

    // tambah birokrat
    pq.push(25);
    
    printPQ(pq);

    // Vote pemimpin
    pq.pop();

    printPQ(pq);
    
    return 0;
}