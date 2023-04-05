class Node {
  constructor(value) {
    (this.value = value), (this.next = null);
  }
}

class LinkedList {
  constructor(value) {
    const newNode = new Node(value);
    this.head = newNode;
    this.tail = newNode;
    this.length = 1;
  }

  append(value) {
    const newNode = new Node(value);
    this.tail.next = newNode;
    this.tail = newNode;
    this.length++;
  }

  prepend(value) {
    const newNode = new Node(value);
    newNode.next = this.head;
    this.head = newNode;
    this.length++;
  }

  loopThrough() {
    const list = new Array();
    let current = this.head;
    while (current) {
      list.push(current.value);
      current = current.next;
    }

    return list;
  }

  printList() {
    console.log(this.loopThrough());
  }

  printReverse() {
    console.log(this.loopThrough().reverse());
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
    if (index >= this.length) {
      this.append(value);
    } else if (index === 0) {
      this.prepend(value);
    } else {
      const newNode = new Node(value);
      const leader = this.find(index - 1);
      const follower = leader.next;
      leader.next = newNode;
      newNode.next = follower;
    }
    this.length++;
  }

  remove(index) {
    if (index === 0) {
      this.head = this.head.next;
    } else if (index >= this.length) {
      return;
    } else {
      let leader = this.find(index - 1);
      let deleteItem = leader.next;
      console.log(`${deleteItem.value} deleted`);
      leader.next = deleteItem.next;
    }
    this.length--;
  }

  searchByIndex(index) {
    const node = this.find(index);
    return node.value;
  }

  searchByValue(value) {
    /*
    for (let i = 0; i < this.length; ++i) {
      const node = this.find(i)
      if (node.value === value) {
        console.log(`${value} in index ${i}`);
        return;
      }
    }
    */

    let result;
    let flag;
    for (let i = 0; i < this.length; ++i) {
      const node = this.find(i);
      if (node.value === value) {
        result = node;
        flag = i;
      }
    }

    if (!result) {
      console.log("not Found");
      return;
    }

    console.log(`${result.value} in index ${flag}`);
  }
}

const myList = new LinkedList(4);
myList.append(3);
myList.prepend(3);

myList.insert(2, 7);
myList.insert(2, 3);
myList.printList();

myList.searchByValue(30);
