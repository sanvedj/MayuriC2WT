import java.util.Scanner;

class Demo {
	public static void printHex(int num) {	
		switch(num) {
			case 10:
				System.out.print("A");
				break;
			case 11:
				System.out.print("B");
				break;
			case 12:
				System.out.print("C");
				break;
			case 13:
				System.out.print("D");
				break;
			case 14:
				System.out.print("E");
				break;
			case 15:
				System.out.print("F");
				break;
			default:
				System.out.print(num);
				break;
		}
	}
	public static void bin_hex(long bin) {
		int dec = 0, rem, i = 0;
		int temp, rem1, j = 0, div;
		while(bin != 0) {
			rem = (int)(bin % 10);
			if(!(rem == 0 || rem == 1)) {
				System.out.println("Enter valid bin.");
				System.exit(1);
			}
			dec += rem * Math.pow(2, i);
			i++;
			bin /= 10;
		}
		System.out.print("Hex : ");
		temp = dec;
		while(j >= 0) {
			div = temp /(int)Math.pow(16, j);
			rem1 = temp % (int)Math.pow(16, j);
			if(div >= 0 && div < 16) {
				printHex(div);
				j--;
				temp = rem1;
			} else {
				j++;
			}
		}

	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter bin : ");
		long bin = sc.nextLong();
		bin_hex(bin);
	}
}
