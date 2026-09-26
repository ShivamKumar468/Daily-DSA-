public class Reverse{
    public static void main(String[] args){
        String name ="SHIVAM";
        String rev = "";
        for(int i=name.length()-1;i>=0;i--){
            //rev = rev + name.charAt(i);
            rev=rev.concat(String.valueOf(name.charAt(i)));
        }
        System.out.println(rev);
    }
}