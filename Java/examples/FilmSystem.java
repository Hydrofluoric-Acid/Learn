import java.util.Arrays;

public class FilmSystem {
    public static void main(String[] args) {
         Movie[] movies = new Movie[1];
        MovieOperator operator=new MovieOperator(movies);
       
        
        movies[0] = new Movie("水门桥",1, 38.9, 9.8, "吴京", new String[]{"吴京","徐克"}, "12万人想看");
        operator.printAllMovies();
    }
}

class Movie {
    private String movie_name;
    private long id;
    private double price;
    private double score;
    private String director;
    private String[] actors;
    private String info;

    public Movie(String movie_name, long id, double price, double score, String director,
            String[] actors, String info) {
        this.movie_name = movie_name;
        this.id = id;
        this.price = price;
        this.score = score;
        this.actors = actors;
        this.info = info;
    }
}

class MovieOperator {
    private Movie[] movies;

    public MovieOperator(Movie[] movies) {
        this.movies = movies;
    }

    public void printAllMovies() {
        System.out.println(Arrays.toString(this.movies));
    }
}
