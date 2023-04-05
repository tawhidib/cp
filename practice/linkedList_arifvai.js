class LinkedList {
  constructor(value) {
    this.head = {
      value: value,
      next: null,
    };

    this.tail = this.head;

    this.length = 1;
  }

  push(value) {
    const newNode = {
      value: value,
      next: null,
    };

    this.tail.next = newNode;
    this.tail = newNode;
    this.length++;
  }

  prepend(value) {
    const newNode = {
      value,
      next: null,
    };

    newNode.next = this.head;
    this.head = newNode;
    this.length++;
  }

  printList() {
    const list = new Array();
    let node = this.head;
    while (node !== null) {
      list.push(node.value);
      node = node.next;
    }

    console.log(list);
  }
}

const myList = new LinkedList(5);
myList.push(10);
myList.push(15);
myList.prepend(1);

myList.printList();
