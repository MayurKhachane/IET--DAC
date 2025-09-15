let data = {
    FirstName: "Jhon",
    LastName: "Doe",
    Age: 22,
    Department: "Computer",



    function() {
        return "First Name: " + this.FirstName + "\n" + 
               "Last Name: " + this.LastName + "\n" + 
               "Age: " + this.Age + "\n" + 
               "Department: " + this.Department;
    }
};

console.log(data.function());


