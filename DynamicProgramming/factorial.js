let memo = {};
const factorial = (k) => {
  if (k < 0) return 1;
  if (!(k in memo)) {
    memo[k] = k * factorial(k - 1);
  }
  return memo[k];
};

console.log(factorial(30));
