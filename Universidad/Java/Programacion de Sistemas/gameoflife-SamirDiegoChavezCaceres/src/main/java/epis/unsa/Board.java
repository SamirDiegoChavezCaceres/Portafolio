package epis.unsa;
import java.util.*;
public class Board{
  private boolean[][] board;
  public Board(int width, int height, List<Point> points){
    board = new boolean[height][width];
    setInitialState(points);
  }
  public int getWidth(){
    return board[0].length;
  }
  public int getHeight(){
    return board.length;
  }
  private Board(boolean[][] board) {
    this.board = board;
  }
  public boolean cell(int i, int j){
    return board[i][j];
  }
  private void setInitialState(List<Point> points){
    for(Point point : points){
      board[point.getY()][point.getX()] = true;
    }
  }
  public int countNeighbors(int x, int y){
    int count = 0;
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){ 
        if(i == 1 && j == 1) continue; // No contar la celda actual
        if(x + i - 1 >= 0 && x + i - 1 < getWidth() && y + j - 1 >= 0 && y + j - 1 < getHeight()){ // revisamos que no se salga del tablero
          if(board[y + j - 1][x + i - 1]) count++; // si la celda vecina está viva, sumamos 1
        }
      }
    }
    return count;
  }
  public Board nextState(){
    boolean[][] nextBoard = new boolean[getHeight()][getWidth()];
    for(int i = 0; i < getHeight(); i++){
      for(int j = 0; j < getWidth(); j++){
        int count = countNeighbors(j, i);
        if(count == 3){ //tres vecinos vivos sobrevive o revive
          nextBoard[i][j] = true;
        }else if(count == 2){ //dos vecinos vivos sobrevive 
          nextBoard[i][j] = board[i][j];
        }else{ //todas las demas opciones muere
          nextBoard[i][j] = false;
        }
      }
    }
    return new Board(nextBoard); //podemos tambien cambiar nuestra tabla.
  }
}
