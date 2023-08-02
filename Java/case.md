### 8.1 手动投注

编写一个方法，让用户手动投注，产生一注双色球彩票，思路分析

```java
1.首先，考虑方法是否需要接收数据处理？
	双色球彩票的规则非常明确，没有什么数据需要传递给方法。
	所以，不需要参数

2.接着，考虑方法是否需要返回值？
	方法最终的结果是需要一注双色球彩票的号码，一注彩票有7个号码，可以用一个数组来存
	所以，返回值是一个数组

3.最后，考虑方法内部的业务逻辑怎么编写？
	1)首先需要准备一个int类型数组，长度为7; 用于存储产生的投注号码
	2)循环遍历数组的前6个元素，采用键盘录入的方式，给前区6个红球赋值
		要求录入的整数在1~33范围内，同时录入的整数在数组中不能已存在，否则重新录入
	3)最后再录入一个整数，给后区一个蓝球赋值
		要求整数必须在1~16范围内
```

- 手动投注代码如下

```java
/** 1、设计一个方法，用于让用户投注一组号码并返回（前6个是红球号码，最后1个是蓝球号码 ）*/
public static int[] userSelectNumbers(){
    // 2、创建一个整型数组，用于存储用户投注的7个号码（前6个是红球号码，最后1个是蓝球号码 ）
    int[] numbers =  new int[7];
    // numbers = [0, 0, 0, 0, 0, 0, 0]
    //            0  1  2  3  4  5  6

    Scanner sc = new Scanner(System.in);
    // 3、遍历前6个位置，让用户依次投注6个红球号码，存入
    for (int i = 0; i < numbers.length - 1; i++) {
        // i = 0 1 2 3 4 5

        while (true) {
            // 4、开始让用户为当前位置投注一个红球号码（1-33之间，不能重复）
            System.out.println("请您输入第" + (i + 1) + "个红球号码（1-33之间，不能重复）：");
            int number = sc.nextInt();

            // 5、先判断用户输入的红球号码是否在1-33之间
            if(number < 1 || number > 33){
                System.out.println("对不起，您输入的红球号码不在1-33之间，请确认！");
            }else {
                // 号码是在1-33之间了，接着还要继续判断这个号码是否重复，不重复才可以使用。
                if(exist(numbers, number)){
                    // number当前这个红球号码是重复了。
                    System.out.println("对不起，您当前输入的红球号码前面选择过，重复了，请确认！");
                }else {
                    // number记住的这个号码没有重复了，就可以使用了。
                    numbers[i] = number;
                    break; // 结束当次投注，结束了当前死循环。
                }
            }
        }
    }

    // 6、投注最后一个蓝球号码。
    while (true) {
        System.out.println("请您输入最后1个蓝球号码（1-16）：");
        int number = sc.nextInt();
        if(number < 1 || number > 16){
            System.out.println("对不起，您输入的蓝球号码范围不对！");
        }else {
            numbers[6] = number;
            break; // 蓝球号码录入成功，结束死循环
        }
    }

    return numbers;
}
```

每键盘录入一个号码，需要判断这个号码在数组中是否存在，存在返回true；不存在返回false

```java
private static boolean exist(int[] numbers, int number) {
    // 需求：判断number这个数字是否在numbers数组中存在。
    // numbers = [12, 25, 18, 0, 0, 0, 0]
    // number = 12
    for (int i = 0; i < numbers.length; i++) {
        if(numbers[i] == 0){
            break;
        }
        if(numbers[i] == number){
            return true;
        }
    }
    return false;
}
```

为了打印一注彩票的号码（数组中的元素），把打印数组中的元素也写成方法。

```java
public static void printArray(int[] arr) {
    System.out.print("[");
    for (int i = 0; i < arr.length; i++) {
        System.out.print(i == arr.length - 1 ? arr[i] : arr[i] + ", ");
    }
    System.out.println("]");
}
```

在main方法中测试，运行看能不能产生一注彩票号码

```java
public class Test8 {
    public static void main(String[] args) {
        // 目标：完成双色球系统的开发。
        int[] userNumbers = userSelectNumbers();
        System.out.println("您投注的号码：");
        printArray(userNumbers);
    }
}
```



### 8.2 随机开奖号码

编写一个方法，让用户自动机选投注，产生一注双色球彩票，思路分析

```java
1.首先，考虑方法是否需要接收数据处理？
	双色球彩票的规则非常明确，没有什么数据需要传递给方法。
	所以，不需要参数

2.接着，考虑方法是否需要返回值？
	方法最终的结果是需要一注双色球彩票的号码，一注彩票有7个号码，可以用一个数组来存
	所以，返回值是一个数组

3.最后，考虑方法内部的业务逻辑怎么编写？
	1)首先需要准备一个int类型数组，长度为7; 用于存储产生的投注号码
	2)循环遍历数组的前6个元素，采用生成随机数的的方式，给前区6个红球赋值
		要求生成的随机数在1~33范围内，同时随机的整数数组中不能已存在，否则重新生产
	3)最后再随机一个整数，给后区一个蓝球赋值
		要求随机整数必须在1~16范围内
```

机选号码，代码如下

```java
/** 2、设计一个方法：随机一组中奖号码出来（6个红球号码，1个蓝球号码 ）*/
public static int[] createLuckNumbers(){
    // 1、创建一个整型数组，用于存储这7个号码
    int[] numbers = new int[7];

    Random r  = new Random();
    // 2、遍历前6个位置处，依次随机一个红球号码存入（1-33 不重复）
    for (int i = 0; i < numbers.length - 1; i++) {
        // i = 0 1 2 3 4 5
        while (true) {
            // 3、为当前这个位置随机一个红球号码出来存入。
            //1 - 33 ==> -1 ===> (0 , 32) + 1
            int number = r.nextInt(33) + 1;

            // 4、判断这个号码是否之前出现过（红球号码不能重复）。
            if(!exist(numbers, number)){
                // number不重复。
                numbers[i] = number;
                //结束死循环，代表找到了当前这个位置的一个不重复的红球号码了。
                break; 
            }
        }
    }

    // 3、录入一个蓝球号码。 1-16
    numbers[6] = r.nextInt(16) + 1;
    return numbers;
}
```

在main方法中测试，看是否能够产生一注彩票

```java
public class Test8 {
    public static void main(String[] args) {
        // 目标：完成双色球系统的开发。
        //用户手动投注
        int[] userNumbers = userSelectNumbers();
        System.out.println("您投注的号码：");
        printArray(userNumbers);
        
        //生成中奖号码
        int[] luckNumbers = createLuckNumbers();
        System.out.println("中奖的号码：");
        printArray(luckNumbers);
    }
}
```



### 8.3 判断是否中奖

编写一个方法，判断用户的彩票号码是否中奖，具体中奖规则如下

- 6个红球+1个蓝球 ，奖金1000万

- 6个红球+0个蓝球，奖金500万
- 5个红球+1个蓝球，奖金3000块
- 5个红球+0个蓝球，或者4个红球+1个蓝球，奖金200块
- 4个红球+0个蓝球，或者3个红球+1个蓝球，奖金10块
- 小于3个红球+1个蓝球，奖金5块
- 如果前面的都不成立，就中奖，算你为福利事业做贡献了。

编写方法的思路如下

```java
1.首先，考虑方法是否需要接收数据处理？
	判断彩票是否中奖，需要有两组号码；一组号码是彩票号码，一组号码是开奖号码
	所以，参数需要有两个数组

2.接着，考虑方法是否需要返回值？
	方法不需要返回结果，中了奖，直接将奖项打印输出就行了。
	【注意：这只是提供一种代码的编写方案，你将中奖的金额返回也行】

3.最后，考虑方法内部的业务逻辑怎么编写？
	1)定义两个变量redCount和blueCount用来记录，红球的个数和蓝球的个数
	2)遍历两个数组中前6个元素(红球)，判断两个数组中有没有相同元素
		如果找到一个相同元素，则redCount++
    3)比较两个数组中最后一个元素(蓝球)是否相同
    	如果相同，则blueCount++
	4)根据红球和蓝球的命中个数，打印输出对应的奖项
```

代码如下

```java
/** 3、设计一个方法，用于判断用户的中奖情况 */
public static void judge(int[] userNumbers,int[] luckNumbers){
    // userNumbers = [12, 14, 16, 18, 23, 26, 8]
    // luckNumbers = [16, 17, 18, 19, 26, 32, 8]

    // 2、分别定义2个变量用于记住红球命中了几个以及蓝球命中了几个
    int redCount = 0;
    int blueCount = 0;

    // 先判断红球命中的数量。
    // 遍历用户投注的号码的前6个红球
    for (int i = 0; i < userNumbers.length - 1; i++) {
        // userNumbers[i]
        // 开始遍历中奖号码的前6个红球号码，看用户当前选择的这个号码是否命中了
        for (int j = 0; j < luckNumbers.length - 1; j++) {
            if(userNumbers[i] == luckNumbers[j]){
                redCount++;
                break;
            }
        }
    }

    // 3、判断蓝球是否命中了
    blueCount = userNumbers[6] == luckNumbers[6] ? 1 : 0;

    System.out.println("您命中的红球数量是：" + redCount);
    System.out.println("您命中的蓝球数量是：" + blueCount);

    // 4、判断中奖详情，并输出结果
    if(redCount == 6 && blueCount == 1){
        System.out.println("恭喜您，中奖1000万，可以开始享受人生了~~~");
    }else if(redCount == 6 && blueCount == 0){
        System.out.println("恭喜您，中奖500万，可以稍微开始享受人生了~~~");
    }else if(redCount == 5 && blueCount == 1){
        System.out.println("恭喜您，中奖3000元，可以出去吃顿小龙虾了~");
    }else if(redCount == 5 && blueCount == 0 || redCount == 4 && blueCount == 1){
        System.out.println("恭喜您，中了小奖：200元~");
    }else if(redCount == 4 && blueCount == 0 || redCount == 3 && blueCount == 1){
        System.out.println("中了10元~");
    }else if( redCount < 3 && blueCount == 1){
        System.out.println("中了5元~");
    }else {
        System.out.println("感谢您对福利事业做出的巨大贡献~~~");
    }
}
```

在main方法中测试，检测是否中奖的方法是否正确

```java
public class Test8 {
    public static void main(String[] args) {
        // 目标：完成双色球系统的开发。
        //用户投注
        int[] userNumbers = userSelectNumbers();
        System.out.println("您投注的号码：");
        printArray(userNumbers);
		
        //随机产生一个中奖号码
        int[] luckNumbers = createLuckNumbers();
        System.out.println("中奖的号码：");
        printArray(luckNumbers);

        //判断用户投注的号码是否中奖
        judge(userNumbers, luckNumbers);
    }
}
```