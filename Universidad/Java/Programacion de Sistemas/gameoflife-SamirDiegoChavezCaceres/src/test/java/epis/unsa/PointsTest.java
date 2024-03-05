package epis.unsa;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;
import java.util.*;
import java.io.*;

public class PointsTest{
  @Test
  public void shouldbeTrue(){
    assertTrue(true);
  }
  //test points
  @Test
  public void creationPoint(){
    Point point = new Point(1, 1);
    assertTrue(point.getX() == 1);
    assertTrue(point.getY() == 1);
  }
  @Test
  //test interpreter
  public void interpreterTest(){
    MyReadabler r;
    //With files 
    //r = createWithFile("file");
    
    //With Strings
    String[] blinker = {"---",
                        "-xx",
                        "---"};
    r = createWithString(blinker);

    List<Point> points = Points.interpreter(1, 1, r);
    assertTrue(points.size() == 2);
    Point p1 = points.get(0);
    int expected, actual;

    expected = 2;
    actual = p1.getX();
    assertEquals(expected, actual);

    expected = 2;
    actual = p1.getY();
    assertEquals(expected, actual);

    Point p2 = points.get(1);

    expected = 3;
    actual = p2.getX();
    assertEquals(expected, actual);

    expected = 2;
    actual = p2.getY();
    assertEquals(expected, actual);
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
