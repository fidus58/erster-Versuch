#include <iostream>
#include <functional>

int main() {

[out = std::ref(std::cout<<"Hallo")](){out.get()<<" Welt!\n";}();

}

