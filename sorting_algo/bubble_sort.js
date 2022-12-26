const a = [4, 2, 5, 1, 6, 7, 3];

const bubbleSort = (arr) => {
  for (let k = 0; k < arr.length; ++k) {
    for (let i = 0; i < arr.length - 1 - k; ++i) {
      if (arr[i] > arr[i + 1]) {
        let temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }

  return arr;
};

console.log(bubbleSort(a));
