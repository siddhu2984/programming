// in javascript evolution frm left to right
// true = 1 , false = 0
console.log(1 < 2 < 3); // true
console.log(10 < 9 < 8); // true 10<9 false<8 0<8 =true
console.log(true + true); // 2
console.log(true + "true"); //truetrue
//BODMAS
//B - Bracket
//D - DIVISION
//M - MULTIPICATION
//A - ADD
//S - SUB
console.log(10 + 5 / 10 - 5); //5.5

// == (data)
// === (data and datatype)
console.log(10 == "10"); //true
console.log(10 === "10"); //false
console.log(10 == "ten"); // false

//& and
//| or
//^ opposite

console.log(1 & 1);
console.log(1 & 0);
console.log(0 & 1);

console.log(1 | 1);
console.log(1 | 0);
console.log(0 | 1);

console.log(1 ^ 0);
console.log(1 ^ 1);

//undefined
//null

var x;
console.log(x); // undefined

x = null;
console.log(x); // null

console.log(undefined == undefined); //true
console.log(undefined === undefined); //true
console.log(null == null); //true
console.log(null === null);
console.log(undefined == null);
console.log(undefined === null); // true