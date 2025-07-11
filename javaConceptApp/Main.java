package javaConceptApp;
import java.util.Scanner;

// Interface for the main class
// This class serves as the entry point for the application

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ConceptManager conceptManager = new ConceptManager();
        int option;
        
        do {
            System.out.println("1. Add Concept");
            System.out.println("2. List Concepts");
            System.out.println("3. Search by Keyword");
            System.out.println("4. Exit");
            System.out.print("Choose an option: ");
            
            option = scanner.nextInt(); // Read user input for option: This command reads an integer entered by the user into the console.
            scanner.nextLine(); // Consume newline
            
            switch (option) {
                case 1:
                    System.out.print("Enter title: ");
                    String title = scanner.nextLine();
                    System.out.print("Enter description: ");
                    String description = scanner.nextLine();
                    System.out.print("Enter version: ");
                    String version = scanner.nextLine();
                    conceptManager.addConcept(title, description, version);
                    break;
                case 2:
                    conceptManager.listConcepts();
                    break;
                case 3:
                    System.out.print("Enter keyword to search: ");
                    String keyword = scanner.nextLine();
                    conceptManager.searchByKeyword(keyword);
                    break;
                case 4:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid option. Please try again.");
            }

        } while (option != 4);
        scanner.close(); // Close the scanner to prevent resource leaks
    }
}