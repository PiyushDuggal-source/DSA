const input = 1234;
let prod = 1;
for (let i = 0; i < String(input).length; i++){
  if((parseInt(String(input)[i])) %3 == 0){
    prod *= parseInt(i)
  }
}
