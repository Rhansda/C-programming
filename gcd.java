import java.util.Scanner;

public class gcd {
    public static void main(String[] args) {
        int n1, n2, gcd = 1;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first value:");
        n1 = scanner.nextInt();
        System.out.println("Enter the second value:");
        n2 = scanner.nextInt();
        scanner.close();
        for (int i = 1; i <= n1 && i <= n2; i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                gcd = i;
            }
        }
        System.out.println("GCD of " + n1 + " and " + n2 + " is " + gcd);
    }
}
