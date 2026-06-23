#include <iostream>
#include <thread>
#include <mutex>

std::mutex m;

void work(int id){
   m.lock();
   std::cout<< "Worker "<<id<<'\n';
   m.unlock();
}

int main(){
    std::thread t1(work,1);
    std::thread t2(work,2);
    std::thread t3(work,3);

    t1.join();
    t2.join();
    t3.join();
}