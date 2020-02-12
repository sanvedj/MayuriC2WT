
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
		int n = 0, k = 1;
		int sum = 0;
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
		for(int i = 1; i <= n; i++){
			sum = sum + k * 10;
			System.out.printf("%d %c ", k * 10 - 1, (i != n ? '+':'\0'));
			k = k * 10;
		}
		System.out.printf("= %d\n", sum - n);
	}
}