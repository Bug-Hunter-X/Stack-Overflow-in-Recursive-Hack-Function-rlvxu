function foo_iterative(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; ++i) {
    result *= i;
  }
  return result;
}

function main(): void {
  echo foo_iterative(5);
  echo foo_iterative(1000); // This will now work
}

//Alternative solution (if tail call optimization were available)
// function foo_tail_recursive(x: int, accumulator: int = 1): int {
//   if (x == 0) {
//     return accumulator;
//   } else {
//     return foo_tail_recursive(x - 1, x * accumulator);
//   }
// }
// function main(): void {
//   echo foo_tail_recursive(5);
// }
