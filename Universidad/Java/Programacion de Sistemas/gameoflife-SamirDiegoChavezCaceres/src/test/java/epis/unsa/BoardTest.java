package epis.unsa;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import java.util.*;
import java.io.*;
/**
 * Unit test for simple App.
 */
public class BoardTest 
{
    /**
     * Rigorous Test :-)
     */
    
    @Test
    public void creationOfBoard()
    {
        MyReadabler r;
        //With files
        //r = createWithFile("blinker");
        
        //with Strings
        String[] blinker = {"---",
                            "xxx",
                            "---"};
        r = createWithString(blinker);            
        Board board = new Board(10, 10, Points.interpreter(2,2,r));

        int expected, actual;

        expected = 10;
        actual = board.getWidth();
        assertEquals(expected, actual);

        expected = 10;
        actual = board.getHeight();
        assertEquals(expected, actual);
    }
    @Test
    public void cellTest(){
        MyReadabler r; 
        //file
        //r = createWithFile("file");
        
        //String
        String[] blinker = {"---",
                            "-xx",
                            "---"};
        r = createWithString(blinker);
        Board board = new Board(10, 10, Points.interpreter(2,2,r));
        assertTrue(board.cell(3, 3) == true);
    }
    @Test
    public void setInitialStateTest(){
        MyReadabler r; 
        //file
        //r = createWithFile("file");
        
        //String
        String[] blinker = {"---",
                            "-xx",
                            "---"};
        r = createWithString(blinker);
        Board board = new Board(10, 10, Points.interpreter(2,2,r));
        assertTrue(board.cell(0, 0) == false);
        assertTrue(board.cell(1, 1) == false);
        assertTrue(board.cell(2, 2) == false);
        assertTrue(board.cell(3, 3) == true);
        assertTrue(board.cell(3, 4) == true);
        assertTrue(board.cell(4, 4) == false);
        assertTrue(board.cell(5, 5) == false);
        assertTrue(board.cell(6, 6) == false);
        assertTrue(board.cell(7, 7) == false);
        assertTrue(board.cell(8, 8) == false);
        assertTrue(board.cell(9, 9) == false);
    }
    @Test
    public void countNeighborsTest(){
        MyReadabler r; 
        //file
        //r = createWithFile("file");
        
        //String
        String[] blinker = {"---",
                            "-xx",
                            "---"};
        r = createWithString(blinker);
        Board board = new Board(10, 10, Points.interpreter(2,2,r));
        int expected, actual;

        expected = 1;
        actual = board.countNeighbors(3, 3);
        assertEquals(expected, actual);
    }
    @Test
    public void nextStateTest(){
        MyReadabler r; 
        //file
        //r = createWithFile("file");
        
        //String
        String[] blinker = {"----",
                            "-xx-",
                            "-xx-",
                            "----"};
        r = createWithString(blinker);
        Board board = new Board(10, 10, Points.interpreter(2,2,r));
        assertTrue(board.nextState().nextState().cell(3, 3) == true);
        assertTrue(board.nextState().nextState().cell(4, 4) == true);
        assertTrue(board.nextState().nextState().cell(3, 4) == true);
        assertTrue(board.nextState().nextState().cell(4, 3) == true);
    }
    
    private MyReadabler createWithFile(String filename){
        MyReadabler r = null;
        try {
            r = new MyBufferedReader(new FileReader(filename));
        } catch (Exception e){
            System.err.println("Can't find: " + e);
        }
        return r;
    }

    private MyReadabler createWithString(String[] strs){
        String str = String.join("\n", strs);
        MyReadabler r = new MyBufferedReader(new StringReader(str));
        return r;
    }
}