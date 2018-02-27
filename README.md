# Data Structures and Algorithms - Dictionary
## A dictionary of what I've learned in the class.

### Simple algorithms/Miscellaneous
Algorithm | How it works | Time Complexity
----      | ----         | ----
Swap (with temp variable) | To swap two variables x and y: **<br/><br/> - tmp = x; <br/> - x = y; <br/> - y = tmp;** | O(1)
Swap (with arithmetic) | To swap two variables x and y using only addition and subtraction: **<br/><br/> - x = x + y; <br/> - y = x - y; <br/> - x = x - y;** | O(1)
Swap (with XOR) | To swap two variables x and y using only XOR: **<br/><br/> - x = x XOR y; <br/> - y = x XOR y; <br/> - x = x XOR y;** | O(1)
Swap (pass by reference) | Do the following (in C++ syntax): **<br/><br/>void swap(int &x, int &y){<br/> - int tmp = x;<br/> - x = y;<br/> - y = tmp;<br/>}** | O(1) 
Swap (template) | A function to swap the values of two variables of any type. **<br/>template <class T1><br/> void swap(T &a, T &b){<br/> - T tmp = a; <br/> - a = b; <br/> - b = tmp}** | O(1)
Factorial | A recursive function to compute the factorial of an integer. This is done as follows: **<br/><br/> int factorial(number): <br/> - if (number <= 1) return number; <br/> - else return number * factorial(number - 1);** | O(n)
Fibonacci generator | A recursive function to compute the nth number in the Fibonacci sequence, as follows: **<br/><br/> int fibonacci(number): <br/> - if (number < 2) return number; <br/> - else return fib(number - 1) + fib(number - 2);** | O(n)
Reverse array | A function to reverse the contents of an array: **<br/><br/> i = 0, j = size - 1;<br/> while i < j: <br/> - swap(a(i), a(j));<br/> - i++, j--;** | O(n)
Reverse doubly linked list | A function to reverse the contents of a linked list: **<br/><br/> temp1 = head, temp2 = tail;<br/> while (i < size / 2) {<br/> - swap(temp1, temp2);<br/> - temp1 = temp1->next; <br/> - temp2 = temp2->prev; <br/> - i++ <br/>}** | O(n)

### Sorting algorithms
Algorithm | How it works | Time Complexity
----      | ----         | ----
[Selection Sort](https://drive.google.com/file/d/1oZlZWhlLS7eeIzezMVogdiJnDj0YZ1qR/view?usp=sharing) | Runs through the list several times. For every j in the list, it linearly searches ahead of j to find the smallest element, and once it finds it, j and the minimum element are swapped. Check the source files for implementation in C++. | O(n<sup>2</sup>)
[Insertion Sort](https://drive.google.com/file/d/1KSM3jL8kUbDxJHs9cp0FyTzAIpQWioyq/view?usp=sharing) | Heads forward in the list, and "slides the element back" to where it belongs in the sorted list. It does this by placing the element into a key variable, moving each element in the sorted list forward until the next sorted element is less than the key, and then placing the key there. Check the source for the implementation. | O(n<sup>2</sup>)
Bubble Sort | Runs through the list several times, checking every two adjacent elements. Each time, if the left element is greater than the right, the elements are swapped. | O(n<sup>2</sup>)
Merge Sort | Recursively divides the list into two groups, ending when the bottom level is reached. Then, the elements of every pair of groups is placed in order. | O(n log n)
