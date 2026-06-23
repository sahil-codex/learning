#include <iostream>
#include <thread>
using namespace std;

void work(int id){
     cout<< "Worder"<<id<<'\n';    
}

int main(){
    thread t1(work,1);
    thread t2(work,2);
    thread t3(work,3);
    thread t4(work,4);
    thread t5(work,5);
    
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    
    return 0;
}