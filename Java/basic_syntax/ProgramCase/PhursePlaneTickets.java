public class PhursePlaneTickets {
    public static void main(String[] args) {
        System.out.println(calculate(11, 1000, "头等舱"));
    }

    public static double calculate(int month, double price, String type) {
        if (month >= 5 & month <= 10) {

            return price * switch_type(type, 0.85, 0.9);
        } else {
            return price * switch_type(type, 0.65, 0.7);
        }

    }

    public static double switch_type(String type, double multiple_e, double multiple_t) {
        double multiple = 0;
        switch (type) {
            case "经济舱":
                multiple = multiple_e;
                break;

            case "头等舱":
                multiple = multiple_t;
                break;
            default:
                break;

        }
        return multiple;
    }
}
