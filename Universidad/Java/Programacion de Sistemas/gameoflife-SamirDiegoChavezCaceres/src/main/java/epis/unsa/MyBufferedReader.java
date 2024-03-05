package epis.unsa;
import java.io.*;
class MyBufferedReader extends BufferedReader implements MyReadabler{
    MyBufferedReader(Reader in){
        super(in);
    }
}