public class CountingOccurrences {
    public static void main(String[] args) {
        String str = "nbaernbatnbaynbauinbaopnba";
        String key = "nba";
        System.out.println(CountingOccurrence(str, key));
    }
    public static int CountingOccurrence(String str,String key){
        int count=0;
        if (!str.contains(key)) {
            return count;
        }
        int index=0;
        while(str.indexOf(key,index)!=-1){
            str=str.substring(index+key.length());
            count++;
        }
        return count;
    }
    /* public static int countOccurrences(String str, String key, int index) {
        int count = 0;
        int startIndex = index;
        
        if (!str.contains(key)) {
            return count;
        } else {
            if (str.indexOf(key, startIndex) != -1) {
                count += 1;
                startIndex = str.indexOf(key, startIndex) + key.length();
                count += countOccurrences(str, key, startIndex);
            }
        }
        return count;
    } */
}

  /*   public static int countOccurrences(String str,String key,int index){
        int count=0;
        int startIndex=0;
        if (!str.contains(key)) {
            return count;
        }else{
            
            if (str.indexOf(key)!=-1) {
                count+=1;
                startIndex+=str.indexOf(key);
                countOccurrences(str, key,startIndex);
                
            }
        }
        return count;
    } */

