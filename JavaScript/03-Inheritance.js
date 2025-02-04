class Engine{

    horsePower;
    torque;
    
    constructor(horsePower, torque){

        this.horsePower = horsePower;
        this.torque = torque;
    }

    Details(){

        console.log(`Horse Power = ${this.horsePower} \nTorque = ${this.torque}`);
    }
}

class Car extends Engine{


    model;
    
    constructor(model, horsePower, torque){

        super(horsePower, torque);

        this.model = model;
    }

    Details(){
        super.Details();
        console.log(`Model = ${this.model}`);
    }
}

let cultus = new Car(2012, 70, 66);

cultus.Details();