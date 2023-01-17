import java.util.Scanner;
class MatrixAdd
{ 
 public static void main(String args[])
 { 
 int row, column; 
 Scanner in = new Scanner(System.in); 
 System.out.println("Enter the number of rows and columns of matrix: "); 
 row = in.nextInt(); 
 column = in.nextInt(); 
 int A[][] = new int[row][column]; 
 int B[][] = new int[row][column]; 
 int sum[][] = new int[row][column]; 
 
 System.out.println("Enter the elements of first matrix: "); 
 for (int i = 0 ; i <row ; i++ ) 
 for ( int j = 0 ; j <column ; j++ ) 
 A[i][j] = in.nextInt(); 
 
 System.out.println("Enter the elements of second matrix: "); 
 for (int i = 0 ; i <row ; i++ ) 
 for ( int j = 0 ; j <column ; j++ ) 
 B[i][j] = in.nextInt(); 
 
 System.out.println("Sum of Matrix");
 for (int i = 0 ; i <row ; i++ ) 
 for ( int j = 0 ; j <column ; j++ ) 
 sum[i][j] = A[i][j] + B[i][j];
 
 for (int i = 0 ; i <column; i++ ) 
 { 
 for (int j = 0 ; j < row; j++ )
 { 
 System.out.print(sum[i][j]+"\t"); 
 }
 System.out.print("\n"); 
 } 
 } 
} 