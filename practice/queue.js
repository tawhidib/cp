class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Queue {
  constructor() {
    this.front = null;
    this.back = null;
    this.len = 0;
  }

  peek() {
    return this.front?.value || null;
  }

  isEmpty() {
    return this.len <= 0 ? true : false;
  }

  push(value) {
    const newNode = new Node(value);
    if (this.len <= 0) {
      this.front = this.back = newNode;
    } else {
      this.back.next = newNode;
      this.back = newNode;
    }

    this.len++;
  }

  pop() {
    if (this.len <= 1) {
      this.front = this.back = null;
      this.len = 0;
    } else {
      this.front = this.front.next;
      this.len--;
    }
  }
}

const myQueue = new Queue();
myQueue.push(10);
myQueue.push(11);
myQueue.push(12);
myQueue.pop();
console.log(myQueue.peek());
console.log(myQueue);
