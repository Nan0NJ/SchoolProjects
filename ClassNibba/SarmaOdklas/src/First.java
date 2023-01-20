import java.util.Scanner;

public class First {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Integer");
        int n = scan.nextInt();
        int []a = new int[n];
        for(int i =0; i<n; i++){
            a[i]=i;
        }
        for(int i=0; i<n; i++ ) {
            for ( int j=0; j<n; j++) {
                System.out.print(((i+j)%n)+1);
            }
            System.out.println();
        }
    }
}
