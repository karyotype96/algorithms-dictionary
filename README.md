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
Fibonacci generator | A recursive function to compute the nth number in the Fibonacci sequence, as follows: **<br/><br/> int fib(number): <br/> - if (number < 2) return number; <br/> - else return fib(number - 1) + fib(number - 2);** | O(n)
Reverse array | A function to reverse the contents of an array: **<br/><br/> i = 0, j = size - 1;<br/> while i < j: <br/> - swap(a(i), a(j));<br/> - i++, j--;** | O(n)
Reverse doubly linked list | A function to reverse the contents of a linked list: **<br/><br/> temp1 = head, temp2 = tail;<br/> while (i < size / 2) {<br/> - swap(temp1, temp2);<br/> - temp1 = temp1->next; <br/> - temp2 = temp2->prev; <br/> - i++ <br/>}** | O(n)
Print singly linked list in reverse | A recursive function to print a singly linked list backwards: **<br/><br/> void rev(head) {<br/> - if (head->next != NULL) then rev(head->next);<br/> - print(head->value) <br/>}** | O(n)
Check if linked list is circular | Create two iterators, one that increments by 1 and the other that increments by 2. Run through the linked list with both iterators at once, and if they end up pointing to the same element in the list at some point, the list is circular. | O(n)

### Data structures
Data Structure | How it works
----           | ----
Array | A group of objects placed next to each other in memory. Cannot be resized and values can't be inserted, but memory access is fast and it's useful for simple operations.
Linked list | A type of list where each node contains a pointer to the next node in the list. List traversal is done linearly, but inserting and deleting nodes is faster than with arrays.
Binary tree | A data structure where each node has up to two sub-nodes (called leaf nodes), and which begins at a "root node". 

### Sorting algorithms
Algorithm | How it works | Time Complexity
----      | ----         | ----
[Selection Sort](https://drive.google.com/file/d/1oZlZWhlLS7eeIzezMVogdiJnDj0YZ1qR/view?usp=sharing) | Runs through the list several times. For every j in the list, it linearly searches ahead of j to find the smallest element, and once it finds it, j and the minimum element are swapped. Check the source files for implementation in C++. | O(n<sup>2</sup>)
[Insertion Sort](https://drive.google.com/file/d/1KSM3jL8kUbDxJHs9cp0FyTzAIpQWioyq/view?usp=sharing) | Heads forward in the list, and "slides the element back" to where it belongs in the sorted list. It does this by placing the element into a key variable, moving each element in the sorted list forward until the next sorted element is less than the key, and then placing the key there. Check the source for the implementation. | O(n<sup>2</sup>)
Bubble Sort | Runs through the list several times, checking every two adjacent elements. Each time, if the left element is greater than the right, the elements are swapped. | O(n<sup>2</sup>)
Merge Sort | Recursively divides the list into two groups, ending when the bottom level is reached. Then, the elements of every pair of groups is placed in order. | O(n log n)
Quick Sort | Sets an element in the list as a pivot, and places all elements less than the pivot to the left of it and all elements greater to the right. This is then repeated recursively with each side. | O(n<sup>2</sup>) _note: worst-case scenario is rare, common-case scenario is O(n log n)_
Radix Sort | Sorts each number by digit. In LSD radix sort, it starts by sorting the numbers by the magnitude of the least significant digit, then continues with each successive digit until the numbers are fully sorted. MSD radix sort works similarly, except it starts with the most significant digit. | O(nk)

### Binary tree operations
Algorithm | How it works | Time complexity
----      | ----         | ----
Insert leaf | Starting at the root node, check if the value to be inserted is less than the value of the current node. If it is, the function is recursively called again on the branch node to the left, and if not, the same is done to the right node. If the current node is NULL, set it to a node containing the value to insert. | O(log n)
Delete leaf | Use binary search to find the node in the tree. If it's found, choose the minimum node in its subtree and replace the current node with it. | O(log n)
Print tree in order | The function is called recursively for each node: First, the procedure calls itself for the node on the left of the current node. Then, it prints the value of the current node, unless it's NULL. Finally, it calls itself for the node on the right. | O(n)
Find minimum | Traverse left through the tree until the next node is NULL, and the minimum is found. Maximum works the same way, except traversal happens to the right. | O(n)

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
Dijkstra's algorithm | An algorithm used to find the shortest path between two nodes on a network. This is done using a set of lists that each contain different information regarding corresponding nodes. One list contains a boolean to determine whether or not a node is known, another contains the cost to get to the node, and another contains the node that was used to get there previously.
Largest common substring | An algorithm that finds the largest possible string that can be made from the characters of two different strings, without changing the order.

### Cryptographic algorithms
Algorithm | How it works | Complexity
----      | ----         | ----
Rotational cipher | Applies a "shift" to each letter - that is, if the shift is 1, A becomes B, B becomes C, and so on. | O(n)
RSA | An asymmetric encryption algorithm that generates keys from large prime numbers, then generates private and public keys from those numbers. Correspondence is performed by keeping the private key secret, whereas the public key is known to both sides. | O(log n<sup>2</sup>)

### Because I can...
Algorithm | How it works | Time complexity
----      | ----         | ----
MD5 | An algorithm to generate a 128-bit cryptographic hash. The function divides a string of bits up into 512-bit blocks, then runs each block through 4 rounds of bit shifts and bitwise operations. The results of all four rounds applied to each block are appended together, thus generating a (pseudo)randomized hash. | O(n)
Discrete Fourier transform | A function to transform a function of time into a function of frequency. When a digital signal **X** with **N** values is sent into the DFT function, the output for each frequency **k** is calculated as follows: for(t=0; t<N; t++), F(k) += X(t) * e^((-2 * pi * i * k * t) / N) | O(n<sup>2</sup>)
