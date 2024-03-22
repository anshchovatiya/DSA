# Data Structure and Algorithms

## Stack

**_Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container._**

> stacks are implemented as container adaptors, which are classes that use an encapsulated object of a ? specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

- Stack working method

![This is an approach employed to create the Stack array algorithm](https://github.com/anshchovatiya/DSA/blob/main/Images/Stack.png)

### Member Functions

1. **push()**: When we insert an element in a stack then the operation is known as a push. If the stack is full then the overflow
   condition occurs.
2. **pop()**: When we delete an element from the stack, the operation is known as a pop. If the stack is empty means that no element exists
   in the stack, this state is known as an underflow state.
3. **empty()**: It determines whether the stack is empty or not.
4. **top()**: It will return the top element of the stack

**_Stack Algorithm_**

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

- Linear search working method

![This is an approach employed to perform Linear Search Algorithm.](https://github.com/anshchovatiya/DSA/blob/main/Images/Linear_Search.png)

**_Linear Search Algorithm_**

<details>

<summary>Implementation</summary>

### Linear Search Implementation

```cpp

   void FindElement()
    {
        cout << endl;
           for(int i=0;i<Size;i++)
      {
        cout  << arr[i] << " ";
       }
    cout << endl;

    int number;
    cout  << endl << "Enter the element you want to Find : " ;
    cin >> number;

    int check = 0;

     for(int i=0;i<Size;i++)
     {
        if(number == arr[i])
        {
            cout << endl << "The number is in the array and index value of the number is " << i << endl << " ";
            check = 1;
            break;
        }
     }

     if(check ==0)
     {
        cout << endl << "The number is not in the array" << endl << " " ;
     }

    }

```

</details>

### binary

**_Binary Search is a searching algorithm for finding an element's position in a sorted array._**
**_In this approach, the element is always searched in the middle of a portion of an array._**

> Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.

- Binary Search working method

![This is an approach employed to perform a binary Search Algorithm.](https://github.com/anshchovatiya/DSA/blob/main/Images/Binary_Search.png)

**_Binary Search Algorithm_**

<details>

<summary>Iteration Method</summary>

### Binary Search Iteration Method Implementation

```cpp

void Binary_search(int arr[], int length, int target)
{
    int start = 0;
    int end = length - 1;
    int check = 0;
    while (start <= end)
    {
        int middle = (start + end) / 2;

        if (arr[middle] == target)
        {
            cout << endl
                 << "The number " << target << " is in the target at position " << middle + 1 << endl
                 << " ";
            check = 1;
            break;
        }
        else if (arr[middle] > target)
        {
            end = middle - 1;
        }
        else if (arr[middle] < target)
        {
            start = middle + 1;
        }
    }

    if (check == 0)
    {
        cout << endl
             << "The number " << target << " is not in the array " << endl
             << " ";
    }
}

```

</details>

<details>

<summary>Recursive Method</summary>

### Binary Search Recursive Method Implementation

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

</details>

## Sort

**_sorting algorithm is an algorithm that puts elements of a list into an order_**

### Bubble Sort

**_Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high._**

- traverse from the left and compare adjacent elements and the higher one is placed at the right side.
- In this way, the largest element is moved to the rightmost end at first.
- This process is then continued to find the second largest and place it and so on until the data is sorted.

- Bubble Sort working method

![This is the Bubble sort working method](https://github.com/anshchovatiya/DSA/blob/main/Images/Bubble%20Sort.png)

**_Bubble Sort Algorithm_**

<details>

<summary>Bubble sort Implementation</summary>

**_Implementation_**

```cpp


// this function will sort the array using bubble sort method
void sort_array(int arr[], int length)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j < length - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

```

</details>

### Selection Sort

**_The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array._**

- The subarray which is already sorted.
- Remaining subarray which is unsorted.

**_In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray._**

- Selection Sort working method

![This is the selection sort working method](https://github.com/anshchovatiya/DSA/blob/main/Images/Selection_Sort.png)

**_Bubble Sort Algorithm_**

<details>

<summary>Selection Implementation</summary>

**_Implementation_**

```cpp

// this function will sort the array with using selection sort method
void SelectionSort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

```

</details>

### Merge Sort

**_Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array._**

![This is the merge sort working method](https://github.com/anshchovatiya/DSA/blob/main/Images/Merge_sort.png)

**_Merge Sort Algorithm_**

<details>

<summary>Merge Sort Implementation</summary>

**_Implementation_**

```cpp

void merge_array(int *arr, int start, int mid, int end)
{
    int arr1_length = mid - start + 1;
    int arr2_length = end - mid;

    int *arr1 = new int[arr1_length];
    int *arr2 = new int[arr2_length];

    int i = start;
    int v = 0;
    while (v < arr1_length)
    {
        arr1[v++] = arr[i++];
        // cout << arr1[v] << endl;
    }

    i = mid + 1;
    int t = 0;
    while (t < arr2_length)
    {
        // cout << arr2[t] << endl;
        arr2[t++] = arr[i++];
    }

    i = start;
    v = 0;
    t = 0;

    while (v < arr1_length && t < arr2_length)
    {
        if (arr1[v] < arr2[t])
        {
            arr[i++] = arr1[v++];
        }
        else
        {
            arr[i++] = arr2[t++];
        }
    }

    while (v < arr1_length)
    {
        arr[i++] = arr1[v++];
    }
    while (t < arr2_length)
    {
        arr[i++] = arr2[t++];
    }

    delete[] arr1;
    delete[] arr2;
}

void merge_sort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    merge_array(arr, start, mid, end);
}


```

</details>

### Quick Sort

**_QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array._**

![This is the Quick sort working method](https://github.com/anshchovatiya/DSA/blob/main/Images/Quick%20Sort.png)

**_Quick Sort Algorithm_**

<details>

<summary>Quick Sort Implementation</summary>

**_Implementation_**

```cpp

int partition(int *arr, int start, int end)
{

    // finding random index value for pivot
    int mid = start + (end - start) / 2;
    int pivot = arr[mid];

    // swap that index number element to first index
    swap(arr[mid], arr[start]);

    int count = 0;
    // counting how many element are smaller than pivot
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
        {

            count++;
        }
    }

    // calculating pivot right index
    int pivotIndex = count + start;

    // transferring pivot to its right place
    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        // if element is smaller than pivot i will be incremented
        while (arr[i] < pivot)
        {
            i++;
        }
        // if element is greater than pivot j will be decremented
        while (arr[j] > pivot)
        {
            j--;
        }
        // i index element and j index element will swap their location
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }

    // returning pivot Index to divide the array in Quick sort function
    return pivotIndex;
}

void Quick_sort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // initializing pivot element and transfer it to it's right place
    int pivot = partition(arr, start, end);

    // dividing array that is left side of the pivot
    Quick_sort(arr, start, pivot - 1);
    // dividing array that is right side of the pivot
    Quick_sort(arr, pivot + 1, end);
}

```

</details>


## Simple Queue

**_Queue works on the FIFO(first in first out) principle_**

**_Queues are the type of container adaptors_**

    - In Queues elements are inserted at the back and inserted from the front

### Functions of Queue

1. **empty()** : return true if the array is empty and return false if the array is not empty
2. **size()** : return current numbers of the elements in the array
3. **front()** : return the first element of the array
4. **back()** : return the last element of the array
5. **push()** : Insert a new element at the end of the array
6. **emplace()** : add a sentence at the end of the array
7. **pop()** : delete the front element of the array
8. **swap()** : swap two arrays

- Simple Queue Working method

![This is the Simple Queue working method](https://github.com/anshchovatiya/DSA/blob/main/Images/Simple%20Queue.png)

**_Simple Queue Algorithm_**

<details>

<summary>Implementation</summary>

### Simple Queue Implementation

```cpp

class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int S)
    {
        size = S;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    // this function will insert element in queue
    void Insert(int number)
    {
        if (front == -1 && rear == -1)
        {

            front++;
            rear++;
            arr[rear] = number;
        }
        else if (rear >= size - 1)
        {
            cout << endl
                 << "Array is Full " << endl
                 << endl;
        }
        else
        {
            rear++;
            arr[rear] = number;
        }
    }

    // this function will display the array
    void Display()
    {
        if (front >= 0)
        {
            cout << endl
                 << endl;
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Array is Empty" << endl
                 << endl;
        }
    }

    // this function will delete the first element off the array
    void Delete()
    {
        if (front < 0)
        {
            cout << endl
                 << "Array is Empty " << endl
                 << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
};

```

</details>

![This is the Structure of Queue](paste the link here)

## Circular Queue

**_A circular queue is the type of queue in which the last position of the Queue is connected to the first position of the Queue to make the circle of an array_**

- Circular Queue Working method

![This is the Circular Queue working method](https://github.com/anshchovatiya/DSA/blob/main/Images/Circluar_queue.png)

**_Circular Queue Algorithm_**

<details>

<summary>Implementation</summary>

### Circular Queue Implementation

```cpp
class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int S)
    {
        size = S;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    // this function will insert element in queue
    void Insert(int number)
    {
        if (front == -1 && rear == -1)
        {

            front++;
            rear++;
            arr[rear] = number;
        }
        else if (((rear + 1) % size) == front)
        {
            cout << endl
                 << "Array is Full " << endl
                 << endl;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = number;
        }
    }

    // this function will display the array
    void Display()
    {
        if (front >= 0)
        {
            cout << endl
                 << endl;

            int i = front;

            do
            {
                cout << arr[i] << " ";
                i = (i + 1) % size;
            }   while (i!=rear);

            cout << arr[i] << " ";


            cout << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Array is Empty" << endl
                 << endl;
        }
    }

    // this function will delete the first element off the array
    void Delete()
    {
        if (front < 0)
        {
            cout << endl
                 << "Array is Empty " << endl
                 << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
};

```

</details>

## Double Ended Queue

**_The deque stands for Double Ended Queue. Deque is a linear data structure where the insertion and deletion operations are performed from both ends. We can say that deque is a generalized version of the queue._**

_Though the insertion and deletion in a deque can be performed on both ends, it does not follow the FIFO rule. The representation of a deque is given as follows_ -

![representation of Double ended Queue](https://github.com/anshchovatiya/DSA/blob/main/Images/Representation%20of%20deque.png)

### Types of deque

    - Input restricted queue
    - Output restricted queue

### Input restricted Queue

**_In input restricted queue, insertion operation can be performed at only one end, while deletion can be performed from both ends._**

![representation of Input restricted Queue](https://github.com/anshchovatiya/DSA/blob/main/Images/Input%20Restricted%20Double%20ended%20Queue.png)

### Output restricted Queue

**_In output restricted queue, deletion operation can be performed at only one end, while insertion can be performed from both ends._**

![representation of output restricted Queue](https://media.geeksforgeeks.org/wp-content/uploads/20230103222135/outputrestrictedqueue.jpg)

**_Double Queue Algorithm_**

<details>

<summary>Implementation</summary>

### Double Queue Implementation

```cpp


class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

   public:
    Queue(int S)
    {
        size = S;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    // this function will insert element in queue
    void Insert_rear(int number)
    {
        if (front == -1 && rear == -1)
        {

            front++;
            rear++;
            arr[rear] = number;
        }
        else if (rear >= size - 1)
        {
            cout << endl
                 << "Array is Full " << endl
                 << endl;
        }
        else
        {
            rear++;
            arr[rear] = number;
        }
    }


    // this function will insert front element in queue
    void Insert_front(int number)
    {
        if (front == -1 && rear == -1)
        {

            front++;
            rear++;
            arr[rear] = number;
        }
        else if (rear >= size - 1)
        {
            cout << endl
                 << "Array is Full " << endl
                 << endl;
        }
        else
        {
              for (int i = rear, v = rear + 1; i >= front; i--, v--)
            {
                arr[v] = arr[i];
            }
            arr[front] = number;
            rear++;
        }
    }

    // this function will display the array
    void Display()
    {
        if (front >= 0)
        {
            cout << endl
                 << endl;
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Array is Empty" << endl
                 << endl;
        }
    }

    // this function will delete the first element off the array
    void Delete_front()
    {
        if (front < 0)
        {
            cout << endl
                 << "Array is Empty " << endl
                 << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }

    // this function will delete the rear element off the array
    void Delete_rear()
    {
        if (rear==-1)
        {
            cout << endl
                 << "Array is Empty " << endl
                 << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            rear--;
        }
    }
};


```

</details>
