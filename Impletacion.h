
#include <iostream>
#include <optional>

struct Nodo{
  std::optional<int> valor;
  Nodo* next;
  Nodo(int v): valor(v), next(nullptr){};
};

struct Cola{

  Nodo* front;
  Nodo* rear;
  int cantidad = 0;

  Cola(): front(nullptr), rear(nullptr), cantidad(0){};
  ~Cola(){
    while(front){
      Nodo* temp = front;
      front = temp->next;
      delete temp;
    }
  }

  bool isEmpty(){
    return front == nullptr;
  }

  void enqueue(int v){

    Nodo* nodo = new Nodo(v);
    if(rear){
      rear->next = nodo;
      rear = nodo;
    }
    else{
      front = rear = nodo;
    }
    cantidad++;
  }

  void dequeue(){
    if(isEmpty()) std::cout << "La cola esta vacia" << std::endl;
    else{
      Nodo* temporal = front;
      front = temporal->next;
      if(!front){
        std::cout<<"Cola vacia, valor eliminado: " << temporal->valor.value() << std::endl;
        rear = nullptr;
      }
      else{
        std::cout<<"valor eliminado: " << temporal->valor.value() << "Nueva cima de la cola: "<< front->valor.value() <<  std::endl;
      }
      cantidad--;
      delete temporal; 
    }
  }

  void peak(){
    if(isEmpty()){
      std::cout<<"La cola esta vacia" << std::endl;
    }
    else{
      std::cout<<"Cima de la cola: " << front->valor.value() << std::endl;
    }
  }

  void showAll(){
    if(isEmpty()){
      std::cout << "La cola esta vacia" <<  std::endl;
    }
    else{
      Nodo* temporal = front;
      while(temporal){
        if(temporal->valor.has_value()){
          std::cout << temporal->valor.value() << " ";
          temporal = temporal->next; 
        }
      };
    }
    std::cout<<"\n";
  } 

  void deleteAll(){
    if(isEmpty()){
      std::cout<<"La cola esta vacia" << std::endl;
    }
    else{
      while(front){
        Nodo* temporal = front;
        front= temporal->next;
        cantidad--;
        delete temporal;
      }
      rear = nullptr;
      std::cout<<"Cantidad de elementos actuales: " << cantidad <<std::endl;
    }
  }


};



