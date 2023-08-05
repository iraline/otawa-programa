#include <iostream>
#include <cstdio> // popen() e pclose()
#include <cstdlib> // system()

int main(int argc, char* argv[]) {
  
    //Armazena a saída que o comando retorna
    char outputWcet[128];

    // Pega o segundo argumento da linha de comando inserida no terminal
    std::string arquivoElf = argv[1];

    // Comando que entrega o wcet
    std::string comandoWcet = "owcet -s trivial " + arquivoElf;

    // Comando que entrega os grafos
    std::string comandoGrafo = "dumpcfg -Wds " + arquivoElf;

    const char* comandoWcetPointer = comandoWcet.c_str();
    const char* comandoGrafoPointer = comandoGrafo.c_str();

    // Executando o comando do grafo
    if(std::system(comandoGrafoPointer)){
        std::cerr << "Erro ao executar o comando que gera o grafo\n";
        return 1;
    }

    // Abre conexão para leitura da saída
    FILE* fp = popen(comandoWcetPointer, "r");
    if (!fp) {
        std::cerr << "Erro ao executar o comando\n";
        return 1;
    }

    //Lista todas as linhas de saída
    while (fgets(outputWcet, sizeof(outputWcet), fp) != nullptr) {
        std::cout << "Saída do comando: " << outputWcet;
    }

    // Encerra a conexão
    pclose(fp);

    return 0;
}
