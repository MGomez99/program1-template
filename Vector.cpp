#include "Vector.h"

Vector::Vector(){
 this->planetList = new Planet * [0];
 this->size = 0;
}

Vector::~Vector(){

  for(int i = 0; i<this->size; i++){
    delete this->planetList[i];
  }
  delete[] this->planetList;
}

void Vector::insert(int index, Planet* p){
  if(index<size && index>=0){
    this->size++;
    Planet ** newList = new Planet * [this->size];
    for(int i = 0; i<this->size; i++){
      if(i < index){
	newList[i] = this->planetList[i];
      }
      if(i==index){
	newList[i] = p;
      }
      if(i>index){
	newList[i] = this->planetList[i-1];
      }
    }
    this->planetList = newList;
    delete [] this->planetList;
  }
}

Planet *  Vector:: read(int index){
  if(index<0 || index>=size){
    return NULL;
  }

  return this->planetList[index];
  
}

bool Vector:: remove(int index){
  
  if(index>=0 && index < size){
    this->size--;
    Planet ** newList  = new Planet * [this->size];
    for(int i = 0; i<size; i++){
      if(i < index){
	newList[i] = this->planetList[i];
      }
      if(i >= index){
	newList[i] = this->planetList[i+1];
      }
    }
    this->planetList = newList;
    delete[] planetList;
    return true;
  }
  return false;
  
}


