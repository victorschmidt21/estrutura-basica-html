#include <stdio.h>     //biblioteca para usar printf e scanf
#include <stdlib.h>    //biblioteca para usar system
#include <string.h>    //biblioteca para usar strings
#include "variaveis.h" //biblioteca com as variaveis
#include <windows.h>   //biblioteca para usar acentos
#include <locale.h>    //biblioteca para usar acentos

void voltarMenu() // funcao para voltar ao menu22
{
    printf("Pressione enter para voltar ao menu.\n"); // imprimir na tela
    getchar();                                        // ler o enter
    system("cls");                                    // limpar a tela
    menu();                                           // voltar ao menu
    return;
}

void leituraLivro(char *nomedoarquivo)
{
    char livros1[50];
    int i = 0;
    arquivoLeitura;
    while (fread(&livros1, sizeof(livros1), 1, arquivo))
    {
        strcpy(livros[i].nome, livros1);
        i++;
    }
    elementoArrayLivro = i;
    arquivoFechar;

    return;
}

void leituraEmprestrimoLivro(char *nomedoarquivo)
{
    char emprestimo[3];
    int i = 0;
    arquivoLeitura;
    while (fread(&emprestimo, sizeof(emprestimo), 1, arquivo))
    {
        strcpy(livros[i].emprestimo, emprestimo);
        printf("\nE.L %s", livros[i].emprestimo);
        i++;
    }

    arquivoFechar;

    system("pause");
    return;
}

void leituraEmprestrimoCliente(char *nomedoarquivo)
{
    char emprestimo[3];
    int i = 0;
    arquivoLeitura;
    while (fread(&emprestimo, sizeof(emprestimo), 1, arquivo))
    {
        strcpy(clientes[i].emprestimo2, emprestimo);
        printf("\nE.C %s", clientes[i].emprestimo2);
        i++;
    }

    arquivoFechar;
    system("pause");
    return;
}

void leituraAutor(char *nomedoarquivo)
{
    char autor1[50];
    int i = 0;
    arquivoLeitura;
    while (fread(&autor1, sizeof(autor1), 1, arquivo))
    {
        strcpy(livros[i].nomeAutor, autor1);
        printf("\nAutor %s", livros[i].nomeAutor);
        i++;
    }
    arquivoFechar;

    system("pause");
    return;
}

void leituraPAG(char *nomedoarquivo)
{
    char numeroPag[10];
    int i = 0;
    arquivoLeitura;
    while (fread(&numeroPag, sizeof(numeroPag), 1, arquivo))
    {
        strcpy(livros[i].numeroPag, numeroPag);
        printf("\nPAG %s", livros[i].numeroPag);
        i++;
    }
    arquivoFechar;
    system("pause");
    return;
}

void leituraGenero(char *nomedoarquivo)
{
    char genero[3];
    int i = 0;
    arquivoLeitura;
    while (fread(&genero, sizeof(genero), 1, arquivo))
    {
        strcpy(livros[i].genero, genero);
        printf("\nGenero %s", livros[i].genero);
        i++;
    }
    arquivoFechar;

    system("pause");

    return;
}

void leituraClientes(char *nomedoarquivo)
{
    char clientes1[50];
    int i = 0;
    arquivoLeitura;
    while (fread(&clientes1, sizeof(clientes1), 1, arquivo))
    {
        strcpy(clientes[i].nome2, clientes1);
        printf("\nCliente %s", clientes[i].nome2);
        i++;
    }

    elementoArrayCliente = i;
    arquivoFechar;

    system("pause");

    return;
}

void leituraCPF(char *nomedoarquivo)
{

    char cpf[20];
    int i = 0;
    arquivoLeitura;
    while (fread(&cpf, sizeof(cpf), 1, arquivo))
    {
        strcpy(clientes[i].cpf, cpf);
        printf("\nCPF %s", clientes[i].cpf);
        i++;
    }
    arquivoFechar;
    printf("\nE.C %s", clientes[i].emprestimo2);

    system("pause");

    return;
}

void leituraTelefone(char *nomedoarquivo)
{

    char telefone[20];
    int i = 0;
    arquivoLeitura;
    while (fread(&telefone, sizeof(telefone), 1, arquivo))
    {
        strcpy(clientes[i].telefone, telefone);
        printf("\n Telefone %s", clientes[i].telefone);
        i++;
    }
    arquivoFechar;

    system("pause");
    return;
}

void leituraDataNascimento(char *nomedoarquivo)
{

    char data[15];
    int i = 0;
    arquivoLeitura;
    while (fread(&data, sizeof(data), 1, arquivo))
    {
        strcpy(clientes[i].dataDeNascimento, data);
        printf("\n D.N %s", clientes[i].dataDeNascimento);
        i++;
    }

    arquivoFechar;

    return;
}

void cadastrarLivro(char *nomedoarquivo) // funcao para cadastrar o livro]

{
    char nomes[50];                     // definir um tamanho para o nome
    printf("digite o nome do livro: "); // imprimir na tela
    fgets(nomes, 50, stdin);            // ler o nome
    fflush(stdin);                      // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&nomes, sizeof(nomes), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return;
}

void cadastrarGenero(char *nomedoarquivo) // funcao para cadastrar o genero]
{
    char genero[3];
    int num;
    do
    {
        printf("Selecione o genero do livro\n"); // imprimir na tela
        printf("[1] Romance     [2] Terror     [3] Contos\n");
        printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
        printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
        fgets(genero, 10, stdin); // ler o genero
        num = strtol(genero, NULL, 10);
    } while (num < 0 || num > 9);

    fflush(stdin); // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&genero, sizeof(genero), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return;
}

void cadastrarAutor(char *nomedoarquivo)
{
    char nome[50];                               // definir um tamanho para o nome
    printf("digite o nome do autor do livro: "); // imprimir na tela
    fgets(nome, 50, stdin);                      // ler o nome
    fflush(stdin);                               // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&nome, sizeof(nome), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return;
}

void cadastrarPAG(char *nomedoarquivo)
{
    char numero[10];                               // definir um tamanho para o nome
    printf("digite numero de páginas do livro: "); // imprimir na tela
    fgets(numero, 10, stdin);                      // ler o nome
    fflush(stdin);                                 // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&numero, sizeof(numero), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return;
}

void cadastrarEmprestimo(char *nomedoarquivo)
{

    arquivoEditar; // abrir o arquivo

    fwrite("0", sizeof("0"), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return;
}

void livrosEmprestados() // funcao para listar os livros emprestados
{
    printf("LIVROS EMPRESTADOS\n\n"); // imprimir na tela
    printf("Codigo|| Nome do Livro\n");
    for (int i = 0; i < (elementoArrayLivro); i++) // loop para percorrer o array
    {
        if (livros[i].emprestimo == "1") // condicao para verificar se o livro esta emprestado
        {
            printf("%d     || %s\n", i, livros[i].nome); // imprimir na tela
        }
        else // condicao para verificar se o livro nao esta emprestado
        {
            continue; // continuar
        }
    }
    return;
}

void cadastrarCliente(char *nomedoarquivo) // funcao para cadastrar o cliente
{

    char nome2[50]; // definir um tamano para o nome
    fgets(nome2, 50, stdin);
    printf("digite o nome do Cliente: \n"); // imprimir na tela
    fgets(nome2, 50, stdin);                // ler o nome
    fflush(stdin);                          // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&nome2, sizeof(nome2), 1, arquivo); //   escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return; // retornar 0
}

void cadastrartelefone(char *nomedoarquivo) // funcao para cadastrar o telefone
{
    char telefone[20];                          // definir um tamanho para o telefone
    printf("Digite o telefone do Cliente: \n"); // imprimir na tela
    fgets(telefone, 20, stdin);                 // ler o telefone
    fflush(stdin);                              // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&telefone, sizeof(telefone), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return; // retornar 0
}

void cadastrarCPF(char *nomedoarquivo)
{

    char cpf[20];
    printf("digite o CPF: \n");
    fgets(cpf, 20, stdin);
    fflush(stdin);

    arquivoEditar;

    fwrite(&cpf, sizeof(cpf), 1, arquivo);

    arquivoFechar;

    return;
}

void cadastrarData(char *nomedoarquivo)
{
    char data[15];
    printf("digite a data de nascimento do cliente: \n");
    fgets(data, 15, stdin);
    fflush(stdin);

    arquivoEditar;

    fwrite(&data, sizeof(data), 1, arquivo);

    arquivoFechar;

    return;
}

void listaClientes() // funcao para listar os clientes
{
    printf("Clientes:\n"); // imprimir na tela
    printf("Codigo|| Nome do Cliente  //  CPF  //  Telefone  //  Data de Nascimento\n\n");

    for (int i = 0; i < elementoArrayCliente; i++)
    {
        printf("%d     || %s\n", i, clientes[i].nome2);
    }

    return;
}

void generos()
{
    int codigo; // definir um codigo
    char s1[2] = "1";
    char s2[2] = "2";
    char s3[2] = "3";
    char s4[2] = "4";
    char s5[2] = "5";
    char s6[2] = "6";
    char s7[2] = "7";
    char s8[2] = "8";
    char s9[2] = "9";
    printf("GENEROS\n\n"); // imprimir na tela
    printf("selecione o genero do livro\n");
    printf("[1] Romance     [2] Terror     [3] Contos\n");
    printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
    printf("[7] Ficcao      [8] Poesia     [9] Infantil\n\n");
    scanf("%d", &codigo); // ler o codigo
    switch (codigo)       // condicao para verificar o codigo
    {
    case 1: // caso o codigo seja 1
        system("cls");
        printf("LIVROS DO GENERO ROMANCE:\n\n");
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s1) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

    case 2: // caso o codigo seja 2
        system("cls");
        printf("LIVROS DO GENERO TERROR:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s2) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break; // quebrar
    case 3:
        system("cls");
        printf("LIVROS DO GENERO CONTOS:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s3) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break; // quebrar
    case 4:    // caso o codigo seja 4
        system("cls");
        printf("LIVROS DO GENERO BIOGRAFIA:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s4) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break;
    case 5: // caso o codigo seja 5
        system("cls");
        printf("LIVROS DO GENERO AUTOAJUDA:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s5) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break;
    case 6:
        system("cls");
        printf("LIVROS DO GENERO TRUE CRIME:\n\n");
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s6) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break;
    case 7:
        system("cls");
        printf("LIVROS DO GENERO FICCAO:\n\n");
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s7) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    case 8:
        system("cls");
        printf("LIVROS DO GENERO POESIA:\n\n");
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s8) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    case 9:
        system("cls");
        printf("LIVROS DO GENERO INFANTIL:\n\n");
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, s9) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    default:                                  // caso o codigo seja invalido
        printf("Insira um codigo valido!\n"); // imprimir na tela
        break;                                // quebrar
    }
    system("pause"); // pausar o sistema
    return;
}

void menuBiblioteca() // funcao para o menu da biblioteca
{
    int selecao;                              // definir uma selecao
    printf("Selecione a opcao desejada: \n"); // imprimir na tela
    printf("[1] Todos os livros \n");
    printf("[2] Generos \n");
    printf("[3] Livros emprestados \n");
    printf("[4] Voltar para o Menu \n");
    scanf("%i", &tecla); // ler a tecla
    fflush(stdin);       // limpar o buffer

    switch (tecla) // condicao para verificar a tecla
    {
    case 1: // caso a tecla seja 1
        system("cls");
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        leituraAutor("autor.bin");
        leituraPAG("pag.bin");
        leituraEmprestrimoLivro("emprestimoLivro.bin");
        Biblioteca(); // chamar a funcao
        break;        // quebrar
    case 2:
        system("cls");
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        leituraAutor("autor.bin");
        leituraPAG("pag.bin");
        leituraEmprestrimoLivro("emprestimoLivro.bin");
        leituraGenero("genero.bin");
        generos();
        break;
    case 3:
        system("cls");
        livrosEmprestados();
        break;
    case 4:
        menu();
    default:
        printf("Codigo invalido. Tente novamente!");
        menuBiblioteca(); // chamar a funcao
        break;            // quebrar
    }

    return;
}

void Biblioteca()
{
    printf("TODOS OS LIVROS\n\n");

    for (int i = 0; i < elementoArrayLivro; i++)
    {
        printf("%d || %s\n", i, livros[i].nome);
    }

    return;
}

void emprestimoLivro() // funcao para o emprestimo do livro
{
    int codigo; // definir um codigo

    printf("EMPRESTIMO\n\n"); // imprimir na tela
    int sentinela = 0;        // definir uma sentinela
    while (sentinela == 0)    // condicao para verificar a sentinela
    {

        printf("Digite o codigo do livro: \n");      // imprimir na tela
        scanf("%d", &codigo);                        // ler o codigo
        for (int i = 1; i < elementoArrayLivro; i++) // loop para percorrer o array
        {

            if (livros[i].emprestimo == "1") // condicao para verificar se o livro esta emprestado
            {
                printf("O livro %s ja esta emprestado.", livros[i].nome);     // imprimir na tela
                int condicao = 0;                                             // definir uma condicao
                printf("(1)Tentar novamente              (2)Voltar ao menu"); // imprimir na tela
                scanf("%i", &condicao);                                       // ler a condicao
                fflush(stdin);                                                // limpar o buffer
                if (condicao == 1)                                            // condicao para verificar a condicao
                {
                    break; // quebrar
                }
                else // condicao para verificar a condicao
                {
                    menu(); // voltar ao menu
                }
            }
            if (codigo < 0 || codigo >= elementoArrayLivro) // condicao para verificar o codigo
            {
                printf("Digite um codigo valido!\n"); // imprimir na tela
                break;                                // quebrar
            }
            if (codigo == i) // condicao para verificar o codigo
            {
                printf("\nLivro escolhido: \n");          // imprimir na tela
                printf("%s", livros[i].nome);             // imprimir na tela
                emprestar("emprestimoLivro.bin", codigo); // definir o emprestimo
                sentinela = 1;                            // definir a sentinela
                break;                                    // quebrar
            }
        }
    }
    int sentinela2 = 0; // definir uma sentinela

    while (sentinela2 == 0) // condicao para verificar a sentinela
    {

        printf("Digite o codigo do Cliente: \n");      // imprimir na tela
        scanf("%d", &codigo);                          // ler o codigo
        for (int i = 0; i < elementoArrayCliente; i++) // loop para percorrer o array
        {
            if (clientes[codigo].emprestimo2 == "1") // condicao para verificar se o cliente esta com o livro
            {
                printf("O cliente ");                                           // imprimir na tela
                printf("%s ja possui um emprestimo.", clientes[codigo].nome2);  // imprimir na tela
                int condicao = 0;                                               // definir uma condicao
                printf("(1)Tentar novamente              (2)Voltar ao menu\n"); // imprimir na tela
                scanf("%i", &condicao);                                         // ler a condicao
                fflush(stdin);                                                  // limpar o buffer
                if (condicao == 1)                                              // condicao para verificar a condicao
                {
                    break; // quebrar
                }
                else // condicao para verificar a condicao
                {
                    menu(); // voltar ao menu
                }
            }
            if (codigo < 0 || codigo >= elementoArrayCliente) // condicao para verificar o codigo
            {
                printf("Digite um codigo valido!\n"); // imprimir na tela
                break;
            }
            if (codigo == i) // condicao para verificar o codigo
            {
                printf("\nCliente escolhido: \n\n");        // imprimir na tela
                printf("%s", clientes[i].nome2);            // imprimir na tela
                emprestar("emprestimoCliente.bin", codigo); // definir o emprestimo
                sentinela2 = 1;                             // definir a sentinela
                break;                                      // quebrar
            }
        }
    }
    printf("Empréstimo realizado com sucesso!!\n"); // imprimir na tela
    menu();                                         // voltar ao menu
    return;
}

void devolucaoLivro()
{
    int codigo;
    printf("\nDEVOLUÇÃO\n");

    int sentinela = 0;
    while (sentinela == 0)
    {
        printf("Digite o código do livro.\n");
        scanf("%i", &codigo);
        for (int i = 1; i < elementoArrayLivro; i++)
        {
            if (livros[i].emprestimo == "0")
            {
                int condicao2 = 0;
                printf("O livro ");
                printf("%s não esta emprestado.\n", livros[i].nome);
                printf("(1)Tentar novamente              (2)Voltar ao menu\n");
                scanf("%i", &condicao2);
                fflush(stdin);
                if (condicao2 == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }

            if (codigo < 0 || codigo >= elementoArrayLivro)
            {
                printf("Digite um código válido!\n");
                break;
            }
            if (codigo == i)
            {
                printf("\nLivro devolvido: ");
                printf("%s", livros[i].nome);
                devolver("emprestimoLivro.bin", codigo);
                sentinela = 1;
                break;
            }
        }
    }

    int sentinela2 = 0;
    while (sentinela2 == 0)
    {

        printf("Digite o código do Cliente: \n");
        scanf("%d", &codigo);
        for (int i = 0; i < elementoArrayCliente; i++)
        {
            if (clientes[i].emprestimo2 == "0")
            {
                int condicao = 0;
                printf("O cliente %s não possui empréstimo.\n", clientes[i].nome2);
                printf("[1]Tentar novamente              [2]Voltar ao menu\n");
                scanf("%i", &condicao);
                fflush(stdin);
                if (condicao == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }
            if (codigo < 0 || codigo >= elementoArrayCliente)
            {
                printf("Digite um código válido!\n");
                break;
            }
            if (codigo == i)
            {
                printf("\nCliente devolução: ");
                printf("%s\n", clientes[i].nome2);
                devolver("emprestimoCliente.bin", codigo);
                sentinela2 = 1;
                break;
            }
        }
        printf("Devolução realizado com sucesso!!\n");
        menu();
        return;
    }
}

void devolver(char *nomedoarquivo, int codigo)
{

    arquivoEditar1;

    fseek(nomedoarquivo, codigo * sizeof(0), SEEK_SET);
    fwrite(0, sizeof(0), 1, nomedoarquivo);

    arquivoFechar;

    return;
}

void emprestar(char *nomedoarquivo, int codigo)
{
    arquivoEditar1;

    fseek(nomedoarquivo, codigo * sizeof(1), SEEK_SET);
    fwrite(1, sizeof(1), 1, nomedoarquivo);

    arquivoFechar;

    return;
}

void alterarNome(char *nomedoarquivo, int codigo)
{
    char nome2[50];  
    fgets(nome2, 50, stdin);                             
    printf("digite o nome para a alteração: \n"); 
    fgets(nome2, 50, stdin);                      
    fflush(stdin);                                

    arquivoEditar1; // abrir o arquivo

    fseek(nomedoarquivo, codigo * sizeof(nome2), SEEK_SET);
    fwrite(&nome2, sizeof(nome2), 1, arquivo);

    arquivoFechar; // fechar o arquivo

    return;
}

void alterarCPF(char *nomedoarquivo, int codigo)
{
    char cpf[20];
    printf("digite o CPF para a alteração: \n");
    fgets(cpf, 20, stdin);
    fflush(stdin);

    arquivoEditar1;

    fseek(arquivo, codigo * sizeof(cpf), SEEK_SET);
    fwrite(&cpf, sizeof(cpf), 1, arquivo);

    arquivoFechar;

    return;
}

void alterarTelefone(char *nomedoarquivo, int codigo)
{
    char telefone[20];
    printf("digite o telefone para a alteração: \n");
    fgets(telefone, 20, stdin);
    fflush(stdin);

    arquivoEditar1;

    fseek(nomedoarquivo, codigo * sizeof(telefone), SEEK_SET);
    fwrite(&telefone, sizeof(telefone), 1, nomedoarquivo);

    arquivoFechar;

    return;
}

void alterarDataNascimento(char *nomedoarquivo, int codigo)
{
    char data[15];
    printf("digite a data para a alteração: \n");
    fgets(data, 15, stdin);
    fflush(stdin);

    arquivoEditar1;

    fseek(nomedoarquivo, codigo * sizeof(data), SEEK_SET);
    fwrite(&data, sizeof(data), 1, nomedoarquivo);

    arquivoFechar;

    return;
}

void deletarCliente(char *nomedoarquivo)
{
    int codigo;
    printf("Informe o codigo do cliente para exclui-lo: \n");
    scanf("%d", &codigo);
    fflush(stdin);

    arquivoEditar1;

    fseek(nomedoarquivo, codigo * sizeof(" "), SEEK_SET);
    fwrite(" ", sizeof(" "), 1, nomedoarquivo);

    arquivoFechar;
}

void menuEdicaoCliente()
{
    int tecla;
    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Alterar Nome \n");
    printf("[2] Alterar CPF \n");
    printf("[3] Alterar Telefone \n");
    printf("[4] Alterar Data de nascimento \n");
    printf("[5] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);

    int codigo;
    printf("Informe o código do cliente\n");
    scanf("%i", &codigo);

    switch (tecla)
    {
    case 1:
        alterarNome("cliente.bin", codigo);
        break;

    case 2:
        alterarCPF("cpf.bin", codigo);
        break;

    case 3:
        alterarTelefone("telefone.bin", codigo);
        break;

    case 4:
        alterarDataNascimento("dataNascimento.bin", codigo);
        break;

    case 5:
        menuEditar();
        break;

    default:
        printf("\nInforme um codigo válido.");
        menuEdicaoCliente();
        break;
    }

    return;
}

void alterarGenero(char *nomedoarquivo, int codigo)
{
    char genero[3];
    int num;
    do
    {
        printf("Selecione o novo genero do livro\n"); // imprimir na tela
        printf("[1] Romance     [2] Terror     [3] Contos\n");
        printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
        printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
        fgets(genero, 10, stdin); // ler o genero
        num = strtol(genero, NULL, 10);
    } while (num < 0 || num > 9);

    fflush(stdin); // limpar o buffer

    arquivoEditar1; // abrir o arquivo
    fseek(nomedoarquivo, codigo * sizeof(genero), SEEK_SET);
    fwrite(&genero, sizeof(genero), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return;
}

void alterarNumeroPag(char *nomedoarquivo, int codigo)
{
    char numero[10];
    printf("digite o numero para a alteração: \n");
    fgets(numero, 10, stdin);
    fflush(stdin);

    arquivoEditar1;

    fseek(nomedoarquivo, codigo * sizeof(numero), SEEK_SET);
    fwrite(&numero, sizeof(numero), 1, nomedoarquivo);

    arquivoFechar;

    return;
}

void deletarLivro(char *nomedoarquivo)
{
    int codigo;
    printf("Informe o codigo do livro para exclui-lo: \n");
    scanf("%d", &codigo);
    fflush(stdin);

    arquivoEditar1;

    fseek(nomedoarquivo, codigo * sizeof(" "), SEEK_SET);
    fwrite(" ", sizeof(" "), 1, nomedoarquivo);

    arquivoFechar;
}

void menuEdicaoLivro()
{

    int tecla;
    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Alterar Nome \n");
    printf("[2] Alterar genero \n");
    printf("[3] Alterar nome do autor \n");
    printf("[4] Alterar numero de páginas \n");
    printf("[5] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);

    int codigo;

    printf("Informe o código do livro\n");
    scanf("%i", &codigo);

    switch (tecla)
    {
    case 1:

        alterarNome("livros.bin", codigo);
        break;

    case 2:
        alterarGenero("genero.bin", codigo);
        break;

    case 3:
        alterarNome("autor.bin", codigo);
        break;

    case 4:
        alterarNumeroPag("pag.bin", codigo);
        break;

    case 5:

        menuEditar();
        break;

    default:

        printf("\nInforme um codigo válido.");
        menuEdicaoCliente();
        break;
    }
}

void menuEditar()
{

    int tecla;

    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Editar informações do cliente\n");
    printf("[2] Apagar cliente\n");

    printf("[3] Editar informações do livro \n");
    printf("[4] Apagar livro\n");
    printf("[5] Sair \n");

    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        menuEdicaoCliente();
        break;

    case 2:
        deletarCliente("clientes.bin");
        break;

    case 3:
        menuEdicaoLivro();
        break;

    case 4:
        deletarLivro("livros.bin");
        break;

    case 5:
        menu();
        break;

    default:
        printf("\nInforme uma opção válida.");
        menuEditar();
        break;
    }
}

void consultarLivro()
{
    int codigo;
    printf("\bInforme o codigo do livro: ");
    scanf("%i", &codigo);
    fflush(stdin);

    printf("Nome: %s", livros[codigo].nome);
    printf("Autor: %s", livros[codigo].nomeAutor);
    printf("Genêro: %s", livros[codigo].genero);
    printf("Numero de Páginas: %s", livros[codigo].numeroPag);

    if (livros[codigo].emprestimo == "0")
    {
        printf("Situação de empréstimo: Não possui");
    }
    else
    {
        printf("Situação de empréstimo: Possui");
    }

    int tecla;
    system("pause");
    printf("Selecione a opção desejada: \n");
    printf("[1] Consultar outro livro \n");
    printf("[2] Editar cadastro \n");
    printf("[3] Voltar para o menu \n");

    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        consultarLivro();
        break;

    case 2:
        menuEdicaoLivro();
        break;

    case 3:
        voltarMenu();
        break;

    default:
        voltarMenu();
        break;
    }
}

void consultarCliente()
{
    int codigo;
    printf("\bInforme o codigo do cliente: ");
    scanf("%i", &codigo);
    fflush(stdin);

    printf("Nome: %s", clientes[codigo].nome2);
    printf("Telefone: %s", clientes[codigo].telefone);
    printf("Data de Nascimento: %s", clientes[codigo].dataDeNascimento);
    printf("CPF: %s", clientes[codigo].cpf);

    if (clientes[codigo].emprestimo2 == "0")
    {
        printf("Situação de empréstimo: Não possui");
    }
    else
    {
        printf("Situação de empréstimo: Possui");
    }

    int tecla;
    system("pause");
    printf("Selecione a opção desejada: \n");
    printf("[1] Consultar outro cliente \n");
    printf("[2] Editar cadastro \n");
    printf("[3] Voltar para o menu \n");

    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        consultarCliente();
        break;

    case 2:
        menuEdicaoCliente();
        break;

    case 3:
        voltarMenu();
        break;

    default:
        voltarMenu();
        break;
    }
}

void menu()
{
    int tecla;
    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Biblioteca \n");
    printf("[2] Cadastrar Livro \n");
    printf("[3] Clientes Cadastrados \n");
    printf("[4] Cadastrar Clientes \n");
    printf("[5] Empréstimo de livros \n");
    printf("[6] Devolução de livros \n");
    printf("[7] Editar informações \n");
    printf("[8] Consultar cadastro do livro \n");
    printf("[9] Consultar cadastro do cliente \n");
    printf("[10] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);
    switch (tecla)
    {
    case 1:
        system("cls");
        menuBiblioteca();
        voltarMenu();
        break;
    case 2:
        cadastrarLivro("livros.bin");
        cadastrarGenero("genero.bin");
        cadastrarAutor("autor.bin");
        cadastrarPAG("pag.bin");
        cadastrarEmprestimo("emprestimoLivro.bin");
        voltarMenu();
        break;
    case 3:
        system("cls");
        leituraClientes("clientes.bin");
        leituraCPF("cpf.bin");
        leituraDataNascimento("dataNascimento.bin");
        leituraEmprestrimoCliente("emprestimoCliente.bin");
        leituraTelefone("telefone.bin");
        listaClientes();
        voltarMenu();
        break;
    case 4:
        system("cls");
        cadastrarCliente("cliente.bin");
        cadastrarCPF("cpf.bin");
        cadastrartelefone("telefone.bin");
        cadastrarData("dataNascimento.bin");
        cadastrarEmprestimo("emprestimoCliente.bin");
        voltarMenu();
        break;
    case 5:
        system("cls");
        leituraEmprestrimoCliente("emprestimoCliente");
        leituraEmprestrimoLivro("emprestimoCliente.bin");
        emprestimoLivro();
        voltarMenu();
        break;
    case 6:
        system("cls");
        leituraEmprestrimoCliente("emprestimoCliente");
        leituraEmprestrimoLivro("emprestimoCliente.bin");
        devolucaoLivro();
        voltarMenu();
        break;
    case 7:
        system("cls");
        menuEditar();
        break;

    case 8:
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        leituraAutor("autor.bin");
        leituraPAG("pag.bin");
        leituraEmprestrimoLivro("emprestimoLivro.bin");
        leituraGenero("genero.bin");
        consultarLivro();
        system("cls");
        break;

    case 9:

        leituraClientes("cliente.bin");
        leituraCPF("cpf.bin");
        leituraDataNascimento("dataNascimento.bin");
        leituraEmprestrimoCliente("emprestimoCliente.bin");
        leituraTelefone("telefone.bin");
        consultarCliente();
        system("cls");
        break;
    case 10:
        system("cls");
        printf("SISTEMA ENCERRADO!");
        exit(0);
        break;
    default:
        system("cls");
        printf("Opção inválida \n\n");
        menu();
        break;
    }
    return;
}

void inicio()
{
    printf("\n\n   \t\t\t\t\tSEJA BEM-VINDO A BIBLIOTECA BPK\n\n");
    printf("\t\t\t\t\tPRESSIONE ENTER PARA CONTINUAR");
    getchar();
    fflush(stdin);
    system("cls");
    menu();
}

int main()

{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    inicio();
    return 0;
}