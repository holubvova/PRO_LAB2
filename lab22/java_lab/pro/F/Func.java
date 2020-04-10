package pro.F;
public class Func{
	public static void Search(int array[][], int n, int m){
	int i_index, j_index , i = 0 , j , tmp ;
	   for( j = 0;j < m;j++ ,i++){
		tmp =array[0][j];
		i_index = 0;
		j_index = j;
		for( i = 1; i < n; i++)
		{
		 if (tmp<=array[i][j]){
			tmp = array[i][j];
			i_index = i;
			j_index = j;
			}
		}
		System.out.printf("in %d max = %d i: %d j:%d\n", j_index, tmp, i_index , j_index);
}
System.out.println();
}
}
