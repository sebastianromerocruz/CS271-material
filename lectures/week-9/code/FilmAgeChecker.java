public class FilmAgeChecker {
    public static void main(String[] args) {
        int age_limit = 18;
        int age = 31;

        if (age > age_limit) {
            System.out.printf("You are old enough to watch an R-Rated film.\n");
        } else if (age == age_limit) {
            System.out.printf("Happy Birthday! You are old enough to watch an R-Rated film.\n");
        } else {
            System.out.printf("You are not old enough to watch an R-Rated film.\n");
        }
    }
}