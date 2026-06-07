interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUsers implements LibraryUser {
    int age;
    String bookType;

    @Override //overriding the both functions for the kid users.......
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    public void requestBook() {
        if ("Kids".equalsIgnoreCase(bookType)) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser {
    int age;
    String bookType;

    @Override //overriding the both functions for the adult one.....
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }


    public void requestBook() {
        if ("Fiction".equalsIgnoreCase(bookType)) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        
// Test Case #1: KidUsers
        
        System.out.println("--- Testing the KidUsers ---");
        KidUsers kid = new KidUsers();
        
        // Testing Age 10
        kid.age = 10;
        kid.registerAccount();
        
        // Testing Age 18
        kid.age = 18;
        kid.registerAccount();
        
        // Testing BookType "Kids"
        kid.bookType = "Kids";
        kid.requestBook();
        
        // Testing BookType "Fiction"
        kid.bookType = "Fiction";
        kid.requestBook();

        System.out.println("-------------------------------------------------------------");
       
// Test Case #2: AdultUser
       
        System.out.println("--- Testing AdultUser ---");
        AdultUser adult = new AdultUser();
        
        //testing Age 5
        adult.age = 5;
        adult.registerAccount();
        
        //testing Age 23
        adult.age = 23;
        adult.registerAccount();
        
        //testing BookType "Kids"
        adult.bookType = "Kids";
        adult.requestBook();
        
        //testing BookType "Fiction"
        adult.bookType = "Fiction";
        adult.requestBook();
    }
}