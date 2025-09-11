#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAMANHO 3

int main() {
    char tabuleiro[TAMANHO][TAMANHO];
    char jogador_atual = 'X';
    int linha, coluna;
    int jogadas = 0;
    int opcao;
    int vitorias_x = 0, vitorias_o = 0, empates = 0;
    char continuar;
    
    // Menu principal
    do {
        #ifdef _WIN32
            system("cls"); // Limpa tela no Windows
        #else
            system("clear"); // Limpa tela no Linux/Mac
        #endif
        
        printf("\n");
        printf("  ╔══════════════════════════════╗\n");
        printf("  ║        JOGO DA VELHA         ║\n");
        printf("  ╠══════════════════════════════╣\n");
        printf("  ║  1. Novo Jogo                ║\n");
        printf("  ║  2. Estatisticas             ║\n");
        printf("  ║  3. Sair                     ║\n");
        printf("  ╚══════════════════════════════╝\n");
        printf("  Escolha uma opcao: ");
        
        // Validação da entrada do menu
        while (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 3) {
            printf("  Opcao invalida! Digite 1, 2 ou 3: ");
            while (getchar() != '\n'); // Limpa o buffer
        }
        
        switch (opcao) {
            case 1: // Novo jogo
                do {
                    // Inicializar tabuleiro
                    for (int i = 0; i < TAMANHO; i++) {
                        for (int j = 0; j < TAMANHO; j++) {
                            tabuleiro[i][j] = ' ';
                        }
                    }
                    jogadas = 0;
                    jogador_atual = 'X';
                    
                    // Loop do jogo
                    while (1) {
                        #ifdef _WIN32
                            system("cls");
                        #else
                            system("clear");
                        #endif
                        
                        // Exibir tabuleiro com bordas
                        printf("\n");
                        printf("     1   2   3\n");
                        printf("   ╔═══╦═══╦═══╗\n");
                        for (int i = 0; i < TAMANHO; i++) {
                            printf(" %d ║", i+1);
                            for (int j = 0; j < TAMANHO; j++) {
                                printf(" %c ║", tabuleiro[i][j]);
                            }
                            printf("\n");
                            if (i < TAMANHO - 1) {
                                printf("   ╠═══╬═══╬═══╣\n");
                            }
                        }
                        printf("   ╚═══╩═══╩═══╝\n");
                        
                        // Verificar se há vencedor
                        int vencedor = 0;
                        
                        // Verificar linhas e colunas
                        for (int i = 0; i < TAMANHO; i++) {
                            if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
                                vencedor = tabuleiro[i][0];
                            }
                            if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
                                vencedor = tabuleiro[0][i];
                            }
                        }
                        
                        // Verificar diagonais
                        if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
                            vencedor = tabuleiro[0][0];
                        }
                        if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
                            vencedor = tabuleiro[0][2];
                        }
                        
                        if (vencedor) {
                            printf("\n  Jogador %c venceu!\n", vencedor);
                            if (vencedor == 'X') vitorias_x++;
                            else vitorias_o++;
                            break;
                        }
                        
                        if (jogadas == 9) {
                            printf("\n  Empate!\n");
                            empates++;
                            break;
                        }
                        
                        // Entrada do jogador
                        printf("\n  Jogador %c, digite linha (1-3) e coluna (1-3): ", jogador_atual);
                        
                        // Validação da entrada
                        while (scanf("%d %d", &linha, &coluna) != 2 || 
                               linha < 1 || linha > 3 || 
                               coluna < 1 || coluna > 3 || 
                               tabuleiro[linha-1][coluna-1] != ' ') {
                            printf("  Posicao invalida ou ocupada! Digite novamente (linha coluna): ");
                            while (getchar() != '\n'); // Limpa o buffer
                        }
                        
                        // Fazer jogada
                        tabuleiro[linha-1][coluna-1] = jogador_atual;
                        jogadas++;
                        
                        // Alternar jogador
                        jogador_atual = (jogador_atual == 'X') ? 'O' : 'X';
                    }
                    
                    printf("\n  Deseja jogar novamente? (S/N): ");
                    scanf(" %c", &continuar);
                    continuar = toupper(continuar);
                    
                } while (continuar == 'S');
                break;
                
            case 2: // Estatísticas
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
                
                printf("\n");
                printf("  ╔══════════════════════════════╗\n");
                printf("  ║        ESTATISTICAS          ║\n");
                printf("  ╠══════════════════════════════╣\n");
                printf("  ║  Vitorias do X: %-12d  ║\n", vitorias_x);
                printf("  ║  Vitorias do O: %-12d  ║\n", vitorias_o);
                printf("  ║  Empates:       %-12d  ║\n", empates);
                printf("  ║  Total de jogos:%-12d  ║\n", vitorias_x + vitorias_o + empates);
                printf("  ╚══════════════════════════════╝\n");
                
                printf("\n  Pressione Enter para continuar...");
                while (getchar() != '\n'); // Limpa o buffer
                getchar(); // Espera Enter
                break;
                
            case 3: // Sair
                printf("\n  Obrigado por jogar! Ate mais!\n");
                break;
        }
        
    } while (opcao != 3);
    
    return 0;
}