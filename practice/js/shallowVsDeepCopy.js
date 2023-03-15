// fundamental knowledge for writing pure function

// JavaScript Data Types

// Primitive and Structural

/* 
Primitive Data types
  1/ undefined
  2/ Boolean
  3/ Number
  4/ String
  5/ BigInt
  6/ Symbol
*/

/*
Structural Data types
  1/ Object: (new) Object, Array, Map, Set, WeakMap, Data
  2/ Function
*/

// Value vs Reference
// Primitives pass values:
let x = 2;
let y = x;
y += 1;

// console.log(y);
// console.log(x);

// Structural types use references:
let xArray = [1, 2, 3];
let yArray = xArray;
yArray.push(4);

// console.log(yArray);
// console.log(xArray);

// Mutable vs Immutable
// Primitives are immutable
let myName = "tawhid";
myName[0] = "A";

console.log(myName);
// Reassignment is not the same as mutable
myName = "babu";

// console.log(myName);

// Structures contains mutable data

yArray[0] = 9;
// console.log(xArray, yArray);

/* 
  pure function requires you to avoid mutating the data
*/

// Impure function that mutates the data

const addToStoreHistory = (array, score) => {
  array.push(score);
  return array;
};

const scoreArray = [44, 23, 12];
console.log(addToStoreHistory(scoreArray, 60));
console.log("scoreArray", scoreArray);

// this mutates the original array scoreArray
// this is considered to be a side-effect

// NOTICE: "const" does not make the array immutable

// there is much more to Pure function that I
// will discuss in my next tutorial

// we need to modify our function that so it does not
// mutate the original data

// Shallow copy vs. Deep copy

// Shallow Copy

// with the spread operator

const zArray = [...yArray, 10];
console.log(zArray);
console.log(yArray);
console.log(yArray === xArray);
console.log(yArray === zArray);

// with Object.assign()
const tArray = Object.assign([], zArray);
console.log(tArray);
console.log(tArray === zArray);
tArray.push(11);
console.log(zArray);
console.log(tArray);

// But if there are nested arrays or objects...

yArray.push([7, 8, 9]);
const vArray = [...yArray];
console.log(vArray);
vArray[4].push(5);
console.log(vArray);
console.log(yArray);
// nested structural data types still share the reference !

// NOTE: Array.from() and slice() create shallow copies too

/*
  When it comes to objects, what about...
  ...Object.freeze() ?
*/
const scoreObj = {
  first: 44,
  second: 12,
  third: { a: 1, b: 2 },
};

Object.freeze(scoreObj);
scoreObj.third.a = 8;
console.log(scoreObj);

// Still mutates - it is a shallow freeze

// How do we avoid these mutations?

// Deep copy is needed to avoid this

// Several libraries like lodash, Ramda and others
// have this feature built-in

/*
Here is a one line Vanilla Js Solution,
but it does not work with Dates, functions, undefined, infinity, regexps,
maps, sets, blobs, fileLists, ImageData, and other complex data types
*/

const newScoreObj = JSON.parse(JSON.stringify(scoreObj));
console.log(newScoreObj);

// Instead of using library, here is a vanilla js function

const deepClone = (obj) => {
  if (typeof obj !== "object" || obj === null) return obj;

  // create an array or object to hold values
  const newObject = Array.isArray(obj) ? [] : {};

  for (let key in obj) {
    const value = obj[key];
    // recursive call for nested objects & array
    newObject[key] = deepClone(value);
  }

  return newObject;
};

const newScoreArray = deepClone(scoreArray);
console.log(newScoreArray);
console.log(newScoreArray === scoreArray);
