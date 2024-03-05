package epis.unsa;
import javax.swing.*;
import java.awt.Dimension;
import static java.util.concurrent.TimeUnit.*;
import java.util.concurrent.*;
import java.util.*;
import java.io.*;

import javax.swing.border.EmptyBorder;
/**
 * Hello world!
 *
 */
public class App {
  public static int time = 1;
  public static void main( String[] args ){
    ScheduledExecutorService ex = Executors.newSingleThreadScheduledExecutor();
    JBoard jb = init();
    ex.schedule(stepi(jb, ex), time, TimeUnit.SECONDS);
  }
  static private Runnable stepi(JBoard jb, ScheduledExecutorService ex){
    return new Runnable(){
      @Override
      public void run(){
        jb.nextState();
        jb.repaint();
        ex.schedule(stepi(jb, ex), time, TimeUnit.SECONDS);
      }
    };

  }
  static public JBoard init(){
    int windowSize = 500;

    //init with file
    MyReadabler r;
    JBoard jb = null;
    try {
      
      r = new MyBufferedReader(new FileReader("copy"));

      jb = new JBoard(new Board(20, 20, Points.interpreter(10, 10, r) ));
      jb.setBorder(new EmptyBorder(5, 5, 5, 5));
      JFrame frame = new JFrame("EPIS Game of Life");
      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      jb.setMinimumSize(new Dimension(windowSize, windowSize));
      jb.setPreferredSize(new Dimension(windowSize, windowSize));
      frame.setMinimumSize(new Dimension(windowSize, windowSize));
      //frame.setLocation(windowSize / 2, windowSize/2);
      frame.add(jb);
      frame.pack();
      frame.setVisible(true);
    } catch (Exception e){
      System.err.println("Can't find: " + e);
    }
    return jb;
  }
}
