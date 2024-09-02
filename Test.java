import java.util.Scanner;

public class Test {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
	    System.out.print("Enter the number of elements: ");
		int n = scan.nextInt();
		
        int[] array = new int[n];
		System.out.println("Enter the elements of the array: ");
		for (int i = 0; i < n; i++) {
            array[i] = scan.nextInt();
        }
	}
}
