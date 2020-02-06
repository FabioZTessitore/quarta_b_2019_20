import java.util.ArrayList;

class Subject {
    private ArrayList<Observer> osservatori;

    public Subject() {
        this.osservatori = new ArrayList<Observer>();
    }

    public void attach(Observer osservatore) {
        this.osservatori.add(osservatore);
    }

    public void detach(Observer osservatore) {
        this.osservatori.remove(osservatore);
    }

    public ArrayList<Observer> getOsservatori() {
        return this.osservatori;
    }
}