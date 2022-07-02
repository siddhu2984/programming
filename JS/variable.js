/*
used to store the data
defined by var/let/const

string
collection of character
we will declare the string in three ways "",'',``
`` back tick operator also called template literal
   used to define the paragraph 
*/
var sub = "anugular13";
var sub2 = "Nodejs";
var sub3 = "MongoDB";
var mean = `${sub}${sub2}`;
console.log(mean);

var name = "emp";
var sal = 50000;
var sql_query = `select ${sal}`;
console.log(sql_query);

var uname = "sidd";
var upwd = "sidd123";
var login_quary = `select * from ${name} where uname '${uname}' and upwd '${upwd}'`;
console.log(login_quary);


/* numbers
- decimal
- fractional
- hexa decimal - prefix with 0x
- octal - prifix with 0o
- binary - prifix with Ob
*/
var decimal = 100;
var double = 100.12345;
var hexadecimal = 0o1010;
var octal = 0o123;
var binary = 0o1010;
console.log(decimal, double, hexadecimal, octal, binary);

//boolean
//true --- 1
//false --- 0
var flag1 = true;
var flag2 = false;
console.log(flag1, flag2);

//undefined 
var a; // not defined
console.log(a);

x = null;
console.log(x);

//typeof 
console.log(typeof "hello");
console.log(typeof 100);
console.log(typeof true);
console.log(typeof undefined); // ''
console.log(typeof null); // object
console.log(typeof []); // object

// array
//collectiom of indexed element
//[]
var arr = [12, 12, 345, 43, 56]
    //loops
    // for loops
for (var i = 0; i < 5; i++) {
    console.log(arr[i]);
}

//forEach()
arr.forEach((element, index) => {
        console.log(element, index);
    }) //element , index ===> any name (user can define)

var array1 = ["hai", "hai2", "hai3", "hai4"];
var array2 = ["ahai", "ahai2", "ahai3", "ahai4"];

array1.forEach((ele, index) => {
    console.log(ele, array2[index]);
})

adf = [11, 22, 33, 44, 55, 66, 77];
adf.forEach((element, index) => {
    console.log(element, array2[index]);
})

//jsons
//java script object motation
// javascript object
//light weight
//used to transfer the data over the network
//synatax
//objects ---- {}
//arrys ---- []
//data ---- key & value seperated by using ":", key & value seperated by using ","

var obj = {
    "sub_one": "ReactJS",
    "sub_two": "angular",
    "sub_three": "MangoDB"
};
console.log(obj.sub_one, obj.sub_two, obj.sub_three)

var obj1 = {
    "k1": "value1",
    "k2": "value2",
    "k3": "value3"
};
// for....of loop (used in iteration of json)
for (var key in obj1) {
    console.log(obj1[key]);

}
console.log(obj1.k1);

var qw;
console.log(qw); //undefined, occupies some memory

x = null; // removing frm memory

// datatype
// typeof
console.log(typeof(qw));
console.log(typeof(null)); // objecy
console.log(typeof []); // object
console.log(typeof
    function() {}); // function
console.log(typeof(100)); // number

// execution happens from left to right in javascript
console.log(10 > 9 > 8); // false
console.log(1 < 2 < 3); // true

//== (compare left value with right value)
//=== (compare left side value with datatype with right side datatype)
console.log(10 == "10");
console.log(10 === "10");

// javascript shows more accuracy while adding fractional numbers
console.log(0.1 + 0.2);
console.log(0.1 * 0.2);

//& and
//| or
//^ xor(opposite)

console.log(1 & 1);
console.log(1 & 0);
console.log(0 & 1);

console.log(1 | 1);
console.log(1 | 0);
console.log(0 | 1);

console.log(1 ^ 0);
console.log(1 ^ 1);

//bigint
//>2^53 - 1
//syffix - n
var large = 1234567890123312345678901233123456789012331234567890123312345678901233123456789012331234567890123312345678901233123456789012331234567890123312345678901233123456789012331234567890123312345678901233123456789012331234567890123312345678901233n;
console.log(large);

//symbol
var secured=Symbol("hello");
console.log(secured);
