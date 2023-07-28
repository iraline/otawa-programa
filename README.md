# Testes Ferramenta Otawa
Repositório dedicado para realizar testes utilizando o framework/api do otawa.

Testes foram realizados no Ubuntu 22.04.2 LTS

## Instalação

Seguir exatamente o tutorial de instalação do otawa e suas dependências, que está disponível em:
http://www.tracesgroup.net/otawa/?page_id=419


Após a instalação, a lista de comandos do otawa fica em _**otawa/bin**_

![image](https://github.com/iraline/otawa-programa/assets/22120173/f7187ee3-f38e-43d1-bb82-db77d1fa931a)


Para conseguir utilizar esses comandos a qualquer momento, basta adicionar ao seu PATH

```bash
  export PATH=$PATH:$PWD/otawa/bin
```
Exemplo:
```bash
  export PATH=$PATH:Desktop/otawa/bin
  echo 'export PATH=$PATH:Desktop/otawa/bin' >> ~/.bashrc

```


## Configuração

Após a instalação e a adição da pasta 'otawa/bin' ao path, basta seguir o tutorial http://www.tracesgroup.net/otawa/doc/manuals/tuto/tuto-0.html.

1 - Deve-se criar uma pasta e, nesta pasta, adicionar 2 arquivos (first.cpp e o makefile)

2 - Em um cmd, va até a pasta onde você inseriu os dois arquivos e insira o comando _**make**_

3 - Para realizar o teste, basta utilizar o .elf de um código como entrada.

![image](https://github.com/iraline/otawa-programa/assets/22120173/f7df6a0e-b785-4124-91ae-903bbc79e207)



## 🔗 Links

API(V2)

http://www.tracesgroup.net/otawa/doc/v2/autodoc/

Tutorial

http://www.tracesgroup.net/otawa/doc/manuals/tuto/tuto-0.html

Gliss2 e arquiteturas

https://www.tracesgroup.net/otawa/?p=338


Benchmark e .elf do ARM

http://otawa.fr/packages/benchs/arm-elf.tar.xz


QuickStart da instalação (também tem link para os benchmarks)

http://www.tracesgroup.net/otawa/?page_id=108917

Manual(v1)

http://www.tracesgroup.net/otawa//doc/manuals/manual/manual-0.html





