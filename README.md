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
Quick Sort | Sets an element in the list as a pivot, and places all elements less than the pivot to the left of it and all elements greater to the right. This is then repeated recursively with each side. | O(n<sup>2</sup>)

### Abstract machines
Machine | How it works
----    | ----
Finite automaton | A type of machine that can be in one of many finite states at any time. This type of machine generally accepts input and produces an output according to the flow of the automaton, but it has no memory and its state changes solely depending on the current state and the options to choose from there.
Pushdown automaton | Similar to the above, with one exception - pushdown automata have memory. The memory is arranged according to a stack data structure, and data is pushed and popped according to the inputs. Before the automaton terminates, it must have an empty stack.
Context-free grammar | A set of rules that define all possible strings in a formal language. This is done by replacing particular symbols with any of a set of symbols (which can include the symbol itself).
Turing machine | A hypothetical machine consisting of a piece of tape with symbols written on it. The machine changes its own state, moves along the tape, and changes the symbols on it according to a set of defined rules.

### Dynamic programming algorithms (examples pending)
Algorithm | How it works
----      | ----        
Dijkstra's algorithm | An algorithm used to find the shortest path between two nodes on a network.
Largest common substring | An algorithm that finds the largest possible string that can be made from the characters of two different strings, without changing the order.
