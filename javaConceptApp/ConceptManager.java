package javaConceptApp;

import java.util.ArrayList;
import java.util.List;

public class ConceptManager {
    private List<Concept> concepts;

    public ConceptManager() {
        this.concepts = new ArrayList<>();
    }

    public void addConcept(String title, String description, String version) {
        concepts.add(new Concept(title, description, version));
    }

    public void listConcepts(){
        for (Concept c : concepts){
            System.out.println(c);
            System.out.println("-----------------------------");
        }
    }

    public void searchByKeyword(String keyword) {
        boolean found = false;

        for (Concept c : concepts) {
            if (c.getDescription().toLowerCase().contains(keyword.toLowerCase()) || 
                c.getTitle().toLowerCase().contains(keyword.toLowerCase())) {

                System.out.println("-----------------------------");              
                System.out.println(c);
                found = true;
            }
        }

        if (!found) {
            System.out.println("No concepts found with the keyword: " + keyword);
        }
    } 

}
