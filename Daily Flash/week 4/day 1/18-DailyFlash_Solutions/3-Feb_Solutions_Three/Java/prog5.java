import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter n : ");
		int n = sc.nextInt();
		long num = 0, sum = 0;
		
		for(int i = 0; i < n; i++) {
			num = num * 10 + 9;
			sum += num;
			if(i != n - 1) {
				System.out.print(num + " + ");
			} else {
				System.out.print(num + " = ");
			}
		}

		System.out.println(sum);

	}
}
