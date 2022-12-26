const a = [4, 2, 5, 1, 6, 7, 3];

const insertionSort = (arr) => {
  for (let k = 1; k < arr.length; ++k) {
    let value = arr[k];
    let index = k - 1;
    while (arr[index] > value && index >= 0) {
      arr[index + 1] = arr[index];
      index--;
    }
    arr[index] = value;
  }

  return arr;
};

console.log(insertionSort(a));
