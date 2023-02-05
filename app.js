
let arrow = [];


const FillInc = (n,a) => {
    const step = a/n;
    for (let i = 0; i <= a; i+=step) {
        arrow.push(i);
    }
    arrow.shift();
    console.log(arrow);
} 


const FillDec = (n,a) => {
    const step = a/n;
    for (let i = a; i >= 0; i-=step) {
        arrow.push(i);
    }
    arrow.pop();
    console.log(arrow);
} 

const FillRand = (n,a) => {
    for (let i = 0; i < n; i++) {
        arrow.push(Math.round((Math.random() * a)));
    }
    console.log(arrow);
} 

const CheckSum = (array) => {
    console.log(array.reduce((element, reducer) => (reducer+= element), 0));
}

const RunNumber = (array) => {
    let counter = 0;
    let status = true;
    for (let i = 0; i < array.length-1; i++) {
        const currentStatus = status;
        (array[i] > array[i+1]) && counter++

        // (array[i] > array[i+1]) ? status = false : status = true;
        // (status !== currentStatus) && counter++
    }
    array[array.length - 2] > array[array.length - 1] && counter++;
    console.log(counter);
}




FillRand(4,10)
RunNumber(arrow);
