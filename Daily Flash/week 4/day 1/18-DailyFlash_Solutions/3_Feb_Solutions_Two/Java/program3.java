import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
			
		int n = 0, flag = 0;
		System.out.printf("Enter Km : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.exit(0);
		}

		if(n < 0)
			System.exit(0);
		System.out.printf("%d KM is equal to %dm\n", n, n * 1000);
	}
}
