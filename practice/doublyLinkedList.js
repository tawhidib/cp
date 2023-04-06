class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
    this.prev = null;
  }
}

class DoublyLinkedList {
  constructor(value) {
    this.head = new Node(value);
    this.tail = this.head;
    this.length = 1;
  }

  append(value) {
    const newNode = new Node(value);
    this.tail.next = newNode;
    newNode.prev = this.tail;
    this.tail = newNode;
    this.length++;
  }

  prepend(value) {
    const newNode = new Node(value);
    this.head.prev = newNode;
    newNode.next = this.head;
    this.head = newNode;
    this.length++;
  }

  printList() {
    const list = [];
    let current = this.head;
    while (current) {
      list.push(current.value);
      current = current.next;
    }

    return list;
  }

  printReverse() {
    const list = [];
    let current = this.tail;
    while (current) {
      list.push(current.value);
      current = current.prev;
    }

    return list;
  }

  find(index) {
    let current = this.head;
    let i = 0;
    while (current) {
      if (i === index) {
        return current;
      } else {
        i++;
        current = current.next;
      }
    }

    return null;
  }

  insert(index, value) {
    if (index <= 0) {
      this.prepend(value);
    } else if (index >= this.length) {
      this.append(value);
    } else {
      const newNode = new Node(value);
      const leader = this.find(index - 1);
      const follower = leader.next;
      follower.prev = newNode;
      leader.next = newNode;
      newNode.next = follower;
      newNode.prev = leader;
    }
  }
}

const myDoublyList = new DoublyLinkedList(5);
myDoublyList.append(10);
myDoublyList.prepend(1);
myDoublyList.insert(1, 2);
myDoublyList.insert(10, 2);

const list = myDoublyList.printList();
// const reverseList = myDoublyList.printReverse();
console.log(list);
// console.log(reverseList);

console.log([1, 2, 3].length);
