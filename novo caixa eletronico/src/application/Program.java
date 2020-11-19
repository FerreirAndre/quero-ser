package application;

import java.util.Scanner;

public class Program
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int valor, nota10 = 0,nota100=0,nota50=0,nota20=0,aux=0;
        char escolha;
        do
        {
            System.out.println("Quanto deseja retirar?");
            valor = sc.nextInt();
            if(valor>=100)
            {
                nota100 = valor/100;
                aux += nota100*100;
            }
            if(valor-aux >= 50)
            {
                nota50 = (valor-aux)/50;
                aux += nota50*50;
            }
            if((valor-aux) >= 20)
            {
                nota20 = (valor-aux)/20;
                aux += nota20*20;
            }
            if ((valor-aux) >= 10)
            {
                nota10  = (valor-aux) / 10;
            }
            System.out.printf("%d notas de 100\n" +
                    "%d notas de 50\n" +
                    "%d notas de 20\n" +
                    "%d notas de 10.\n\n",
                    nota100,nota50,nota20,nota10);
            nota10 = 0;
            nota100=0;
            nota50=0;
            nota20=0;
            aux=0;
            System.out.println("Deseja realizar outro saque?\n[S]sim    [N]não\n");
            escolha = sc.next().charAt(0);
        }while(Character.toUpperCase(escolha) == 'S');
    }
}
