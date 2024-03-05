import java.util.*;
class classh {
    public static void main(String[] args) {
        class Persona {
            private int edad;
            public Persona(int edad){
                this.edad = edad;
            }
            public String toString(){
                return "Tengo " + this.edad + " años.\n";
            }
        }
        class Estudiante extends Persona {
            private int libros;
            public Estudiante(int edad, int libros){
                super(edad);
                this.libros = libros;
            }
            public String toString(){
                return super.toString() + "Ademas tengo " + this.libros + " libros.\n";
            }
        }
        class Trabajador extends Persona {
            private int experiencia;
            public Trabajador(int edad, int experiencia){
                super(edad);
                this.experiencia = experiencia;
            }
            public String toString(){
                return super.toString() + "Ademas tengo " + this.experiencia + " años de experiencia.\n";
            }
        }
        ArrayList<Persona> arr = new ArrayList<Persona>(); 
        int i = 0;
        while(i < 6){
            if(i % 2 == 0) {
                Persona p = new Estudiante(15*(i+1), 1*(i+1));
                arr.add(p);
            }
            else {
                Persona p = new Trabajador(20*(i+1), 2*(i+1));
                arr.add(p);
            }
            i++;
        }
        for(Persona x : arr){
            System.out.println(x);
        }
    }
}
