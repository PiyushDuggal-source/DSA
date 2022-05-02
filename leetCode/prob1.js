/**
 * @param {string} s
 * @return {number}
 */

s = "IV";
var romanToInt = function (s) {
  let sum = 0;
  for (let i = 0; i < s.length; i++) {
    if (s[i] === "I" && s[i + 1] === "V") {
      sum += 4;
    } else if (s[i] === "X" && s[i + 1] === "L") {
      sum += 1;
    } else if (s[i + 1] === "V") {
      sum += 5;
    } else if (s[i + 1] === "IX") {
      sum += 9;
    } else if (s[i + 1] === "X") {
      sum += 10;
    } else if (s[i + 1] === "L") {
      sum += 50;
    } else if (s[i + 1] === "C") {
      sum += 100;
    } else if (s[i + 1] === "D") {
      sum += 500;
    } else if (s[i + 1] === "M") {
      sum += 1000;
    }
  }
  console.log(sum);
};

romanToInt(s);
