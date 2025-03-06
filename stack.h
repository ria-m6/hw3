#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack : private std::vector<T>
{
public:
    Stack()=default;
    ~Stack()=default;
    bool empty() const{
      return std::vector<T>::empty();
    }
    size_t size() const{
      return std::vector<T>::size();
    }
    void push(const T& item){
      return std::vector<T>::push_back();
    }
    void pop(){
      if(empty()){
        throws std::underflow_error("Stack is empty");
      }
      std::vector<T>::pop_back();
    }  // throws std::underflow_error if empty
    const T& top() const{
      if(empty()){
        throws std::underflow_error("Stack is empty");
      }
      std::vector<T>::back();
    } // throws std::underflow_error if empty
    // Add other members only if necessary
};


#endif