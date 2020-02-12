
import java.io.*;



class Program4{

	
	public static void main(String args[])throws IOException{

		
		char ch ='A';

	
		for(int itr = 0 ; itr < 4 ;itr ++){

			for(int jtr = 0 ; jtr<4-itr ; jtr++ ){
				
				System.out.printf("%c",ch+(jtr*2));
			}
			System.out.printf("\n");
			ch = ++ch;	
		}	
	}	
}	
