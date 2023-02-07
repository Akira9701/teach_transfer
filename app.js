
let arrow = [];


const FillInc = (array,n,a) => {
    const step = a/n;
    for (let i = 0; i <= a; i+=step) {
        array.push(i);
    }
    array.shift();
} 


const FillDec = (array,n,a) => {
    const step = a/n;
    for (let i = a; i >= 0; i-=step) {
        array.push(i);
    }
    array.pop();
} 

const FillRand = (array,n,a) => {
    for (let i = 0; i < n; i++) {
        array.push(Math.round((Math.random() * a)));
    }
} 

const CheckSum = (array) => {
    console.log(array.reduce((element, reducer) => (reducer+= element), 0));
}

const RunNumber = (array) => {
    let counter = 0;
    arrow.push(-1);
    for (let i = 0; i < array.length; i++) {
        if(array[i] > array[i+1]) counter++;       
    }
    arrow.pop()
    console.log(counter)
    
}

const PrintMas = (array) => {
    console.log(array);
}




FillRand(arrow,4,10)
RunNumber(arrow);
PrintMas(arrow);
