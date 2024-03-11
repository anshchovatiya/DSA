# Data Structure and Algorithms

## Stack

**_Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container._**

> stacks are implemented as container adaptors, which are classes that use an encapsulated object of a ? specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

![This is an approach employed to create Stack array algorithm]([paste the link here](https://github.com/anshchovatiya/DSA/blob/main/Images/Stack.png))

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

- Stack Implementation

```cpp

using namespace std;

class arr
{
private:
    int *Arr;
    int Size;
    int top = -1;

public:
    // this function will create dynamic array
    arr(int size)
    {
        this->Size = size;
        Arr = new int[size];
    }

    // this is implementation of push() function
    void Insertend(int number)
    {
        if (top > Size - 2)
        {
            cout << endl
                 << "The array is Full" << endl
                 << " ";
        }
        else
        {
            cout << endl
                 << "The array has been created" << endl
                 << " ";
            Arr[++top] = number;
        }
    }

    void display()
    {
        if (top < 0)
        {
            cout << endl
                 << "The array is empty" << endl
                 << " ";
        }
        else
        {
            cout << endl;
            for (int i = 0; i <= top; i++)
            {
                cout << Arr[i] << " ";
            }
            cout << endl
                 << " ";
        }
    }

    // this is implementation of pop() function
    void deleteEnd()
    {
        if (top < 0)
        {
            cout << endl
                 << "The array is empty" << endl
                 << " ";
        }
        else
        {
            cout << endl
                 << "The element has been Deleted" << endl
                 << " ";
            --top;
        }
    }

    // this is implementation of count() function
    void display_Size()
    {
        cout << endl
             << "The size of current array is " << top + 1 << endl
             << " ";
    }
};

```

## Searching

### linear

**_Linear search is a simple search algorithm used to find the position of a target element in an array by sequentially checking each element until a match is found or the end is reached._**

_The linear search algorithm is easy to implement and efficient in two scenarios :_

1. When the list contains fewer elements
2. When searching for a single element in an unordered array

- Linear search workint method

![This is an approach employed to perform Linear Search Algorithm.](https://github.com/anshchovatiya/DSA/blob/main/Images/Linear_Search.png)

### binary

**_Binary Search is a searching algorithm for finding an element's position in a sorted array._**
**_In this approach, the element is always searched in the middle of a portion of an array._**

> Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.

![This is an approach employed to perform a binary Search Algorithm.](https://github.com/anshchovatiya/DSA/blob/main/Images/Binary_Search.png)

**_Binary Search Algorithm_**

- Iteration Method

```cpp

 // function to perform binary search
void Binary_search(int arr[],int length,int target)
{
    int start = 0;
    int end = length - 1;
    int check = 0;
    while(start<=end)
    {
      int middle = (start + end)/2;

        if(arr[middle] == target)
        {
            cout << endl << "The number " << target << " is in the target at position " << middle + 1 << endl << " ";
            check = 1;
            break;
        }
        else if(arr[middle]>target)
        {
            end = middle-1;
        }
        else if(arr[middle]<target)
        {
            start = middle + 1;
        }
    }

    if(check==0)
    {
        cout << endl << "The number " << target << " is not in the array "  << endl << " ";
    }
}

```

- Recursive Method

```cpp


binarySearch(arr, x, low, high)
    {
        if (low > high)
        {
         return False;
        }
    else{
         mid = (low + high) / 2
        }
        if (x == arr[mid])
           {
             return mid;
           }
        else if( x > arr[mid] )
         {
            // x is on the right side
            return binarySearch(arr, x, mid + 1, high);
         }
        else
        {
            // x is on the left side
            return binarySearch(arr, x, low, mid - 1);
        }
    }

```
