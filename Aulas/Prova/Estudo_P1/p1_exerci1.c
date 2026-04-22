#include <stdio.h>

#define MAX 50 // Definindo um limite para os arrays vazios

// Função que caça os subvetores
void subVets(int* vetOrig, int* vetInis, int* vetTams, int* total) {
    int i = 1; // O 'i' é o nosso leitor da estrada. Começa no 1 porque o 0 é o tamanho total.
    int k = 0; // O 'k' é o nosso contador de subvetores achados.

    // vetOrig[0] vale 11. O laço roda enquanto não chegarmos no fim da estrada.
    while (i < vetOrig[0]) {
        // 1. Captura o Tamanho: A placa atual diz o tamanho do buraco
        vetTams[k] = vetOrig[i];

        // 2. Captura o Início: Os dados reais começam sempre uma casa depois da placa
        vetInis[k] = i + 1;

        // 3. O Pulo do Canguru:
        // O novo índice é igual a onde eu estou (i) + o tamanho dos dados que vou pular + 1 (para cair na próxima placa)
        i = i + vetTams[k] + 1;

        // 4. Registra que achou um subvetor com sucesso
        k++;
    }

    // 5. Retorna o total de subvetores achados. 
    // Como 'total' é ponteiro, usamos o '*' para colocar o valor 'k' DENTRO da gaveta dele.
    *total = k;
}

int main() {
    // Array original dado pela questão
    int vetorOriginal[] = { 11, 2, 0, 1, 6, 1, 0, 0, 1, 1, 1 };
    
    // Arrays vazios esperando para serem preenchidos
    int vetInicios[MAX], vetTamanhos[MAX];
    int totalSubVets; // Variável que vai receber a quantidade final

    // --- PASSO 1: A CHAMADA DA FUNÇÃO ---
    // Arrays já são ponteiros por natureza, então mandamos os nomes diretos.
    // Mas totalSubVets é um 'int' normal. Para a função conseguir alterar ele de longe, 
    // TEMOS que mandar o endereço dele usando o '&'.
    subVets(vetorOriginal, vetInicios, vetTamanhos, &totalSubVets);


    // --- PASSO 2: A IMPRESSÃO ---
    printf("Foram encontrados %d subvetores.\n\n", totalSubVets);

    // O laço de fora percorre os subvetores que encontramos (0 e 1)
    for (int j = 0; j < totalSubVets; j++) {
        
        printf("Subvetor %d (Tamanho: %d | Inicio no indice: %d):\n", 
               j + 1, vetTamanhos[j], vetInicios[j]);
               
        printf("Elementos: ");

        // O laço de dentro imprime APENAS os dados daquele subvetor específico.
        // Ele começa no índice inicial que salvamos, e roda a quantidade de vezes que o tamanho mandar.
        int inicio = vetInicios[j];
        int tamanho = vetTamanhos[j];

        for (int x = 0; x < tamanho; x++) {
            // A mágica acontece aqui: vamos no vetor GIGANTE e acessamos só o pedacinho certo
            printf("[%d] ", vetorOriginal[inicio + x]);
        }
        printf("\n\n");
    }

    return 0;
}