
let arrow = [];


const FillInc = (n,a) => {
    const step = a/n;
    for (let i = 0; i <= a; i+=step) {
        arrow.push(i);
    }
    arrow.shift();
} 


const FillDec = (n,a) => {
    const step = a/n;
    for (let i = a; i >= 0; i-=step) {
        arrow.push(i);
    }
    arrow.pop();
} 

const FillRand = (n,a) => {
    for (let i = 0; i < n; i++) {
        arrow.push(Math.round((Math.random() * a)));
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

const PrintMas = () => {
    console.log(arrow);
}




FillRand(4,10)
RunNumber(arrow);
PrintMas();
