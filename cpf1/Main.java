import java.io.IOException;
import java.util.Scanner;

public class Main { 
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext())
            System.out.println(validate(scanner.next()));
    }

    public static String validate(String cpf) {
        int c, sum1 = 0, sum2 = 0, counter = 1;
        for (int i=0; i<11; i++) {
            if (Character.isDigit(cpf.charAt(i))) {
                c = Character.getNumericValue(cpf.charAt(i));
                sum1 += c*counter;
                sum2 += c*(10-counter);
                counter++;
            }
        }

        if (remainder(sum1) != Character.getNumericValue(cpf.charAt(12))) return "CPF invalido";
        if (remainder(sum2) != Character.getNumericValue(cpf.charAt(13))) return "CPF invalido";
        return "CPF valido";
    }

    public static int remainder(int n) {
        int rem = n % 11;
        return rem == 10 ? 0 : rem;
    }
}
