import java.util.*;
public class bubble{
	public static void main(String args[]){
		
		int arr[]={1,2,4,7,9};
		System.out.println("sorted array : ");
		bubblesort(arr);
		System.out.println(Arrays.toString(arr)); // it will take the array as a string and will print at one go
	}

	public static void bubblesort(int[] array){

		//each time the outer loop runs, only last element will be sorted, hence we need to run the outer loop n times as 1*n=n 

		for(int i=0;i<array.length;i++){
			boolean swapped =false;  // let the array be sorted initially

			//after one inner loop runs,we get the last sorted element,hence we can decrease the size of the inner loop by 1,each time the loop runs so that it not check the last sorted element
			for(int j=1;j<array.length-i;j++){
				if(array[j]<array[j-1]){
					int temp=array[j];
					array[j]=array[j-1];
					array[j-1]=temp;
					swapped=true;  // i.e the array element is swapped in this ith loop , hence the array is not sorted and swapped =true
				}
			}
			if(!swapped){ // if not swapped i.e. array is sorted, hence answer 
				break;
			}

		}
		
	}
}
