import java.io.*;


class Program2{

	public static void main(String args[])throws IOException{


		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int rem,position=1,power=1;
		System.out.printf("Enter four digit the binary number \n");
		int num = Integer.parseInt(br.readLine());
		int sum = 0;

		while(num!=0){

			rem = num%10;

			if(rem == 1){

				sum = sum + power;
			}

			power = powerOf2(2,position);
			position++;

			num = num/10;

		}

		switch(sum){

			case 10:
				System.out.printf("A\n");
				break;
			case 11:
				System.out.printf("B\n");
				break;
			case 12:
				System.out.printf("C\n");
				break;
			case 13:
				System.out.printf("D\n");
				break;
			case 14:
				System.out.printf("E\n");
				break;
			case 15:
				System.out.printf("F\n");
				break;
			default:
				System.out.printf("%d\n",sum);
		}


		

	}
	
	
	static int powerOf2(int under , int upper){


		while(upper !=1){
		
			under = 2*under;
			upper--;
		}	

		return under;

	}		
}	
