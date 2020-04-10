package pro.Inp;
public class Input{
	public static void Input_Array(int array[][], int n, int m ){
		for (int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				array[i][j]=((int)(Math.random()*21 -10));					
	}
}

