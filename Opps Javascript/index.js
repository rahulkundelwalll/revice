// const student = {
//     fullname : "rahul",
//     marks:99.8,
//     printMarks : function (){
//         console.log("marks = ",this.marks);
//     }
    
// }
// student.printMarks()
// // console.log(student.printMarks)


// const employee = {
//     calcTax(){
//         console.log("calculate 10% tax");
        
//     }
// };

// const rahul = {
//     name : "rahul",
//     salary : 100000,
//     calcTax(){
//         console.log("calculate 20% tax");
        
//     }
// }

// rahul.__proto__ = employee;
// rahul.calcTax()

// class car{

//     // constructor(){
//     //     console.log("i am contructor")
//     // }
//     constructor(name){
//         console.log("i am contructor",name)
//     }
//     start(){
//         console.log("start");
//     }
//     stop(){
//         console.log("stop");
//     }
//     setBrand(name){
//         this.brandName = name;
//     }
    
// };

// let farari = new car();
// // farari.start();
// // farari.stop();
// // farari.setBrand("rahul")
// // farari.brandName;
// // console.log(farari.brandName);

// let d = new car("ddd");


// class parent{
//     p(){
//         console.log("i am parent");
        
//     }
// }

// class child extends parent{
//     c(){
//         console.log("child");
        
//     }
// }

// let c = new child();
// c.p();
// c.c();


class person{
    constructor(name){
        this.name = name;
    }
    eat(){
        console.log("eating");
        
    }
}


class engi extends person{
    constructor(branch){
        super(branch);
        this.branch = branch;
    }
    work(){
        console.log("i am engineer");
        
    }
}

let rahul = new engi("nsfnsfnsf")

console.log(rahul.name);
