let student = {
    
    fullName : "Muhammad Abu Bakar Qureshi",
    marks : 76,
};

let calculation = {

    isFormula : true,

    calcPercent(){

        return (this.marks / 200 ) * 100;
    }
}

student.__proto__ = calculation;