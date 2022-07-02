// for loop
/*var sal =10;
for(var i=0;i<sal;i++){
    console.log(i);
};
*/
//for(var i=0;i<sal;i++){
//    
//};
//console.log(i);
// op - 5
//if we use let(let i=0) keyword we will get ERROR

//printing a variable
/* decalre a var, initialise it, access it*/ 
/*var a;
console.log(a);
let b;
console.log(b);

//global variable
var data = 100;
{
    //local variable
    var data = 200;
}
console.log(data);

var da = 100;
da = 200;

// var keyword allows dupicate varibles
// let does not allows dupicate varible


       var                          let
*******************************************
into in SE1                       in ES6

allows duplicate variables         won't allows

variable hoisting raised           we can overcome it

global poluting issue              we can overcome it

breaks scope rule                  obeys scope rule

var members called as "global"     let members called
member                             blockscoped members
*/

//const
//E6
//reinstalization not possible

const data=100;
//data = 200;
const ara = [100,200,300,400,500];
//arr = [];
//re intializayion is not possible but we can modify independent element(total replace ment not posiible)
ara[1]=30000;
console.log(ara);

const obj = {"key1":"value1","key2":"value2","key3":"value3","key4":"value4"};
// obj={} - not possible
obj.key1="welcome1";
console.log(obj);