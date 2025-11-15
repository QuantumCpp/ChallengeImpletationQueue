#include "Impletacion.h"

int main(){
  Cola* cola = new Cola();
  cola->enqueue(6), cola-> enqueue(7), cola->enqueue(10);
  cola->dequeue();
  cola->peak();
  cola->enqueue(19), cola->enqueue(10);
  cola->showAll();
}
