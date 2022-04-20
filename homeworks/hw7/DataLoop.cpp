#include "DataLoop.h"
#include <iostream> 


// Default Constructor
DataLoop::DataLoop(): start(nullptr), count(0) {};

// alternate constructor
DataLoop::DataLoop(const int & num): start(new _Node), count(1) {;
    start->data=num;
    start->prev=start;
    start->next=start;
}

// copy constructor
 DataLoop::DataLoop(const DataLoop & rhs) {
     *this=rhs;
 }
//assigning a data loop to another using the = operator
 DataLoop & DataLoop::operator=(const DataLoop & rhs) {
     if(this->count > 0) {
         delete this->start;
         this->count=0;
         this->start=nullptr;
         return (*this);
     }
     if(rhs.count == 0) {
         this->count=0;
         this->start=nullptr;
         return (*this);
     }
     else {
         _Node *temp;
         temp = rhs.start;

         for (size_t i = 0;i < rhs.count; i++) {
             *this += temp->data;
             temp = temp->next;
         }
        return(*this);
     }
 }
// destructor
DataLoop::~DataLoop() {
     _Node *temp = this->start;
     for (size_t i = 0;i < this->count;i++){
         start = start->next;
         delete temp;
         temp = start;
     }
     this->start=nullptr;
     this->count= 0;
    
 }
// overload of the == operator
bool DataLoop::operator==(const DataLoop & rhs) const{
   bool res = true;
       

  }
 