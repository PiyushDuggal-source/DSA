/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function (nums) {
  const set = new Set(nums);

  let max = 0;

  for (let i = 0; i < nums.length; i++) {
    let num = nums[i];
    if (set.has(num + 1)) continue;

    let count = 0;

    let ind = num;

    while (set.has(ind)) {
      count++;
      ind--;
    }

    max = Math.max(max, count);
  }

  return max;
};

console.log(longestConsecutive([100, 4, 200, 1, 3, 2]));
