interface Persona {
    public String presentarse(); //toString()
}
public class type {
    public static void main(String[] args) {
        class Estudiante implements Persona {
            private int libros;
            public Estudiante(int libros){
                this.libros = libros;
            }
            public String presentarse(){
                return "Yo Estudiante tengo " + this.libros + " libros.\n";
            }
        }
        class Trabajador implements Persona {
            private int experiencia;
            public Trabajador(int experiencia){
                this.experiencia = experiencia;
            }
            public String presentarse(){
                return "Yo trabajador tengo " + this.experiencia + " años de experiencia.\n";
            }
        }
        Persona[] arr = new Persona[6];
        int i = 0;
        while(i < 6){
            if(i % 2 == 0) {
                Persona p = new Estudiante(1*(i+1));
                arr[i] = p;
            }
            else {
                Persona p = new Trabajador(2*(i+1));
                arr[i] = p;
            }
            i++;
        }
        for(Persona x : arr){
            System.out.println(x.presentarse());
        }
    }
}
