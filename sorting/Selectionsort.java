import java.util.Scanner;
public class Selectionsort{
    public static void main(String args[]){
    System.out.println("Enter size and values: ");
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int arr[]=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }
    for(int i=0;i<n;i++){
        //find the max element
        int maxindex=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[maxindex]<arr[j+1]){
                maxindex=j+1;
            }
        }
        //swap the max element with the last element
        int temp=arr[maxindex];
        arr[maxindex]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        System.out.println(arr[i]);

    }
 }

}
