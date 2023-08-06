import java.util.ArrayList;
import java.util.Scanner;

public class FoodDeliverySystem {

    public static void main(String[] args) {
        Manager manager = new Manager();
        manager.start();
    }
}

class Food {
    private String name;
    private double price;
    private String info;

    public Food() {

    }

    public Food(String name, double price, String info) {
        this.name = name;
        this.price = price;
        this.info = info;

    }

    public String getName() {
        return name;
    }

    public Double getPrice() {
        return price;
    }

    public String getInfo() {
        return info;
    }
}

class Manager {
    private ArrayList<Food> foods = new ArrayList<>();
    private Scanner sc = new Scanner(System.in);

    public Manager() {

    }

    public Manager(ArrayList<Food> foods) {
        this.foods = foods;
    }

    public void add() {
        System.out.println("Please enter food name:");
        String food_name = sc.nextLine();
        System.out.println("Please enter food price:");
        Double food_price = sc.nextDouble();
        sc.nextLine();
        System.out.print("Please enter food information:");
        String food_info = sc.nextLine();
        Food food = new Food(food_name, food_price, food_info);
        foods.add(food);
    }

    public void printAllFoods() {
        for (Food food : foods) {
            System.out.println(food.getName() + " " + food.getPrice() + " " + food.getInfo());
        }
    }

    public void start() {

        while (true) {
            String command = sc.nextLine();
            switch (command) {
                case "add":
                    add();
                    break;
                case "query":
                    printAllFoods();
                    break;
                case "exit":
                    break;
                default:
                    break;

            }
        }
    }
}