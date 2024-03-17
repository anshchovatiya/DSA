# Data Structure and Algorithms

## Stack

**_Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container._**

> stacks are implemented as container adaptors, which are classes that use an encapsulated object of a ? specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

![This is an approach employed to create Stack array algorithm](https://github.com/anshchovatiya/DSA/blob/main/Images/Stack.png)

### Member Functions

1. **push()** : When we insert an element in a stack then the operation is known as a push. If the stack is full then the overflow
   condition occurs.
2. **pop()** : When we delete an element from the stack, the operation is known as a pop. If the stack is empty means that no element exists
   in the stack, this state is known as an underflow state.
3. **empty()** : It determines whether the stack is empty or not.
4. **top()** : It will return top element of the stack

<details>

<summary>Implementation</summary>

### Stack Implementation

```cpp

class arr
{
private:
    int *Arr;
    int Size;
    int top = -1;

public:
    arr(int size)
    {
        this->Size = size;
        Arr = new int[size];
    }

    // this function will insert number in first position of the array
    void First_Insert(int number)
    {
        if (top >= Size - 1)
        {
            cout << endl
                 << "The array is Full" << endl
                 << " ";
        }
        else
        {
            // 34 48 28 8
            for (int t = top, v = top + 1; t >= 0; t--, v--)
            {
                Arr[v] = Arr[t];
            }
            Arr[0] = number;
            top++;
            cout << endl
                 << "The element has been created" << endl
                 << " ";
        }
    }

    // this function will delete first element of the array
    void First_delete()
    {
        if (top < 0)
        {
            cout << endl
                 << "The array is empty" << endl
                 << " ";
        }
        else
        {

            for (int i = 0; i < top; i++)
            {
                Arr[i] = Arr[i + 1];
            }

            --top;
        }
    }

    // this element will insert number at last position of the array
    void InsertEnd(int number)
    {
        if (top >= Size - 1)
        {
            cout << endl
                 << "The array is Full" << endl
                 << " ";
        }
        else
        {
            cout << endl
                 << "The element has been created" << endl
                 << " ";
            Arr[++top] = number;
        }
    }

    // this function will print the all elements in the array
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

    // this function will delete last element of the array
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

    void display_Size()
    {
        cout << endl
             << "The size of current array is " << top + 1 << endl
             << " ";
    }
};

```

</details>

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

## Sort

**_sorting algorithm is an algorithm that puts elements of a list into an order_**

### Bubble Sort

**_Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high._**

- traverse from left and compare adjacent elements and the higher one is placed at right side.
- In this way, the largest element is moved to the rightmost end at first.
- This process is then continued to find the second largest and place it and so on until the data is sorted.

### Selection Sort

**_The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array._**

- The subarray which is already sorted.
- Remaining subarray which is unsorted.

**_In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray._**
