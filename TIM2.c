#include <stdio.h>
#include <stdlib.h>

/////
// Assinatura das funções

void telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);
void telaMenuConsultor(void);
void telaCadastrarConsultor(void);
void telaPesquisarConsultor(void);
void telaAlterarConsultor(void);
void telaExcluirConsultor(void);
void telaMenuOraculo(void);
void telaCadastrarOraculo(void);
void telaAlterarOraculo(void);
void telaPesquisarOraculo(void);
void telaExcluirOraculo(void);

/////
// Programa principal

int main(void) {
    telaPrincipal();
    telaSobre();    
    telaEquipe();
    telaMenuConsultor();
    telaCadastrarConsultor();
    telaPesquisarConsultor();
    telaAlterarConsultor();
    telaExcluirConsultor();
    telaMenuOraculo();
    telaCadastrarOraculo();
    telaAlterarOraculo();
    telaPesquisarOraculo();
    telaExcluirOraculo();
    return 0;
}

/////
// Funções

void telaPrincipal(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Cigana Virtual                                          ///\n");
    printf("///                   Desenvolvido por mariana - 2022.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                      = = = = = =  Cigana Virtual = = = = = =                      ///\n");
    printf("///                                                                                   ///\n");
    printf("///                        1. Módulo Usuário                                          ///\n");
    printf("///                        2. Módulo Consultor                                        ///\n");
    printf("///                        3. Módulo Oráculo                                          ///\n");
    printf("///                        4. Módulo Relatórios                                       ///\n");
    printf("///                        5. Módulo Sobre                                            ///\n");
    printf("///                        0. Sair                                                    ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\ n");
    getchar();
}



void telaSobre(void) {
    sistema("clear || cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    Universidade Federal do Rio Grande do Norte                    ///\n");
    printf("///                    Centro de Ensino Superior do Seridó                            ///\n");
    printf("///                    Departamento de Computação e Tecnologia                        ///\n");
    printf("///                    Disciplina DCT1106 - Programação                               ///\n");
    printf("///                    Projeto Cigana Virtual                                         ///\n");
    printf("///                    Desenvolvido por mariana - 2022.2                              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                      = = = = = = Cigana Virtual = = = = = =                       ///\n");
    printf("///                                                                                   ///\n");
    printf("///          Programa  utilizado na disciplina DCT1106 - Programação, para fins       ///\n");
    printf("///          avaliativo no Semestre 2021.2. O programa contém os principais módulos   ///\n");
    printf("///          e funcionalidades que serão exigidos ao longo da disciplina.             ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaEquipe(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Cigana Virtual                                          ///\n");
    printf("///                   Desenvolvido por mariana - 2022.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                      = = = = = = Cigana Virtual = = = = = =                       ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Este projeto exemplo foi desenvolvido por:                            ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Mariana Araújo de Medeiros                                            ///\n");
    printf("///             E-mail: mariana.medeiros.017@ufrn.edu.br                              ///\n");
    printf("///             Repositório: https://github.com/Marianaaramed/Cigana.git              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuConsultor(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = Menu Consultor = = = = = = = = =           ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                    1. Cadastrar um novo Consultor                             ///\n");
    printf("///                    2. Pesquisar por Consultor                                 ///\n");
    printf("///                    3. Atualizar o cadastro de um Consultor                    ///\n");
    printf("///                    4. Excluir Consultor do sistema                            ///\n");
    printf("///                    0. Voltar ao menu anterior                                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Escolha a opção desejada:                                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaCadastrarConsultor(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Cadastrar Consultor = = = = = = = =            ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                  CPF (apenas números):                                        ///\n");
    printf("///                  Nome completo:                                               ///\n");
    printf("///                  Especialidade:                                               ///\n");
    printf("///                  E-mail:                                                      ///\n");
    printf("///                  Data de Nascimento (dd/mm/aaaa):                             ///\n");
    printf("///                  Celular (apenas números):                                    ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarConsultor(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///            = = = = = = = = Pesquisar Consultor = = = = = = = =                ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe o CPF (apenas números):                              ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarConsultor(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Alterar Consultor = = = = = = = = =             ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Informe o CPF (apenas números):                             ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaExcluirConsultor(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///              = = = = = = = = Excluir Consultor = = = = = = = = =              ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe o CPF (apenas números):                                ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuOraculo(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = =                    ///\n");
    printf("///             = = = = = = = = = Menu Oráculo = = = = = = = = =                  ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                1. Cadastrar Oráculo                                           ///\n");
    printf("///                2. Pesquisar Oráculo                                           ///\n");
    printf("///                3. Alterar Oráculo                                             ///\n");
    printf("///                3. Excluir Oráculo                                             ///\n");
    printf("///                0. Voltar ao menu anterior                                     ///\n");
    primtf("///                                                                               ///\n");
    printf("///                Escolha a opção desejada:                                      ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle<ENTER> para continuar...\n");
    getchar();
    }
    
    
    
    void telaCadastrarOraculo(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = = Cadastrar Oráculo = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Numeração (apenas números):                                ///\n");
    printf("///                    Data da Criação (dd/mm/aaaa):                              ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
 
 
 
 
void telaPesquisarOraculo(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///             = = = = = = = = Pesquisar Oráculo = = = = = = = =                 ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe a numeração (apenas números):                          ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarOraculo(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = = Alterar Oráculo = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe a numeração (apenas números):                          ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaExcluirOraculo(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///              = = = = = = = = Excluir Oráculo = = = = = = = = =                ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe a numeração (apenas números):                          ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
