# Stack Overflow in Recursive Hack Function

This repository demonstrates an uncommon error in Hack: a stack overflow caused by a recursive function. The error is not immediately apparent from the code itself and only manifests with sufficiently large input values.

## Bug Description
The `foo` function calculates the factorial of a given integer using recursion.  For small input values, it functions correctly. However, when a large integer is passed as an argument (e.g., a number greater than 1000), the recursive function causes a stack overflow error, as the call stack is not designed for an unbounded number of recursive calls. This behavior is not immediately obvious and represents a challenging-to-debug issue.

## Bug Solution
The solution involves rewriting the recursive function using iteration, which eliminates the potential for a stack overflow.  The iterative approach avoids making repeated function calls, instead directly computing the factorial using a loop. The iterative version will handle larger inputs efficiently without exceeding stack limits.  Alternatively, tail call optimization in a compiler could solve this issue, but Hack doesn't fully support it.