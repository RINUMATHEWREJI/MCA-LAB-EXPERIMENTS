import java.util.Scanner;

class Matrix {
    int data[][];
    int row;
    int column;

    Matrix(int row, int col, int data[][]) {
        this.row = row;
        this.column = col;
        this.data = data;
    }

    void readMatrix(Scanner scanner) {
        System.out.println("Enter the elements:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                data[i][j] = scanner.nextInt();
            }
        }
    }

    void displayMatrix() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(data[i][j] + "  ");
            }
            System.out.println();
        }
    }

    Matrix matrixAddition(Matrix m2) {
        if (row != m2.row || column != m2.column) {
            System.out.println("Matrices must have the same dimensions for addition");
            return null;
        }
        int resultData[][] = new int[row][column];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                resultData[i][j] = data[i][j] + m2.data[i][j];
            }
        }
        return new Matrix(row, column, resultData);
    }

    Matrix matrixMultiplication(Matrix m2) {
        if (column != m2.row) {
            System.out.println("Invalid dimensions for multiplication");
            return null;
        }
        int resultData[][] = new int[row][m2.column];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < m2.column; j++) {
                for (int k = 0; k < column; k++) {
                    resultData[i][j] += data[i][k] * m2.data[k][j];
                }
            }
        }
        return new Matrix(row, m2.column, resultData);
    }
}

public class L1E4 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of rows of matrix1:");
        int row1 = scanner.nextInt();
        System.out.println("Enter the number of columns of matrix1:");
        int col1 = scanner.nextInt();
        int data1[][] = new int[row1][col1];
        Matrix m1 = new Matrix(row1, col1, data1);
        m1.readMatrix(scanner);
        System.out.println("Enter the number of rows of matrix2:");
        int row2 = scanner.nextInt();
        System.out.println("Enter the number of columns of matrix2:");
        int col2 = scanner.nextInt();
        int data2[][] = new int[row2][col2];
        Matrix m2 = new Matrix(row2, col2, data2);
        m2.readMatrix(scanner);
        System.out.println("First matrix:");
        m1.displayMatrix();
        System.out.println("Second matrix:");
        m2.displayMatrix();

        while (true) {
            System.out.println("1. Matrix addition");
            System.out.println("2. Matrix multiplication");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            int option = scanner.nextInt();
            switch (option) {
                case 1:
                    Matrix sum = m1.matrixAddition(m2);
                    if (sum != null) {
                        System.out.println("Result of addition:");
                        sum.displayMatrix();
                    }
                    break;
                case 2:
                    Matrix mul = m1.matrixMultiplication(m2);
                    if (mul != null) {
                        System.out.println("Result of multiplication:");
                        mul.displayMatrix();
                    }
                    break;
                case 3:
                    System.exit(0);
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}
