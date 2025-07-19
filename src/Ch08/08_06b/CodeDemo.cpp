// Complete Guide to C++ Programming Foundations
// Exercise 08_06
// Queues and Stacks, by Eduardo Corpeño 


//queue: first in first out (execute in sequential order) (used for scheduled events)
//stack: last in first out  (execute in reverse order) (used for undo operation)

//queue: horizontal, so use front()
//stack: vertical, so use top()
#include <iostream>
#include <queue>
#include <stack>

int main(){
    std::queue<std::string> eventQueue;  // FIFO container for game events
    std::stack<std::string> undoStack;   // LIFO container for undo operation

    // Adding events to the queue
    eventQueue.push("Move Forward"); //push() add elements to the back of the queue
    eventQueue.push("Collect Coin");
    eventQueue.push("Attack Enemy");

    //{"Move Forward", "Collect Coin", "Attack Enemy"}

    // Processing events in FIFO order
    while (!eventQueue.empty()){  //while the Queue is not empty
        std::string currentEvent = eventQueue.front();
        std::cout << "Performing event: " << currentEvent << std::endl;
        eventQueue.pop(); //remove the element in front of the queue [QUEUE.POP()]
        undoStack.push(currentEvent);
    }

    while (!undoStack.empty()) {
        std::string undoEvent = undoStack.top();
        std::cout << "Undo Action: " << undoEvent << std::endl;
        undoStack.pop(); //remove the element in front of the queue [STACK.pop]
    }

    std::cout << std::endl << std::endl;
    return 0;
}
