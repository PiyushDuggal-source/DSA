let arr = [];

arr[0] = 0;
arr[1] = 1;
let n = 25;

for (let i = 2; i < n; i++) {
  arr[i] = arr[i - 1] + arr[i - 2];
  console.log(arr);
}

console.log(arr);
console.log(arr[n - 1]);
