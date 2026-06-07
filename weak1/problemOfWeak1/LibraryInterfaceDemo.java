     interface LibraryUser {
    void registerAccount();
    void requestBook();
}
class KidUser implements LibraryUser {

    int age;
    String bookType;

    public KidUser(int ag, String bkTyp) {
        age = ag;
        bookType = bkTyp;
    }

   
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}
class AdultUser implements LibraryUser {

    int age;
    String bookType;

    public AdultUser(int ag, String bkTyp) {
         age = ag;
         bookType = bkTyp;
    }

    
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}
public class LibraryInterfaceDemo {

    public static void main(String[] args) {

       
        System.out.println("Kid User Test Case 1:");
        KidUser kid1 = new KidUser(10, "Kids");
        kid1.registerAccount();
        kid1.requestBook();

        System.out.println();

        System.out.println("Kid User Test Case 2:");
        KidUser kid2 = new KidUser(18, "Fiction");
        kid2.registerAccount();
        kid2.requestBook();

        System.out.println();
        System.out.println("Adult User Test Case 1:");
        AdultUser adult1 = new AdultUser(5, "Kids");
        adult1.registerAccount();
        adult1.requestBook();
        System.out.println();
        
        System.out.println("Adult User Test Case 2:");
        AdultUser adult2 = new AdultUser(23, "Fiction");
        adult2.registerAccount();
        adult2.requestBook();
    }
}