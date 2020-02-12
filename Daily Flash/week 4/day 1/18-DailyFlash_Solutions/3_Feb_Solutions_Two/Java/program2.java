import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
		
		char c[] = new char[4];
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			c[0] = (char)br.read();
			c[1] = (char)br.read();
			c[2] = (char)br.read();
			c[3] = (char)br.read();
			br.skip(1);
		}
		catch(NumberFormatException nw){
			System.exit(0);
		}
		char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		int k = 0, n = 0;
		
		for(int i = 3;i >= 0; i--){
			n = n + ((int)c[i] - ((int)'0')) * (int)Math.pow(2,k);
			k++;
		}

		System.out.printf("%c\n", arr[n]);
	}
}
