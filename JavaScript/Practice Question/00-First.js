class User{

    name;
    email;

    constructor(name, email){

        this.name = name;
        this.email = email;
    }

    viewData(){
        
        console.log(`Name = ${this.name} \nemail = ${this.email}`);
    }
}

let Muhammad = new User("Muhammad Abu Bakar Qureshi", "qureshimuhammadabubakar@gmail.com");

Muhammad.viewData();