
import java.io.*;


class Program5{


	public static void main(String args[])throws IOException{

		BufferedReader br  =new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the number");
		int num = Integer.parseInt(br.readLine());

		int sum = (powerOf10(10,num) - (9*num) - 10)/9;

		System.out.printf("%d",sum);


	}	


	static int powerOf10(int under,int upper){
		
		while(upper!=0){
			
			under = 10*under;
			upper--;
		}

		return under;		
	}	

}	
