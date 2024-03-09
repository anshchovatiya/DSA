# Stack

-> LIFO stack

Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container.

stacks are implemented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

---

| Functions | Usage |
|******\_\_\_******|********************************\_\_\_********************************|
| (constructor) | Construct stack (public member function) |
| empty | Test whether the container is empty (public member function) |
| size | Return size (public member function) |
| top | Access next element (public member function) |
| push | Insert element (public member function) |
| emplace | Construct and insert element (public member function) |
| pop | Remove top element (public member function) |
| swap | Swap contents (public member function) |
|******\_\_\_******|********************************\_\_\_********************************|f
