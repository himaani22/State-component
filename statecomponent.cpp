#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {} 

    void increment() {
        count++;
        render();
    }

    void render() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter myCounter;
    myCounter.increment();
    return 0;
}
