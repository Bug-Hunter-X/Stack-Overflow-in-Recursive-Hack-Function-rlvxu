function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will produce a stack overflow error if x is a large number.  The recursive calls to `foo` continue until the stack is exhausted.

This is an uncommon error because it's not immediately obvious from the code, and it only occurs with certain inputs.  Many other recursive functions will not trigger a stack overflow. This example highlights a scenario where tail-call optimization would be highly beneficial to avoid the issue.