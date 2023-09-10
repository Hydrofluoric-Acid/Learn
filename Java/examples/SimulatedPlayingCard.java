import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class SimulatedPlayingCard {
    public static void main(String[] args) {
        ArrayList<String> PlayerA = new ArrayList<>();
        ArrayList<String> PlayerB = new ArrayList<>();
        ArrayList<String> PlayerC = new ArrayList<>();
        List<String> BottomCard = new ArrayList<>();
        ArrayList<String> cards=DealCards.formCards();
        Collections.shuffle(cards);
        for (int i = 0; i < 51; i++) {
            if (i % 3 == 0) {
                PlayerA.add(cards.get(i));
            } else if (i % 3 == 1) {
                PlayerB.add(cards.get(i));
            } else {
                PlayerC.add(cards.get(i));
            }
        }
        /* List<String> BottomCard = new ArrayList<>();
        Collections.shuffle(DealCards.formCards());
        for (int i = 0; i < 51; i++) {
            if (i % 3 == 0) {
                PlayerA.add(DealCards.formCards().get(i));
            } else if (i % 3 == 1) {
                PlayerB.add(DealCards.formCards().get(i));
            } else {
                PlayerC.add(DealCards.formCards().get(i));
            }多次调用Deal.formCards()效率低下，且多次洗牌与事实不符合
        } */
        BottomCard = cards.subList(51, 54);
        System.out.println("PlayerA:" + PlayerA.toString());
        System.out.println("PlayerB:" + PlayerB.toString());
        System.out.println("PlayerC:" + PlayerC.toString());
        System.out.println("底牌:" + BottomCard.toString());
    }

}

class Cards {
    static final ArrayList<String> cardNums = new ArrayList<>(
            Arrays.asList("A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"));
    static final ArrayList<String> pokerSuits = new ArrayList<>(Arrays.asList("黑桃", "红桃", "方块", "梅花"));
}

class DealCards {
    private static final String SPECIAL_CARD1 = "大王";
    private static final String SPECIAL_CARD2 = "小王";
    //private static ArrayList<String> cards = new ArrayList<>();改为声明成局部变量，存储牌组可能被上一次结果污染，导致该方法的输出不可预见
    public static ArrayList<String> formCards() {
        ArrayList<String> cards = new ArrayList<>();
        for (String pokerSuite : Cards.pokerSuits) {
            for (String cardNum : Cards.cardNums) {
                cards.add(pokerSuite + cardNum);
            }
        }
        cards.add(SPECIAL_CARD1);
        cards.add(SPECIAL_CARD2);
        /* cards.add("大王");
        cards.add("小王"); 魔术数（Magic Number）和魔法值（Magic Value）指直接使用数字或字符串而没有明确解释其含义的情况。*/
        return cards;
    }
}