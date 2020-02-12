import java.io.*;


class Program1{
	
	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number");
		int num = Integer.parseInt(br.readLine());


		int flag =0;
		for(int itr =2 ; itr<=num/2 ;itr++){
		
			if(num%itr == 0){
				flag = 1;
				break;
			}	

		}	

		if(flag==0){
			System.out.printf("The number is Prime");
		}
		else{
			System.out.printf("The number is Not Prime");
		}
	}	

}	
