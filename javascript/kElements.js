var topKFrequent = function (nums, k) {
  const obj = {};

  if (nums.length == k) return nums;
  for (let i = 0; i < nums.length; i++) {
    const n = nums[i];
    obj[n] = obj[n] ? obj[n] + 1 : 1;
  }

  const entries = Object.entries(obj);
  const arr = [];

  console.log(entries)

  entries.forEach((item) => {
    const [num, count] = item;
    arr[count] = num;
  });

  return arr.slice(k * -1);
};
console.log(topKFrequent([1, 2, 3], 2));
