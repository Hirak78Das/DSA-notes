
public class Peak{
    public static void main(String args[]){
        // find the peak index in a mountain array
        int arr[]={1,3,5,6,5,4,3,0};
        int start=0;
        int end=arr.length-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        System.out.println("peak index in the mountain array is : "+start);

    }
}
