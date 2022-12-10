import java.util.*; //Library Usage
//First Big Java Project >> Student: Nenad Jakovchevski Student_ID: 89221061
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); // Adding a scanner for user input
        System.out.print("Insert array length: "); // Getting the User Input on array length
        int length = scan.nextInt();
        if(length<=0){
            System.out.println("Error: Array Wrong Input!"); // Condition --> Negative array length doesn't exist!
            System.exit(1);
        }
        // Creating the Array and Getting User Input on the Numbers.
        int [] Array = new int[length];
        int [] RevArray = new int[length]; // Creating a Copy of our Array to Reverse it later. (Needed because of our Sort Function)
        for(int index=0; index<Array.length; index++)
        {
            System.out.print("Insert the "+(index+1)+" number: ");
            Array[index] = scan.nextInt(); // User Input for Every Element in the Array.
            RevArray[index] = Array[index];
        }
        // Calling the Needed Function.
        DisplayArrayInformation(Array); // To display all the elements of the inserted array (as they initially inputted). (1)
        System.out.println("\n(2)\nNumber of Different numbers: "+DifferentElements(Array)); // To display number of different numbers in array. (2)
        EvenOddCounter(Array); // To display the Even & Odd Number of Elements inserted. (3) & (4)
        System.out.println("\n(5)\n");
        Repetition_Max_Occurrence(Array,Array.length); // To display the Frequency of repetition in the elements & The Max Occurrence. (5) & (6)
        System.out.println("\n(7)\nLargest Number in the Array is: "+LargestNumber(Array)); // To display the Largest Number. (7)
        System.out.println("\n(8)\nSecond Smallest Number in the Array is: "+SecondSmallestNumber(Array)); // To display the 2nd Smallest Number. (8)
        AverageAll(Array); // To display the average of all the numbers. (9)
        System.out.println("\n(10)\nThe Standard Deviation is: "+Standard_Deviation(Array)); // To display the standard deviation. (10)
        System.out.println("\n(11)\nThe Median is: "+Median(Array)); // To display the median of the array. (11)
        System.out.println("\n(12)\nThe Sum of all the Elements is: "+Sum(Array)); // To display the sum of the array. (12)
        Palindrome_BiggestPalindrome(Array); // To display counter of Palindromes & The Biggest Palindrome smaller than the biggest number in the list. (13) & (14)
         // To display the Reverse order of the array.
        System.out.print("\n(15)\nThe Original Array in Reverse Order: ");
        for(int i=RevArray.length-1; i>=0; i--)
        {
            if(i==0)
                System.out.println(RevArray[i]+" ");
            else
                System.out.print(RevArray[i]+", ");
        }
        System.out.println("\nEND OF THE BIG PROJECT.\nTHANK YOU!\nStudent: Nenad Jakovchevski || Student_ID: 89221061"); //Last line.
    }
    public static void DisplayArrayInformation(int [] ar){
            System.out.print("\n(1)\nDisplay of the elements inserted: ");
            for (int i = 0; i < ar.length; i++) {
                if (i == ar.length - 1)
                    System.out.print(ar[i] + " ");
                else                                        // To display all the elements from the array delimited by a comma.
                    System.out.print(ar[i] + ", ");
            }
            System.out.println("\nThe number of elements in your array is: " + ar.length); // To display amount of elements in array.
    }
    public static int DifferentElements(int [] ar) {
        int counter=1;
        for (int i=1; i<ar.length; i++) {
            int j;
            for (j = 0; j<i; j++)
                if (ar[i] == ar[j])  // Function to check the number of different numbers in the array.
                    break;
            if (i == j)
                counter++;
        }
        return counter;
    }
    public static void EvenOddCounter(int [] ar) {
        int counterEven = 0;
        int counterOdd = 0;
        for (int i = 0; i < ar.length; i++) {
            if (ar[i] % 2 == 0)
                counterEven++;      //Function to find the Even & Odd Numbers of the array.
            else
                counterOdd++;
        }
        System.out.println("\n(3)\nNumber of Even Elements in your array is: " + counterEven);
        System.out.println("\n(4)\nNumber of Odd Elements in your array is: " + counterOdd);
    }
    public static void Repetition_Max_Occurrence (int [] arr , int n) {
        boolean [] same = new boolean[n];
        int [] ar = sortArrayAscendingOrder(arr);
        int max_repetition=0, max_occurrence=0, most=-1;
        for (int i=0; i<n; i++) {
            int repetition=1;
            if(same[i]==true)   //If statement to check if elements already processed.
                continue;
            for (int j=i+1; j<n; j++) {
                if (ar[i]==ar[j]) {
                    same[j] = true;
                    repetition++;
                }
            }
            if(repetition>max_repetition)
            {
                max_repetition=repetition;   //Function to display the Frequency & Max Occurrence in the Array.
                max_occurrence=ar[i];
            }
            else if(max_repetition==repetition)
                max_occurrence= Math.min(most,ar[i]);
            double b=repetition;
            double percentage = (b/n)*100;
            System.out.println("Frequency of repetition for " +ar[i]+ ": " +repetition+ " times, "+percentage+ "%. ");
        }
        if(max_occurrence==-1)
            System.out.println("\n(6)\nThere is no number with max occurrence.");
        else
            System.out.println("\n(6)\nNumber in the array with the maximum occurrence is: "+max_occurrence);
    }
    public static int [] sortArrayAscendingOrder(int [] ar){
        int temp;
        for(int i=0; i<ar.length-1; i++)
        {
            for(int j=0; j<ar.length-i-1; j++)
            {
                if(ar[j]>ar[j+1]) {
                    temp = ar[j];                     // Function to sort the array (From smallest to biggest).
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
                }
            }
        }
        return ar;
    }
    public static int LargestNumber(int [] ar){
        int [] newAr = sortArrayAscendingOrder(ar);
        return newAr[newAr.length-1];
    }
    public static int SecondSmallestNumber(int [] ar){
        int [] newAr = sortArrayAscendingOrder(ar);
        int secondsmallest=0;
        while(newAr[secondsmallest]==ar[0]) {
            secondsmallest++; // loop to check if the smallest number repeats.
        }
        return newAr[secondsmallest];
    }
    public static void AverageAll(int [] ar){
        double sum = Sum(ar);
        double average = sum/ar.length;
        System.out.println("\n(9)\nThe average of all numbers is: "+average);
    }
    public static double Standard_Deviation(int [] ar) {
        double sum=Sum(ar), standard_deviation = 0;
        double mean=sum/ar.length;
        for (int i=0; i<ar.length; i++) {
            standard_deviation += Math.pow(ar[i] - mean, 2);
        }
        return Math.sqrt(standard_deviation /ar.length);
    }
    public static double Median(int [] ar) {
        int [] newAr = sortArrayAscendingOrder(ar);
        double median;
        if (newAr.length % 2 == 0)
            median = (newAr[newAr.length / 2] + newAr[newAr.length / 2 - 1]) / 2.0;
        else
            median = newAr[newAr.length / 2];
        return median;
    }
    public static int Sum(int [] ar) {
        int sum = 0;
        for (int i = 0; i<ar.length; i++) { // To calculate the sum of the elements in the array,
            sum += ar[i];
        }
        return sum;
    }
    public static void Palindrome_BiggestPalindrome(int [] ar){
        int [] newAr = sortArrayAscendingOrder(ar);
        int rev=0,counter=0,maxPalindrome=0,maxCounter=0;
        for(int i=0;i<newAr.length;i++) {
            for (int j = newAr[i]; j > 0; j /= 10) {
                int digit = j % 10;
                rev = rev * 10 + digit;
            }
            if (newAr[i] >= 0 && rev == newAr[i]) {
                maxPalindrome = newAr[0];
                counter++;
                if (newAr[i] <= newAr[newAr.length - 1] && newAr[i] >= maxPalindrome) {
                    maxPalindrome = newAr[i];
                    maxCounter++;
                }
            }
            rev = 0;
        }
        System.out.println("\n(13)\nNumber of elements in the array which are palindrome: " +counter);
        if(maxCounter==0)
            System.out.println("\n(14)\nThere are no palindromes inserted in the array!");
        else
            System.out.println("\n(14)\nLargest Palindrome in array: "+maxPalindrome);
    }
}
//Completion of Big Project One ~ Nenad Jakovchevski 89221061
