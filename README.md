# 🎯 FIFO Queue in C++

A complete implementation of a Queue data structure using linked lists in C++, following the **FIFO** (First In, First Out) principle.

## 📋 Description

This project implements a dynamic queue using linked nodes, allowing efficient insertion and deletion operations. The implementation uses `std::optional` for robust value handling and automatic memory management through destructors.

## ✨ Features

- ✅ **Dynamic memory management** - No predefined size limit
- ✅ **FIFO principle** - First elements in are the first out
- ✅ **Use of `std::optional`** - Safe handling of optional values
- ✅ **Element counter** - Real-time size tracking
- ✅ **Automatic destructor** - Safe memory deallocation on completion

## 🔧 Implemented Operations

| Operation | Complexity | Description |
|-----------|------------|-------------|
| `enqueue(int)` | O(1) | Adds an element to the end of the queue |
| `dequeue()` | O(1) | Removes and displays the first element |
| `peak()` | O(1) | Displays the first element without removing it |
| `isEmpty()` | O(1) | Checks if the queue is empty |
| `showAll()` | O(n) | Displays all elements in the queue |
| `deleteAll()` | O(n) | Removes all elements from the queue |

## 📁 Project Structure

```
.
├── Cola.h          # Header with structures and declarations
└── Cola.cpp        # Testing file and main
```

## 🚀 Compilation and Usage

### Compile

```bash
g++ Cola.cpp -o cola
```

### Run

```bash
./cola
```

## 💡 Usage Example

```cpp
#include "Cola.h"

int main() {
    Cola myQueue;
    
    // Add elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    
    // View the front
    myQueue.peak();  // Shows: 10
    
    // Show entire queue
    myQueue.showAll();  // Shows: 10 20 30
    
    // Remove element
    myQueue.dequeue();  // Removes 10, shows 20 as new front
    
    // Check if empty
    if (!myQueue.isEmpty()) {
        std::cout << "The queue has elements" << std::endl;
    }
    
    return 0;
}
```

## 🏗️ Data Structure

### Node
```cpp
struct Nodo {
    std::optional<int> valor;  // Stored value
    Nodo* next;                // Pointer to next node
}
```

### Queue
```cpp
struct Cola {
    Nodo* front;    // Pointer to first element
    Nodo* rear;     // Pointer to last element
    int cantidad;   // Element counter
}
```

## 🎓 Concepts Learned

- Implementation of linear data structures
- Manual memory management with pointers
- Use of `std::optional` for safe values
- FIFO principle in data structures
- Destructors and RAII in C++

## 📊 Time Complexity

- **Enqueue**: O(1) - Constant time insertion at the end
- **Dequeue**: O(1) - Constant time removal from front
- **Peak**: O(1) - Direct access to front
- **ShowAll**: O(n) - Complete queue traversal
- **DeleteAll**: O(n) - Deletion of all elements

## 🛠️ Requirements

- C++ compiler with C++17 or higher support (for `std::optional`)
- g++ or any compatible compiler

## 📝 Notes

- The queue automatically manages memory through the destructor
- `std::optional` is used to represent values that may or may not be present
- The `cantidad` counter allows knowing the size without traversing the queue

## 🤝 Contributions

This is an educational project to learn about data structures in C++. Suggestions and improvements are welcome.

## 📜 License

Open source project for educational purposes.

---

⭐ If this project was useful to you, don't forget to give it a star on GitHub
