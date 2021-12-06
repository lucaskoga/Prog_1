#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void clienteHotel(int apartamento, int diasReserva,int client){
    double valorPagar = 0;
    double desconto = 0;
    switch(apartamento){
    case 101:
        valorPagar = diasReserva * 220.00;
        if(client == 1 ){
            desconto = 220.00 * 0.7;
            desconto = desconto / 100;
            valorPagar = valorPagar - desconto;
            printf("Apartamento Standard valor da reserva a pagar %.2lf",valorPagar);
        }
        else {
            if(diasReserva > 3){
            desconto = 220.00 * 10;
            desconto = desconto / 100;
            valorPagar = valorPagar - desconto;
            printf("Apartamento Standard valor da reserva a pagar %.2lf",valorPagar);

            }
        }
    case 102:
        valorPagar = diasReserva * 380.00;
        if(client == 1 ){
            desconto = 380.00 * 0.7;
            desconto = desconto / 100;
            valorPagar = valorPagar - desconto;
            printf("Apartamento Master valor da reserva a pagar %.2lf",valorPagar);
        }
        else {
            if(diasReserva > 3){
            desconto = 380.00 * 10;
            desconto = desconto / 100;
            valorPagar = valorPagar - desconto;
            printf("Apartamento Master valor da reserva a pagar %.2lf",valorPagar);

            }
        }
    case 201:
        valorPagar = diasReserva * 550.00;
        if(client == 1 ){
            desconto = 550.00 * 0.7;
            desconto = desconto / 100;
            valorPagar = valorPagar - desconto;
            printf("Apartamento Deluxe valor da reserva a pagar %.2lf",valorPagar);
        }
        else {
            if(diasReserva > 3){
            desconto = 550.00 * 10;
            desconto = desconto / 100;
            valorPagar = valorPagar - desconto;
            printf("Apartamento Deluxe valor da reserva a pagar %.2lf",valorPagar);

            }
        }

         printf("Todos os apartamento tem o seguinte valor da reserva a pagar %.2lf",valorPagar);
    }
}
int main()
{
    int numeroApartamento, totalDiaReservado, cliente;


    printf("informe o numero do apartamento reservado: ");
    scanf("%d",&numeroApartamento);
    printf("informe o total de dias reservado: ");
    scanf("%d",&totalDiaReservado);
    printf("informe se o hospede ja foi ou nao cliente 1 pra sim e 0 para nao ");
    scanf("%d",&cliente);

    clienteHotel(numeroApartamento,totalDiaReservado,cliente);
    return 0;

}
