#include <stdio.h>

int main(void) {
   float numa = 0, numb = 0, numc = 0, numd = 0, nume = 0;
   float precioa = 150, preciob = 55, precioc = 180, preciod = 70, precioe = 120;
   char select1;
   float subta = 0, subtb = 0, subtc = 0, subtd = 0, subte = 0, subtotal = 0, subtotaldes = 0, total = 0;
   char nombre[50], cedula[20];
   char otroProducto;

   do {
       do {
           printf("---------------BIENVENIDOS-------------------------\n");
           printf("Elija que producto desea facturar:\n");
           printf("a) Llantas (Precio: $150)\n");
           printf("b) Kit Pastillas de freno (Precio: $55)\n");
           printf("c) Kit de embrague (Precio: $180)\n");
           printf("d) Faro (Precio: $70)\n");
           printf("e) Radiador (Precio: $120)\n");
           scanf(" %c", &select1);

           while (select1 < 'a' || select1 > 'e') {
               printf("Opción no válida, por favor, elija una opción válida (a, b, c, d, o e): ");
               scanf(" %c", &select1);
           }

           switch (select1) {
               case 'a':
                   printf("Ingrese la cantidad de Llantas que desea comprar: ");
                   scanf("%f", &numa);
                   subta = precioa * numa;
                   break;
               case 'b':
                   printf("Ingrese la cantidad de Pastillas de freno que desea comprar: ");
                   scanf("%f", &numb);
                   subtb = preciob * numb;
                   break;
               case 'c':
                   printf("Ingrese la cantidad de Kit embrague de freno que desea comprar: ");
                   scanf("%f", &numc);
                   subtc = precioc * numc;
                   break;
               case 'd':
                   printf("Ingrese la cantidad de faros que desea comprar: ");
                   scanf("%f", &numd);
                   subtd = preciod * numd;
                   break;
               case 'e':
                   printf("Ingrese la cantidad de radiadores que desea comprar: ");
                   scanf("%f", &nume);
                   subte = precioe * nume;
                   break;
           }

           printf("¿Quieres comprar otro producto? (S/N): ");
           scanf(" %c", &otroProducto);

       } while (otroProducto == 'S' || otroProducto == 's');

       subtotal = subta + subtb + subtc + subtd + subte;

       if (subtotal > 100 && subtotal <= 500) {
           subtotaldes = subtotal * 0.95;
       } else if (subtotal > 500 && subtotal <= 1000) {
           subtotaldes = subtotal * 0.93;
       } else if (subtotal > 1000) {
           subtotaldes = subtotal * 0.90;
       }

       total = subtotaldes * 1.12;

       printf("Ingrese el nombre del cliente: ");
       scanf("%s", nombre);

       printf("Ingrese el numero de cedula: ");
       scanf("%s", cedula);

       printf("---------------Factura--------------\n");
       printf("Nombre del cliente: %s\n", nombre);
       printf("Cedula del cliente: %s\n", cedula);
       printf("Producto\tCantidad\tSubtotal\n");
       printf("Llantas\t\t%.0f\t\t%.2f\n", numa, subta);
       printf("Past frenos\t%.0f\t\t%.2f\n", numb, subtb);
       printf("Embrague\t%.0f\t\t%.2f\n", numc, subtc);
       printf("Faro\t\t%.0f\t\t%.2f\n", numd, subtd);
       printf("Radiador\t%.0f\t\t%.2f\n", nume, subte);
       printf("Sub total\t%.2f\n", subtotal);
       printf("Sub total con descuento\t%.2f\n", subtotaldes);
       printf("Total\t%.2f\n", total);

       printf("\n¿Desea realizar otra compra? (S/N): ");
       scanf(" %c", &otroProducto);

   } while (otroProducto == 'S' || otroProducto == 's');

   return 0;
}
