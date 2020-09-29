// Basic variables
function basic1(){
    let age = 33;
    let name = 'Paul';
    let out = `My name is ${name} and I am ${age}`;

    const s = out.substring(0,5).toUpperCase();

    console.log(age);
    console.log(out);
    console.log(s);
    console.log(out.split(' '));
}

function arrays(){
    const numbers = new Array(1,2,3,4,5);
    console.log(numbers);

    const fruits = ['apples', 'oranges', 'pears'];

    fruits.unshift('mangos')

    console.log(fruits);
    console.log(Array.isArray(fruits));
    console.log(fruits.indexOf('apples'));
}

// Object Literals
function objects1() {
    const person = {
        firstName: 'Paul',
        lastName: 'Sammut',
        age: 33,
        address: {
            street: '50 main st',
            city: 'NY',
            state: 'NY'
        }
    };
    const {firstName, lastName, address: {city}} = person;
}

function arrays2(){
    const todos = [
        { id: 1, text: 'Go to the dentist.', isCompleted: true },
        { id: 2, text: 'Meeting with wife', isCompleted: true },
        { id: 3, text: 'Dentist app', isCompleted: false }
    ];

    console.log(todos);
    console.log(todos[1].text);

    // convert to JSON
    const todosJSON = JSON.stringify(todos);
    console.log(todosJSON);
};

function loops1() {
    // For loops
    let x = 49;
    for (let i = 0; i < 10; i++) {
        funcDing1();
        console.log(`What's up ${i}`);
        document.write("Hi?<br>");
    };

    function funcDing1(){
        console.log(`funcDin1: i is ${x}.`);
    };

    // while
    let i = 0;
    while(i < 10){
        console.log(`Wile loop: ${i}`);
        i++;
    };
}

// high order array methods
function highorder1(){

    const todos = [
        { id: 1, text: 'Go to the dentist.', isCompleted: true },
        { id: 2, text: 'Meeting with wife', isCompleted: true },
        { id: 3, text: 'Dentist app', isCompleted: false }
    ];

    // simple way of iterating through array:
    for(let i = 0; i < todos.length; i++){
        console.log(todos[i].text);
    }

    // forEach, map, filter

    // forEach
    todos.forEach(function(todo) {
        console.log("forEach: " + todo.text);
    });

    // map, returns an array of data from each element in array
    const todoText = todos.map(function(todo){
        return todo.text;
    });

    console.log(todoText);

    // Filter
    let todoCompleted = todos.filter(function(todo){
        return todo.isCompleted === true;
    });

    // Functional programming chaining
    todoCompleted = todos.filter(function(todo){
        return todo.isCompleted === true;
    }).map(function(todo){
        return todo.id;
    });

    console.log(todoCompleted);
}

function conditionals(){
    let myArray = [1,2,3,4];
    console.log(myArray);
}

function controlFlow(){
    let theNumber = Number(prompt("Pick a number."));
    console.log("You number is the square of " + theNumber * theNumber);

    // Switch statements are wierd in that statements start executing at the
    // start of a matching label, and will keep executing accross other labels
    // until it hits a break.
    switch(prompt("PUT IN WEATHER")){
        case 'rainy':
            console.log("Bring umbrella");
            break;
        case 'sunny':
            console.log("Dress like a slut");
        case 'cloudy':
            console.log("Go out");
            break;
        default:
            console.log("Unknown weather type!");
            break;
    }
}

function exer1(){
    let out = '';
    while(out.length < 7){
        out += '#'
        console.log(out);
    }
}

function fizzBuzz(){
    for(let i = 1; i <= 100; i++){
        let out = "";
        if(i % 3 === 0) out += "Fizz";
        if(i % 5 === 0) out += "Buzz";
        out = out || i;
        console.log(out);
    }
}

function chessBoard(n){
    let out = '';
    for(let i = 0; i < n; i++){
        for(let j = 0; j < n; j++){
            out += ((i+j) % 2 === 0) ? " " : "#";
        }
        out += "\n";
    }
    console.log(out);
}

function funcWays() {

    let makeNoise = function () {
        console.log("Pling!");
    };

    makeNoise();

    function test1(x) {
        return x * x;
    }

    test1();
    test1 = makeNoise;
    test1();

    let egg = () => chicken();
    let chicken = () => egg();

    // infinite recursion
    // egg();

    const returnOne = () => 1;
    console.log(returnOne());

    const sayHi = name => console.log(`Hi ${name}`);
    sayHi("Bobo", `fat`);
}

function findSol(target) {
    // Given a number, try to find a sequence of * 3 or + 5 that produces the
    // number.
    function helper(cur, history) {
        if (cur === target) {
            return history;
        } else if (cur < target) {
            return helper(cur + 5, `(${history} + 5)`) ||
                helper(cur * 3, `(${history} * 3)`);
        } else {// no match
            return null;
        }
    }
    return helper(1, "1");
}

function dataStruct1(){
    let descriptions = {
        work: "Went ot work",
        "wtf ding dong" : "Umm what?",
    }

    console.log(Object.keys(descriptions));
}

function chap4Test(){
    function deepEqual(a, b) {
        if (typeof a !== "object" || typeof b !== "object") {
            return a === b;
        }

        for (key of Object.keys(a)) {
            if (!deepEqual(a[key], b[key])) {
                return false;
            }
        }
        for (key of Object.keys(b)) {
            if (!deepEqual(a[key], b[key])) {
                return false;
            }
        }
        return true;
    }
    // here
    let obj = {here: {is: "an"}, object: 2};
    console.log(deepEqual(obj, obj));
    // → true
    console.log(deepEqual(obj, {here: 1, object: 2}));
    // → false
    console.log(deepEqual(obj, {here: {is: "an"}, object: 2}));
    // → true
}

function chap5_1(){
    let repeat = function(n, action){
        for(let i = 1; i <= n; i++){
            action(i);
        }
    };
    repeat(3, n => { console.log(n); });

    let SCRIPTS = [
        {
            name: "Coptic",
            ranges: [[994, 1008], [11392, 11508], [11513, 11520]],
            direction: "ltr",
            year: 1003,
            living: false,
        },
        {
            name: "Peringu",
            ranges: [[994, 1008], [11392, 11508], [11513, 11520]],
            direction: "ltr",
            year: 200,
            living: true,
        },
        {
            name: "Shingus",
            ranges: [[994, 1008], [11392, 11508], [11513, 11520]],
            direction: "ltr",
            year: 202,
            living: true,
        },
        {
            name: "Lingus-a",
            ranges: [[994, 1008], [11392, 11508], [11513, 11520]],
            direction: "ltr",
            year: 199,
            living: false,
        },
        {
            name: "Pingus",
            ranges: [[994, 1008], [11392, 11508], [11513, 11520]],
            direction: "rtl",
            year: 399,
            living: true,
        },
        {
            name: "Dingus",
            ranges: [[994, 1008], [11392, 11508], [11513, 11520]],
            direction: "ttb",
            year: 2020,
            living: false,
        },
    ];

    let living = SCRIPTS.filter(script => script.living);
    console.log(living);

    let applicants = [{name: "Joe Shmoe", country: "US", age: 33},
    {name: "Rob Parny", country: "GB", age: 29},
    {name: "Rob Parly", country: "GB", age: 16},
    {name: "Lem Meloo", country: "IT", age: 75}]

    let onlyUsApplicants = applicants.filter(app => app.country === "US");

    // Filter and map to a new array
    let dirs = SCRIPTS.filter(script => script.living).map(script => { 
        return { name: script.name, direction: script.direction}; });

    console.log(dirs);

    let data = [{name: "red", count: 32}, {name: "green", count: 2}, {name: "black", count: 1}];
    let maxColor = data.reduce((a, b) => a.count > b.count ? a : b).name;
    console.log(maxColor);
}

function chap6_1(){
    let rabbit = {};
    rabbit.speak = function(line) {
          console.log(`I, ${this.type} rabbit, am saying '${line}'.`);
    }

    rabbit.type = "fat";

    rabbit.speak("hi!");

    function eat(action){
        const a = (action.slice(-1) != 's') ? 'a ' : '';
        console.log(`The ${this.color} colored blob is eating ${a}${action}.`);
    }

    let blob = {color: 'red', eat};

    blob.eat('zucchini');

    let empty = {};
    console.log(empty.toString);

    console.log(Object.getPrototypeOf(empty));

    console.log(Object.getPrototypeOf(Object.getPrototypeOf(empty)));

    let speak = function(line) {
        console.log(`${this.type} says '${line}'.`);
    }
    let protoRabbit = { type: 'Rabbit' , speak };
    protoRabbit.speak('WHAT???');

    let killerRabbit = Object.create(protoRabbit);
    killerRabbit.type = 'Killer Rabbit';
    killerRabbit.speak('SKREEEEE imma get you SKREEEEEE');

    class Rabbit {
        constructor(type) {
            this.type = type;
        }

        speak(line) {
            console.log(`This ${this.type} rabbit says '${line}'.`);
        }
        fur = 'long';
    }

    let killaRabbit = new Rabbit('killa');
    let spottedRabbit = new Rabbit('spotted');
    killaRabbit.speak('Hello precious..');
    spottedRabbit.speak('I\'m spotted all ova');
}

chap6_1();
