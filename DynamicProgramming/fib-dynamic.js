// This is the normal fibonacci function
const fib = (n) => {
  if (n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
};

// console.log(fib(50));

// This is the Dynamic fibonacci number

const fibDymc = (n, memo = {}) => {
  if (n in memo) return memo[n];
  if (n <= 2) return 1;
  memo[n] = fibDymc(n - 1, memo) + fibDymc(n - 2, memo);
  console.log(memo);
  return memo[n];
};

console.log(fibDymc(7));
