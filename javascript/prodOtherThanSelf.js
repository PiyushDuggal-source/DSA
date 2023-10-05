/**
 * @param {number[]} nums
 * @return {number[]}
 */
// var productExceptSelf = function (nums) {
//   let result = [];
//
//   let newSet = new Set(nums);
//   const [first] = newSet;
//   let prod = 1;
//   if (newSet.size === 1 && first === 0) {
//     return nums;
//   }
//
//   for (let i = 0; i < nums.length; i++) {
//     prod = prod * nums[i];
//   }
//
//   if (prod == 0) {
//     for (let i = 0; i < nums.length; i++) {
//       if (nums[i] == 0) continue;
//       nums[i] = 0;
//     }
//
//     return nums;
//   }
//
//   for (let i = 0; i < nums.length; i++) {
//     result.push(prod / nums[i]);
//   }
//
// for (let i = 0; i < nums.length; i++) {
//   let prod = 1;
//   nums.forEach((item, ind) => {
//
//     prod = prod * (ind === i ? 1 : item);
//     if (prod === -0) {
//       prod = 0;
//     }
//   });
//   result.push(prod);
// }
//   return result;
// };
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
  const resultArr = [];
  for (let i = 0; i < nums.length; i++) {
    let productVal = nums[i];
    if (resultArr.length !== 0) {
      productVal = productVal * resultArr[i - 1];
    }
    resultArr.push(productVal);
  }
  let productVal = 1;
  let i = nums.length - 1;
  for (i; i > 0; i--) {
    resultArr[i] = resultArr[i - 1] * productVal;
    productVal = nums[i] * productVal;
  }
  resultArr[i] = productVal;
  return resultArr;
};

// console.log(productExceptSelf([-1, 1, 0, -3, 3]));
console.log(productExceptSelf([2, 3, 3]));
