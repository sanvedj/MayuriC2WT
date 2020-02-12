import java.util.Scanner;

class Demo {
	public static boolean isPrime(int num) {
		if(num <= 3) {
			return num > 1;
		} else if(num % 2 == 0 || num % 3 == 0) {
			return false;
		}

		int i = 5;

		while(i * i < num) {
			if(num % i == 0 || num % (i + 2) == 0) {
				return false;
			}
			i += 6;
		}

		return true;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		int num = sc.nextInt();
		if(isPrime(num)) {
			System.out.println("Prime");
		} else {
			System.out.println("Not prime.");
		}

	}
}
