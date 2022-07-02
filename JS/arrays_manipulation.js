/*
arrays
------
    collection of indexed elements called as arrays

    we will represent the array with "[]"

    index starts from "0"

    we will access array elements with indexes 


*/ 
let arr = [10,20,30,40,50];

console.log(arr[0], arr[2], arr[4], arr[5], arr[-1]) ;

// length of arry
// used to find the length of the array
console.log(arr.length);
arr.length =3;
console.log(arr[4]);

// delete 
// delete property delete element 
delete arr[0];
console.log(arr);

//push() - add element at end of array
//pop() - remove " " " " " " " " " " " " " " " " "
//unshift() - add the element at the begining of the array
//shift() - remove " " " " " " " " " " " " " " " " 
arr.push(50);
console.log(arr);
arr.unshift(10);
console.log(arr);
arr.pop();
console.log(arr);
arr.shift();
console.log(arr);

arr.push(10,20,30,40,93,23);
console.log(arr);
//splice() - delete and add the element at the particular index
arr.splice(1,2);
console.log(arr);

arr.splice(2,0,45,34);
console.log(arr);

let ar = [1,[2,3],[4,554,5]];
console.log(ar.flat(1));

let aa = [1,[[[[[[[[[2]]]]]]]]],[[[[[[[[[[3]]]]]]]]]]];
console.log(aa.flat(Infinity));
 
//  map () - 
console.log([1,2,3,4,5].map((element,index)=>{
    return element*10;
})
);

console.log([100,200,300,400].map((element,index)=>{
    return element/100;
})
);
// filter() -
console.log([1,2,3,4,5].map((element,index)=>{return {[element]:index};
 })
 );

console.log(
    [1,2,3,4,5].filter((element,index)=>{
        return element>=4;
    })
);

console.log(
    [100,300,400,500].filter((element,index)=>{
        return element*100;
    }).filter((element,index)=>{
        return element>200;
    })
);
// reduce() 
console.log(
    [1,2,3,4,5].reduce((element,nrxtElement)=>{
        return element+nrxtElement
    })
);

//reduceRight()

console.log(
    ["ui","to","welcome"].reduceRight((ele,nrxtElement)=>{
        return ele+" "+nrxtElement;
    })
);

//slice()

let arrr = [10,20,30,40,50,60,70,80];
console.log(arrr.slice(4,7));
console.log(arrr.slice(5));
console.log(arrr.slice(0,5,2));

// ...(spread)

let arr1 = [1,2,3,4,5];
let arr2 = [...arr1,6,7,8,9,10];
console.log(arr2);

//additions of arrays
let x = [1,2,3,4,5];
let y = [6,7,8,9,10];
let z = [...x,...y];
console.log(z);

// FIND INDEX 
// used to know index
console.log(
    [1,2,3,4,5].findIndex((element,index)=>{
        return element == 5;
    })
);

console.log(
    [10,20,30,40,50,60].findIndex((element,index)=>{
        return element == 30;
    })
);

console.log(
    [10,20,30,40,50].findIndex((element,index)=>{
        return element == 60;
    })
);

let a = [10,20,30,40,50];
a.splice(arr.findIndex((element,index)=>{
    return element == 40;
}),1);
//find() - return the number itself 
console.log(
    a.find((element,index)=>{
        return element ==20;
    })
);

//includes - return true if the element is present 
console.log(
    a.includes(30)
);
 
// some 
console.log(
    a.some((element,index)=>{
        return element>=30;
    })
);

// every()
console.log(
    [1,2,3,4,5].every((element,index)=>{
        return element>=1 ;
    })
);

//fill

let aee = [10,20,30,40,50];
aee.fill(100);
console.log(aee);

aee.fill(200,1);
console.log(aee);

aee.fill(300,2,3);
console.log(aee);

aee.fill(400,3,4);
console.log(aee);

aee.fill(500,4);
console.log(aee);

//sort 
//asending
let arr12 = [10,20,30,40,50];
arr12.sort((arg1,arg2) => {
    return arg1-arg2;
})
console.log(arr12);
//decending
arr12.sort((arg1,arg2) => {
    return arg2-arg1;
})
console.log(arr12);

//2nd min element
console.log(
    arr12.sort((arg1,arg2)=>{
        return arg1-arg2
    })[1]
);

let arr222 = [1,2,3,4,5];
let arr111 = ["one", "two", "three", "four", "five"];
console.log(
    arr222.map((element,index)=>{
        return [element,arr111[index]];
}).flat(1)
);

//indexOf()
//it won't create indexes to repeated elements 
 
let e = [10,20,30,10,30,40]
e.forEach((element,index)=>{
    console.log(e.indexOf(element),index);
});
// delete duplicated elements
let g = [10,20,30,30,20];
console.log(
    g.filter((element,index)=>{
        return arr1.indexOf(element)===index;
    })
);

//reverse() - used to reverse array element 
 
console.log(
    [1,2,3,4,5].reverse()
);

// string to array 

console.log(
    Array.from("hello")
);

console.log(
    Array.from("hello").reverse()
);
// array to string
console.log(
    Array.from("siddharth").reverse().toString().replaceAll(",","") 
);

console.log(
    Array.from("WELCOME").reverse().join("")
);

let gg = ["angular","react","vue","node"];
console.log(gg.reverse());

/*console.log(
    gg.map((element,index)=>{
        return element.reverse();
    })
);*/

// pad start 
console.log("hello".padStart(10,"*"));
console.log("hello".padEnd(10,"*"));
console.log("hello".padStart(10,"*").padEnd(13,"*"));

// copyWithin
let cv = [10,20,30,40,50,60,70,80,90,100];
cv.copyWithin(4);
console.log(cv);

let vv = [10,20,30,40,50,60,70,80,90,100];
vv.copyWithin(4,6);
console.log(vv);

let rr = [10,20,30,40,50,60,70,80,90,100];
rr.copyWithin(4,6);
console.log(rr);

// trim - remove begining and end empty space
let tt = " hello ";
console.log(tt.length);
console.log(tt.trim().length);
console.log(tt.trimStart().length);
console.log(tt.trimEnd().length);

// lastIndexOf()
console.log(
    [10,20,10,10].lastIndexOf(10)
);

console.log(
    [10,20,20,10].lastIndexOf(10,2)
); 

// split() - return array
let strrr = "abc def ghe";
console.log(strrr.split(" "));//[ 'abc', 'def', 'ghe' ]

//substring()
let shhh = "welcome to javascript";
console.log(shhh.substring(0,7));

let tttt = ["hello1", "hello2", "hello3"];
tttt.forEach((element,index)=>{
    console.log(element);
})
console.log("------------------------");
for(let element of tttt){
    console.log(element);
}
console.log("------------------------");
let objj = {
    "sub_one":"React js",
    "sub_2":"Node JS",
    "sub_3":"MANGODB"
};
for(let key in objj){
    console.log(key);
    console.log(objj[key]);
}