#include <iostream>
#include <thread>

int counter = 0;

void work(){
    for(int i = 0 ;i<100000;i++){
        counter++;
    }
}
int main(){
    std::thread t1(work);
    std::thread t2(work);

    t1.join();
    t2.join();

    std::cout << counter;
}

