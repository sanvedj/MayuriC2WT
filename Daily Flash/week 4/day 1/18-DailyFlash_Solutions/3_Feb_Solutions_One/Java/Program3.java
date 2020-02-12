
import java.io.*;


class Program3{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the Distance in Km");
		int num = Integer.parseInt(br.readLine());

		System.out.printf("Distance in meter %d m",num*1000);




	}	
}	
