const person = {
  alive: true,
};

const musician = {
  plays: true,
};

Object.setPrototypeOf(musician, person);

// EXAMPLE 01

/* *** *** *** 
NOTE: this is the old way to define proto... 

musician.__proto__ = person;

console.log(musician);

console.log(musician.plays); // true
console.log(musician.alive); // undefined

*** *** *** */

// EXAMPLE 02

/* *** *** *** 
NOTE: this is the old way to define proto... 

Object.setPrototypeOf(musician, person);
console.log(Object.getPrototypeOf(musician));
console.log(musician.__proto__)
// checking __proto__ and Object.getPrototypeOf() are same ... ... ...

console.log(Object.getPrototypeOf(musician) === musician.__proto__)
console.log(musician.plays); // true
console.log(musician.alive); // true

*** *** *** */

// EXAMPLE 03

/* *** *** *** 
const guitarist = {
  string: 6,
  __proto__: musician,
}

console.log(guitarist);
console.log(guitarist.string);
console.log(guitarist.alive);
console.log(guitarist.plays);

*** *** *** */

// EXAMPLE 04

/* *** *** ***

const car = {
  doors: 2,
  seats: "vinyl",

  get seatMaterial() {
    return this.seats;
  },

  set seatMaterial(material) {
    this.seats = material;
  },
};

const luxuryCar = {};
Object.setPrototypeOf(luxuryCar, car);
// console.log(luxuryCar);
// console.log(luxuryCar.doors);
// console.log(luxuryCar.seats);

luxuryCar.seatMaterial = "leather";
// console.log(luxuryCar);
// console.log(luxuryCar.doors);
// console.log(luxuryCar.seats);
// console.log(luxuryCar.seatMaterial);
console.log(luxuryCar.valueOf());

// Getting the keys of an object ... ... ...
console.log(Object.keys(luxuryCar));

// loop through each object key

Object.keys(luxuryCar).forEach((key) => {
  console.log(key);
});

// but for..in loop includes inherited props too
for (let key in luxuryCar) {
  console.log(key);
}

*** *** *** */

// EXAMPLE 05

/* *** *** ***

NOTE: This one is older version of inheritance

function Animal(species) {
  this.species = species;
  this.eats = true;
}

Animal.prototype.walks = function () {
  return `A ${this.species} is walking.`;
};

const Bear = new Animal("bear");

console.log(Bear.walks());

console.log(Bear.__proto__);
console.log(Animal.prototype);

console.log(Bear.__proto__ === Animal.prototype);

*** *** *** */

// EXAMPLE 06

/* *** *** ***

NOTE: This one is modern way of inheritance
class Vehicle {
  constructor() {
    this.wheels = 4;
    this.motorized = true;
  }

  ready() {
    return "Ready to go!";
  }
}

class Motorcycle extends Vehicle {
  constructor() {
    super();
    this.wheels = 2;
  }

  wheelie() {
    return "Oh one wheel now!!!";
  }
}

const myBike = new Motorcycle();

console.log(myBike);
console.log(myBike.ready());
console.log(myBike.wheelie());

const myTruck = new Vehicle();
console.log(myTruck);
console.log(myTruck.wheels);

*** *** *** */
