package TextBook.chapter7;

public class Q7_36 {
	public static int[][] a=new int[9][9];
	public static void main(String[] args) {
		

	}
	public static void dfs(int pos,int cur) {
		if(cur==9)return;
		int x=(int)Math.ceil(pos*1.0/8),y=pos%8;
		boolean flag=true;
		for(int i=1;i<=8;i++) {
			if(x-i<1||y+i>8)break;
			if(a[x-i][y+i]==1) {
				flag=false;
				break;
			}
		}
		if(flag) {
			for(int i=1;i<=8;i++) {
				if(x-i<1||y-i<1)break;
				if(a[x-i][y-1]==1) {
					flag=false;
					break;
				}
			}
		}
		if(flag) {
			a[x][y]=1;
			dfs(pos+1,cur+1);
		}
		a[x][y]=0;
		dfs(pos+1,cur);
	}
}
