import java.util.Scanner;

public class Second {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Integer");
        String name = "niba";
        int n = scan.nextInt();
        int middle = n/2;
        int counter=0;
        for ( int i=0; i<n; i++ ) {
            for ( int j=0; j<n; j++ ) {
                if ( i<middle) {
                    if ( n-j==j || j>=(middle-i) && j<=(middle+i)) {
                        System.out.print(" ");
                    }
                    else {
                        System.out.print("*");
                    }
                }
                else if (i==middle){
                    for ( int k=0; k<n; k++ ) {
                        System.out.print(" ");
                    }
                }
                else {
//                    int p=(i-1)%middle;
//                    if ( n-i==j || j>=(middle-p) && j<=(middle+p)) {
//                        System.out.print(" ");
//                    }
//                    else {
//                        System.out.print("*");
//                    }
                    if ( j>=i-middle && j<n-(i-middle)) {
                        System.out.print(" ");
                    }
                    else {
                        System.out.print("*");
                    }
                }
            }
            System.out.println();
        }
    }
}
