#include <stdio.h>

//declarando variaveis
int tipoSangue;
int rh = 2; //foi definido o valor 2 pois o valor 0 pré definido pela linguagem quebra o codigo

int main(void) {

  //verificando o rh do paciente
  printf("sangue do paciente é positivo ou negativo? \ndigite 1 para positivo e O para negativo: ");
  scanf("%d", &rh);

  //se o rh for positivo, executar esses comandos
  if (rh == 1) {
    //verificando se o sangue é A, B, AB ou O.
    //como já definimos o rh, subentende-se que os tipos sanguineos são A+, B+, AB+ OU O+
    printf("\ndigite o tipo sanguineo do paciente\n \ndigite 1 para A+, 2 para B+, 3 para AB+ ou 4 para O+: ");
    scanf("%d", &tipoSangue);
    
    if (tipoSangue == 1) {
      printf("\no paciente é do tipo sanguineo A+. \nrecebe de A+, A-, O+ e O-. \ndoa para A+ e AB+.");
    } else if (tipoSangue == 2) {
      printf("\no paciente é do tipo sanguineo B+. \nrecebe de B+, B-, O+ e O-. \ndoa para B+ e AB+.");
    } else if (tipoSangue == 3) {
      printf("\no paciente é do tipo sanguineo AB+. \nrecebe de todos os tipos. \ndoa apenas para AB+.");
    } else if (tipoSangue == 4) {
      printf("\no paciente é do tipo sanguineo O+. \nrecebe de O+ e O-. \ndoa para A+, B+, AB+ e O+.");
    } else {
      printf("\ntipo sanguineo inválido");
    }
  } else if (rh == 0) { //se o rh for negativo, executar esses comandos
      //verificando se o sangue é A, B, AB ou O.
      //como já definimos o rh, subentende-se que os tipos sanguineos são A-, B-, AB- OU O-
      printf("\ndigite o tipo sanguineo do paciente \ndigite 1 para A-, 2 para B-, 3 para AB- ou 4 para O-: ");
      scanf("%d", &tipoSangue);

      if (tipoSangue == 1) {
        printf("\no paciente é do tipo sanguineo A-. \nrecebe de A- e O-. \ndoa para A+, A-, AB+ e AB-.");
      } else if (tipoSangue == 2) {
        printf("\no paciente é do tipo sanguineo B-. \n recebe de B- e O-. \ndoa para B+, B-, AB+ e AB-");
      } else if (tipoSangue == 3) {
        printf("\no paciente é do tipo sanguineo AB-. \n recebe de A-, B-, AB- e O-. \ndoa para AB+ e AB-");
      } else if (tipoSangue == 4) {
        printf("\no paciente é do tipo sanguineo O-. \nsó recebe de O-. \ndoa para todos os tipos.");
      } else {
        printf("\ntipo sanguineo inválido");
      }
    } else {
      printf("rh inválido");
    }

  return 0;
}