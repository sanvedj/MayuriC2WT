
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
			
		int n = 0, flag = 0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.exit(0);
		}

		if(n < 0)
			System.exit(0);
		for(int i = 2; i <= n/2; i++){
			
			if(n % i == 0 ){
				System.out.printf("Not prime Number\n");
				flag = 1;
				break;
			}
		}

		if(flag == 0){
			System.out.printf("Prime Number\n");
		}
	}
}