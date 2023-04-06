class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Stack {
  constructor() {
    this.top = null;
    this.bottom = null;
    this.len = 0;
  }

  peek() {
    return this.top?.value || null;
  }

  push(value) {
    const newNode = new Node(value);
    if (this.len <= 0) {
      this.top = this.bottom = newNode;
    } else {
      this.top.next = newNode;
      this.top = newNode;
    }
    this.len++;
  }

  pop() {
    if (this.len <= 1) {
      this.top = this.bottom = null;
      this.len = 0;
      return;
    }

    let current = this.bottom;
    let nextNode = current.next;
    while (nextNode.next) {
      current = current.next;
      nextNode = current.next;
    }

    this.top = current;
    current.next = null;
    this.len--;
  }

  isEmpty() {
    return this.len <= 0 ? true : false;
  }
}

const myStack = new Stack();
myStack.push(10);
myStack.push(15);
myStack.push(20);
console.log(myStack);
