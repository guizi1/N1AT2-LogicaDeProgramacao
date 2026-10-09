// Integrantes: Kauã Thierry Nunes Duarte Lima, [NOME 2], [NOME 3]
// Trabalho de Praticas Profissionais II - campeonato

/*
    LEGENDA DAS VARIAVEIS

    --- Configuracao e controle ---
    controle731 -> variavel exigida pelo enunciado (valor 14), nao e usada nos calculos
    nEquipes    -> numero de equipes do campeonato
    nJogos      -> numero de jogos de cada equipe
    opcao       -> opcao escolhida no menu
    temRegistro -> indica se ja existe registro completo (0 = nao, 1 = sim)

    --- Equipe atual (opcao 1) ---
    eq          -> numero da equipe atual (contador do for)
    vit         -> vitorias da equipe atual
    empat       -> empates da equipe atual
    der         -> derrotas da equipe atual
    pts         -> pontos da equipe atual
    dadosOk     -> indica se os dados digitados sao validos (0 = nao, 1 = sim)

    --- Acumuladores do resumo ---
    totVit      -> total de vitorias de todas as equipes
    totEmpat    -> total de empates de todas as equipes
    totDer      -> total de derrotas de todas as equipes
    somaPts     -> soma dos pontos de todas as equipes
    media       -> media de pontos por equipe

    --- Quantidade de equipes por situacao ---
    qExc        -> equipes com excelente campanha
    qBoa        -> equipes com boa campanha
    qReg        -> equipes com campanha regular
    qRuim       -> equipes com campanha ruim

    --- Maior e menor pontuacao ---
    maiorPts    -> maior pontuacao do campeonato
    menorPts    -> menor pontuacao do campeonato
    eqMaior     -> numero da primeira equipe que fez a maior pontuacao
    eqMenor     -> numero da primeira equipe que fez a menor pontuacao
    empMaior    -> quantidade de equipes empatadas na maior pontuacao
    empMenor    -> quantidade de equipes empatadas na menor pontuacao

    --- Simulacao (opcao 4) ---
    nSim        -> quantidade de simulacoes que o usuario quer fazer
    numSim      -> numero da simulacao atual (contador do for)
    vitS        -> vitorias da simulacao
    empatS      -> empates da simulacao
    derS        -> derrotas da simulacao
    ptsS        -> pontos da simulacao
    dadosOkS    -> indica se os dados da simulacao sao validos (0 = nao, 1 = sim)

    OBS: as variaveis da simulacao terminam com S e sao separadas das do
    campeonato para a opcao 4 nao alterar o resumo.
*/

#include <stdio.h>

int main() {
    int controle731 = 14;

    int nEquipes, nJogos;
    int opcao = 0;
    int eq, vit, empat, der, pts, dadosOk;
    int temRegistro = 0;  

    int totVit = 0, totEmpat = 0, totDer = 0;
    int somaPts = 0;
    float media = 0;

    int qExc = 0, qBoa = 0, qReg = 0, qRuim = 0;
    int maiorPts = 0, menorPts = 0;
    int eqMaior = 0, eqMenor = 0;
    int empMaior = 0, empMenor = 0;

    int nSim, numSim, dadosOkS;
    int vitS, empatS, derS, ptsS;

    printf("Quantas equipes (3 a 10)? ");
    scanf("%d", &nEquipes);
    while (nEquipes < 3 || nEquipes > 10) {
        printf("Invalido! Digite entre 3 e 10: ");
        scanf("%d", &nEquipes);
    }

    printf("Quantos jogos por equipe (1 a 10)? ");
    scanf("%d", &nJogos);
    while (nJogos < 1 || nJogos > 10) {
        printf("Invalido! Digite entre 1 e 10: ");
        scanf("%d", &nJogos);
    }

    while (opcao != 5) {
        printf("\n===== MENU =====\n");
        printf("1 - Registrar resultados do campeonato\n");
        printf("2 - Mostrar resumo do campeonato\n");
        printf("3 - Mostrar regulamento\n");
        printf("4 - Simular campanha de uma equipe\n");
        printf("5 - Encerrar sistema\n");
        printf("===================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: 
                temRegistro = 0;
                totVit = 0;
                totEmpat = 0;
                totDer = 0;
                somaPts = 0;
                media = 0;
                qExc = 0;
                qBoa = 0;
                qReg = 0;
                qRuim = 0;
                maiorPts = 0;
                menorPts = 0;
                eqMaior = 0;
                eqMenor = 0;
                empMaior = 0;
                empMenor = 0;

                for (eq = 1; eq <= nEquipes; eq++) {

                    dadosOk = 0;
                    while (dadosOk == 0) {
                        printf("\n--- Equipe %d ---\n", eq);
                        printf("Vitorias: ");
                        scanf("%d", &vit);
                        printf("Empates: ");
                        scanf("%d", &empat);
                        printf("Derrotas: ");
                        scanf("%d", &der);

                        if (vit < 0 || empat < 0 || der < 0) {
                            printf("Erro: nao pode numero negativo. Digite de novo.\n");
                        } else if (vit + empat + der != nJogos) {
                            printf("Erro: a soma tem que dar %d jogos. Digite de novo.\n", nJogos);
                        } else {
                            dadosOk = 1;
                        }
                    }

                    pts = (vit * 3) + empat;

                    printf("Equipe %d: %d vitorias, %d empates e %d derrotas\n", eq, vit, empat, der);
                    printf("Pontuacao: %d pontos\n", pts);

                    // situacao da equipe
                    if (pts >= 15) {
                        printf("Situacao: Excelente campanha\n");
                        qExc++;
                    } else if (pts >= 10) {
                        printf("Situacao: Boa campanha\n");
                        qBoa++;
                    } else if (pts >= 5) {
                        printf("Situacao: Campanha regular\n");
                        qReg++;
                    } else {
                        printf("Situacao: Campanha ruim\n");
                        qRuim++;
                    }

                    totVit = totVit + vit;
                    totEmpat = totEmpat + empat;
                    totDer = totDer + der;
                    somaPts = somaPts + pts;

                    if (eq == 1) {
                        maiorPts = pts;
                        menorPts = pts;
                        eqMaior = eq;
                        eqMenor = eq;
                        empMaior = 1;
                        empMenor = 1;
                    } else {
                        if (pts > maiorPts) {
                            maiorPts = pts;
                            eqMaior = eq;
                            empMaior = 1;
                        } else if (pts == maiorPts) {
                            empMaior++;
                        }

                        if (pts < menorPts) {
                            menorPts = pts;
                            eqMenor = eq;
                            empMenor = 1;
                        } else if (pts == menorPts) {
                            empMenor++;
                        }
                    }
                }

                media = (float) somaPts / nEquipes;

                temRegistro = 1; 
                printf("\nRegistro concluido!\n");
                break;

            case 2:
                if (temRegistro == 0) {
                    printf("Registre os resultados primeiro.\n");
                } else {
                    printf("\n===== RESUMO DO CAMPEONATO =====\n");
                    printf("Equipes: %d\n", nEquipes);
                    printf("Jogos por equipe: %d\n", nJogos);
                    printf("Total de vitorias: %d\n", totVit);
                    printf("Total de empates: %d\n", totEmpat);
                    printf("Total de derrotas: %d\n", totDer);
                    printf("Soma dos pontos: %d\n", somaPts);
                    printf("Media de pontos: %.2f\n", media);
                    printf("Equipes com excelente campanha: %d\n", qExc);
                    printf("Equipes com boa campanha: %d\n", qBoa);
                    printf("Equipes com campanha regular: %d\n", qReg);
                    printf("Equipes com campanha ruim: %d\n", qRuim);
                    printf("Maior pontuacao: %d (primeira equipe: %d)\n", maiorPts, eqMaior);
                    printf("Equipes empatadas na maior pontuacao: %d\n", empMaior);
                    printf("Menor pontuacao: %d (primeira equipe: %d)\n", menorPts, eqMenor);
                    printf("Equipes empatadas na menor pontuacao: %d\n", empMenor);
                }
                break;

            case 3:
                printf("\n===== REGULAMENTO =====\n");
                printf("Vitoria = 3 pontos\n");
                printf("Empate = 1 ponto\n");
                printf("Derrota = 0 pontos\n");
                printf("15 ou mais pontos: Excelente campanha\n");
                printf("De 10 a 14 pontos: Boa campanha\n");
                printf("De 5 a 9 pontos: Campanha regular\n");
                printf("Menos de 5 pontos: Campanha ruim\n");
                printf("Equipes: de 3 a 10\n");
                printf("Jogos por equipe: de 1 a 10\n");
                break;

            case 4:
                printf("Quantas simulacoes (1 a 5)? ");
                scanf("%d", &nSim);
                while (nSim < 1 || nSim > 5) {
                    printf("Invalido! Digite entre 1 e 5: ");
                    scanf("%d", &nSim);
                }

                for (numSim = 1; numSim <= nSim; numSim++) {

                    dadosOkS = 0;
                    while (dadosOkS == 0) {
                        printf("\n--- Simulacao %d ---\n", numSim);
                        printf("Vitorias: ");
                        scanf("%d", &vitS);
                        printf("Empates: ");
                        scanf("%d", &empatS);
                        printf("Derrotas: ");
                        scanf("%d", &derS);

                        if (vitS < 0 || empatS < 0 || derS < 0) {
                            printf("Erro: nao pode numero negativo. Digite de novo.\n");
                        } else if (vitS + empatS + derS != nJogos) {
                            printf("Erro: a soma tem que dar %d jogos. Digite de novo.\n", nJogos);
                        } else {
                            dadosOkS = 1;
                        }
                    }

                    ptsS = (vitS * 3) + empatS;
                    printf("Pontuacao: %d pontos\n", ptsS);

                    if (ptsS >= 15) {
                        printf("Situacao: Excelente campanha\n");
                    } else if (ptsS >= 10) {
                        printf("Situacao: Boa campanha\n");
                    } else if (ptsS >= 5) {
                        printf("Situacao: Campanha regular\n");
                    } else {
                        printf("Situacao: Campanha ruim\n");
                    }
                }
                break;

            case 5:
                printf("\nSistema encerrado com sucesso.\n");
                printf("Obrigado por utilizar o sistema.\n");
                break;

            default:
                printf("Opcao invalida! Tente de novo.\n");
        }
    }

    return 0;
}