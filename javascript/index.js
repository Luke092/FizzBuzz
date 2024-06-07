function* gen(n){
    let i = 1
    while(i <= n){
        yield i;
        i++;
    }
}

function fizzBuzz(n){
    const arr = []
    for(let i of gen(n)){
        arr.push(i)
    }

    return "[" + arr.map(i => {
            if(i % 3 === 0 && i % 5 === 0){
                return "\"FizzBuzz\"";
            }

            if(i % 3 === 0){
                return "\"Fizz\"";
            }

            if (i % 5 === 0){
                return "\"Buzz\"";
            }

            return "\"" + i.toString() + "\"";
        }).join(", ") + "]"
}

console.log("Example 1:")
console.log(fizzBuzz(3))

console.log("Example 2:")
console.log(fizzBuzz(5))

console.log("Example 3:")
console.log(fizzBuzz(15))