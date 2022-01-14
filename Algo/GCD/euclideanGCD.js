function euclideanGCD(a, b) {
  if (b === 0) {
    console.log(a);
  } else {
    let c = a % b;

    euclideanGCD(b, c);
  }
}

euclideanGCD(3918848, 1653264);
