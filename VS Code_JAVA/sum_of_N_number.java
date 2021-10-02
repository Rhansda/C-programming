import java.util.Scanner;

public class sum_of_N_number {
    public static void main(String[] args) {
        int n, sum = 0;
        Scanner r = new Scanner(System.in);
        r.close();
        System.out.println("Enter the Range of number: ");
        n = r.nextInt();
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        System.out.println("Sum= " + sum);
    }
}
