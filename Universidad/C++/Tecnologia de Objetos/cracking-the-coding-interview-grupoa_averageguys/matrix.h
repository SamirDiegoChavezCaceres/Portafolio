//#IFNDEF MATRIX_H
//#DEFINE MATRIX_H
class Matrix {
    public:
        Matrix(int rows, int cols);
        ~Matrix();
        void set(int row, int col, int value);
        int get(int row, int col);
        void printM();
        int getRows();
        int getCols();
        void setRows(int rows);
        void setCols(int cols);
        void changeRows(int* vector, int row);
        void changeCols(int* vector, int col);
        void detectZeros();
    private:
        int rows;
        int cols;
        int** matrix;
};
//#ENDIF