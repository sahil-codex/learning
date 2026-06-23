#include <iostream>
#include <thread>
#include <mutex>

std::mutex m;
int counter = 0 ;

void work(){
    for(int i = 0 ;i<100000;i++){
        m.lock();
        counter++;
        m.unlock();
    }
}

int main(){
    std::thread t1(work);
    std::thread t2(work);

    t1.join();
    t2.join();

    std::cout << counter;

}