# Data Structures and Algorithms - Dictionary
## A dictionary of what I've learned in the class.

### Simple algorithms
Algorithm | How it works | Time Complexity
----      | ----         | ----
Swap (with temp variable) | To swap two variables x and y: **<br/><br/> - tmp = x; <br/> - x = y; <br/> - y = tmp;** | O(1)
Swap (with arithmetic) | To swap two variables x and y using only addition and subtraction: **<br/><br/> - x = x + y; <br/> - y = x - y; <br/> - x = x - y;** | O(1)
Swap (with XOR) | To swap two variables x and y using only XOR: **<br/><br/> - x = x XOR y; <br/> - y = x XOR y; <br/> - x = x XOR y;** | O(1)
Factorial | A recursive function to compute the factorial of an integer. This is done as follows: **<br/><br/> int factorial(number): <br/> - if (number <= 1) return number; <br/> - else return number * factorial(number - 1);** | O(n)
Fibonacci generator | A recursive function to compute the nth number in the Fibonacci sequence, as follows: **<br/><br/> int fibonacci(number): <br/> - if (number < 2) return number; <br/> - else return fib(number - 1) + fib(number - 2);** | O(n)
Reverse array | A function to reverse the contents of an array: **<br/><br/> i = 0, j = size - 1;<br/> while i < j: <br/> - swap(a(i), a(j));<br/> - i++; j--;** | O(n)

### Sorting algorithms
Algorithm | How it works | Time Complexity
----      | ----         | ----
Selection Sort | Runs through the list several times. For every j in the list, it linearly searches ahead of j to find the smallest element, and once it finds it, j and the minimum element are swapped. | O(n^2)
Insertion Sort | Heads forward in the list, and "slides the element back" to where it belongs in the sorted list. It does this by placing the element into a key variable, moving each element in the sorted list forward until the next sorted element is less than the key, and then placing the key there. | O(n^2)
