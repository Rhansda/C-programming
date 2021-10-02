import java.util.Scanner;

public class table {
    public static void main(String[] args) {
        int num;
        System.out.print("Enter the range of table: ");
        Scanner p = new Scanner(System.in);
        p.close();
        num = p.nextInt();
        for (int i = 1; i <= 10; i++) {
            System.out.println(num + "*" + i + "=" + num * i);
        }
    }
}
