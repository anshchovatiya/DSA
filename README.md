# Data Structure and Algorithms

## Stack

**_Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container._**

> stacks are implemented as container adaptors, which are classes that use an encapsulated object of a ? specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

### Member Functions

1. **push()**: When we insert an element in a stack then the operation is known as a push. If the stack is full then the overflow \
   condition occurs.
2. **pop()**: When we delete an element from the stack, the operation is known as a pop. If the stack is empty means that no element exists
   in the stack, this state is known as an underflow state.
3. **isEmpty()**: It determines whether the stack is empty or not.
4. **isFull()**: It determines whether the stack is full or not.'
5. **peek()**: It returns the element at the given position.
6. **count()**: It returns the total number of elements available in a stack.
7. **change()**: It changes the element at the given position.
8. **display()**: It prints all the elements available in the stack.

## Searching

### linear

**_Linear search is a simple search algorithm used to find the position of a target element in an array by sequentially checking each element until a match is found or the end is reached._**

_The linear search algorithm is easy to implement and efficient in two scenarios :_

1. When the list contains fewer elements
2. When searching for a single element in an unordered array

- Linear search workint method

![This is an approach employed to perform Linear Search Algorithm.](https://github.com/anshchovatiya/DSA/blob/main/Images/Screenshot%2003-10-2024%2014.16.13.png)

### binary

**_Binary Search is a searching algorithm for finding an element's position in a sorted array._**
**_In this approach, the element is always searched in the middle of a portion of an array._**

> Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.

![This is an approach employed to perform a binary Search Algorithm.](https://github.com/anshchovatiya/DSA/blob/main/Images/Screenshot%2003-10-2024%2014.43.16.png)

**_Binary Search Algorithm_**

- Iteration Method

```cpp
 // do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1

```

- Recursive Method

```cpp
binarySearch(arr, x, low, high)
    if low > high
        return False
    else
        mid = (low + high) / 2
        if x == arr[mid]
            return mid
        else if x > arr[mid]        // x is on the right side
            return binarySearch(arr, x, mid + 1, high)
        else                               // x is on the left side
            return binarySearch(arr, x, low, mid - 1)

```
