package javaConceptApp;

public class Concept {
    private String title;
    private String description;
    private String version;

    public Concept(String title, String description, String version) {
        this.title = title;
        this.description = description;
        this.version = version;
    }

    public String getTitle() {
        return title;
    }

    public String getDescription() {
        return description;
    }

    public String getVersion() {
        return version;
    }

    @Override
    public String toString() {
        return "TITLE: " + title + "\nDESCRIPTION: " + description + "\nVERSION: " + version;
    }
}
