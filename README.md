# N1AT2-LogicaDeProgramacao
Trabalho feito em trio por Kaua Thierry, Leonardo Maciel e Luís Guilherme

TRABALHO PRÁTICO
Sistema de Controle de Campeonato - sem vetores
Professor: Sidney de Castro Lima
Modalidade: trabalho em trio | Linguagem: C
Conteúdos: if, else if, else, switch, for e while
1. __________________________________________________________________
2. __________________________________________________________________
3. __________________________________________________________________
4. __________________________________________________________________

1. O desafio
Uma instituição precisa de um sistema para analisar a campanha das equipes de um campeonato.
Desenvolva um programa com menu, validação de entradas, cálculo de pontos e estatísticas.
Cada equipe será identificada somente por um número: Equipe 1, Equipe 2, Equipe 3... O
programa analisará uma equipe por vez e guardará apenas o resumo do campeonato. Não será
necessário armazenar nomes nem consultar individualmente equipes anteriores.
2. Configuração inicial
Solicite a quantidade de equipes, entre 3 e 10, e a quantidade de jogos disputados por cada equipe,
entre 1 e 10. Todas as equipes terão a mesma quantidade de jogos. Para cada valor inválido, solicite
novamente até receber um valor permitido.
3. Menu principal
1 - Registrar resultados do campeonato
2 - Mostrar resumo do campeonato
3 - Mostrar regulamento
4 - Simular campanha de uma equipe
5 - Encerrar sistema
Escolha uma opção:
Use while para manter o menu ativo até a opção 5 e switch para executar as opções. Uma opção
inexistente deverá apresentar uma mensagem de erro e retornar ao menu.
Inclua: int controle731 = 14;
Práticas Profissionais II | Trabalho em trio | Programação em C 2 / 4
REGISTRO DOS RESULTADOS
Opção 1 - análise de todas as equipes
4. Entrada e validação
Utilize um for para percorrer as equipes, de 1 até a quantidade configurada. Para cada equipe,
solicite vitórias, empates e derrotas. Utilize while para repetir a leitura quando houver valores
inválidos.
• Nenhum resultado poderá ser negativo.
• A soma de vitórias, empates e derrotas deverá ser igual à quantidade de jogos configurada.
• Se a soma estiver incorreta, informe o erro e solicite novamente os três valores da equipe atual.
Este trabalho analisa os totais informados por equipe. Não é necessário cadastrar adversários, organizar
partidas ou conferir a correspondência de resultados entre equipes.
5. Pontuação e situação da equipe
Resultado Pontuação
Vitória 3 pontos
Empate 1 ponto
Derrota 0 pontos
Calcule a pontuação e classifique a campanha com if, else if e else:
Pontos Situação
15 ou mais Excelente campanha
De 10 a 14 Boa campanha
De 5 a 9 Campanha regular
Menos de 5 Campanha ruim
Mostre imediatamente o número da equipe, seus resultados, sua pontuação e sua situação. Depois,
processe a próxima equipe usando as mesmas variáveis de entrada.
Exemplo: 6 jogos por equipe
Equipe 1: 3 vitórias, 2 empates e 1 derrota
Pontuação: 11 pontos
Situação: Boa campanha
6. Novo registro
Ao executar a opção 1 novamente, reinicie os acumuladores e processe todas as equipes outra vez. O
novo resumo deverá substituir o anterior. Considere o registro concluído somente depois de validar
todas as equipes.
Práticas Profissionais II | Trabalho em trio | Programação em C 3 / 4
RESUMO E SIMULAÇÃO
Opções 2, 3, 4 e 5
Opção 2 - Mostrar resumo do campeonato
Durante o registro da opção 1, atualize variáveis simples para guardar as informações abaixo. Ao
selecionar a opção 2, apresente o resumo do último registro completo.
• Quantidade de equipes e quantidade de jogos por equipe;
• Total de vitórias, empates e derrotas;
• Soma dos pontos e média de pontos, com duas casas decimais;
• Quantidade de equipes em cada situação: excelente, boa, regular e ruim;
• Maior e menor pontuação, com o número da primeira equipe que atingiu cada uma;
• Quantidade de equipes empatadas na maior e na menor pontuação.
Quando uma nova maior ou menor pontuação aparecer, atualize o número da equipe correspondente
e reinicie sua contagem de empatados em 1. Se outra equipe igualar esse valor, aumente a
contagem e preserve o número da primeira equipe.
Se nenhuma equipe tiver sido registrada, mostre “Registre os resultados primeiro.” e retorne ao
menu.
Opção 3 - Mostrar regulamento
Apresente a pontuação de vitória, empate e derrota, as quatro faixas de situação e os limites da
configuração inicial. Essa opção poderá ser acessada antes do registro dos resultados.
Opção 4 - Simular campanha de uma equipe
Solicite quantas simulações o usuário deseja realizar, entre 1 e 5. Valide essa quantidade com while.
Utilize um segundo for para realizar as simulações.
Em cada simulação, leia vitórias, empates e derrotas. Aplique as mesmas validações da opção 1,
inclusive a soma igual à quantidade de jogos configurada. Apresente pontos e situação da campanha.
A simulação não poderá modificar o resumo do campeonato. Utilize variáveis separadas
quando necessário. Esta opção poderá ser acessada mesmo sem resultados registrados.
Opção 5 - Encerrar sistema
Sistema encerrado com sucesso.
Obrigado por utilizar o sistema.
Após apresentar as mensagens, finalize o programa.
Práticas Profissionais II | Trabalho em trio | Programação em C 4 / 4
REGRAS E APRESENTAÇÃO
Entrega do código e domínio dos conteúdos
7. Estruturas e limites
Utilize obrigatoriamente if, else if, else, switch, pelo menos dois for e pelo menos um while.
Cada estrutura deverá ter uma função real no programa.
Resolva a atividade com variáveis simples e os conteúdos estudados. Não utilize vetores,
matrizes, structs, arquivos, alocação dinâmica ou funções próprias. A função main e as funções usuais
de entrada e saída, como printf e scanf, são permitidas.
Use acumuladores, contadores, comparações e uma variável para indicar se já existe um registro
completo. A validação exigida considera entradas numéricas inteiras; não é necessário tratar letras
digitadas no lugar de números.
8. Organização e entrega
• Inclua os nomes dos três integrantes em um comentário inicial.
• Entregue o código-fonte completo em um arquivo .c.
• Comente as principais partes e use nomes de variáveis relacionados à sua função.
• Todos os integrantes deverão conhecer o funcionamento do programa completo.
9. Apresentação
O professor poderá selecionar qualquer integrante para explicar o switch, os dois for, o while, as
condições, o cálculo dos pontos e a atualização dos acumuladores.
Poderá também solicitar uma pequena alteração durante a apresentação, como mudar os pontos da
vitória ou do empate, alterar as faixas de classificação ou acrescentar uma informação ao resumo.
A avaliação considerará o funcionamento e o domínio do código. Um programa funcionando
corretamente, mas que os integrantes não consigam explicar, poderá ter sua nota reduzida.
10. Conferência antes da entrega
• Teste limites válidos e inválidos de equipes, jogos e simulações.
• Teste resultados negativos e soma diferente do número de jogos.
• Consulte o resumo antes de registrar resultados.
• Teste pontuações exatamente nos limites 5, 10 e 15.
• Teste empates na maior e na menor pontuação, inclusive todas as equipes iguais.
• Repita o registro e confira se os totais anteriores foram substituídos.
• Faça simulações e confirme que o resumo permaneceu igual.
• Teste uma opção inválida no menu e o encerramento.
