let arr = [1, 3, 4, 5]

//arr map
let a = arr.map((value, index, array) => {
    // console.log(value, index, array)
    return value
})
console.log(a)
//arr filter
let b = arr.filter((fun => {
    return fun > 2
}))
//making a function to insert in filter
console.log(b)
const value=(val)=>{ 
    return val>3
}
let c= arr.filter(value)
console.log(c)
//arr reduce
let d= arr.reduce(((h1,h2)=>{
    return h1+h2
}))
console.log(d)



