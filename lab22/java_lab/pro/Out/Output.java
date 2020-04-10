package pro.Out;
public class Output{
	public static void Out_Array(int array[][], int n, int m ){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++)
				System.out.format("%3d",array[i][j]);	
			System.out.println();
			
		}
		System.out.println();	
	}
}
