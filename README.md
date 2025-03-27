# Quarto-Opengl

Esse repositório contém a implementação de um ambiente gráfico 3d navegável usando **OpenGL**, o projeto é construído na linguagem **C++** e está estruturado de forma modular, facilitando a manutenção e escalabilidade. 
A versão atual conta com um quarto e objetos como cama, armários e guarda-roupas. Também é possivel se movimentar e alterar o zoom e outros caracteristicas da camera.
Esse projeto é parte da disciplina de Computação gráfica da Universidade Federal do Agreste de Pernambuco.

## 📌 Pré-requisitos
Para compilar e executar o projeto é necessário:

**1. Ter o compilador da linguagem C++.**: Algum compilador como o g++ ou clang++.

**2. GNU MAKE.**: Para gerenciar a compilação via Makefile.

**3. Bibliotecas OpenGL.**: As bibliotecas usadas para implementação das funcionalidades foram *OpenGL*, *GLU*, *GLUT* e *GLEW*.

### **EXEMPLO DE INSTALAÇÃO PARA LINUX (Ubuntu/Debian)**
```
sudo apt update
sudo apt install build-essential make freeglut3-dev libglew-dev libgl1-mesa-dev libglu1-mesa-dev
```

### **Instalação para Windows**:
Utilize ambientes como MinGW ou Cygwin, ou opte pelo Windows Subsystem for Linux (WSL), e siga as orientações da distribuição escolhida para instalar os pacotes necessários.

## 📂 Estrutura do projeto

```
quarto-opengl/
│── includes/
│   ├── animations.h        #assinatura das funções de animação
│   ├── bedroomObjects.h    #Assinatura de todas as funções de objetos em cena.
│   ├── display.h           #Assinatura da funções do Display
│   ├── keyboard.h          #Assinatura das funções do teclardo
│   └── simpleDraw.h        #Assinatura das função desenhos simples.
│── makefile                #Arquivo para compilação com make
│── README.md               #Documentação
│── src/                    #Codigo fonte
│   ├── animations.cpp      #Funções de animação
│   ├── display.cpp         #Função responsável por chamar objetos em tela.
│   ├── keyboard.cpp        #Função de comandos e movimentação
│   ├── main.cpp            #Arquivo principal
│   ├── simpleDraw.cpp      #Funções de desenho básico (Cubos, Triangulos, Esferas)
│   └── objects/            #Diretorio para armazenar todos os arquivos de objetos em cena.
│       ├── bed.cpp
│       ├── bedsideTable.cpp
│       ├── cabinet.cpp
│       ├── fan.cpp
│       ├── lampshade.cpp
│       ├── rack.cpp
│       ├── window.cpp
│       ├── bedroomStructure.cpp
│       ├── dressingTable.cpp
│       ├── flowerPot.cpp
│       ├── myClock.cpp
│       └── wardrobe.cpp

```

## ⚙️ Compilando e executando o projeto

Como estamos utilizando o **makefile**, para compilar basta que estando no diretório raiz do projeto seja dado um comando `make`. Ao compilar será criado um arquivo **bedroom**, que ao ser executado abre a janela da aplicação.

### Comando para navegação

#### Controle do ponto de vista (POV)

- **w**: Aumenta o valor do eixo Y. *Move para cima.*
- **s**: Diminui o valor do eixo Y. *Move para baixo.*
- **a**: Aumenta o valor do eixo X. *Move para esquerda.*
- **d**: Diminui o valor do eixo X. *Move para direita.*
- **i**: Aumenta o valor do eixo Z. *Move para frente.*
- **o**: Diminui o valor do eixo Z. *Move para tras.*

#### Controle de referência (direção para onde a camera olha)
- **j**: Move o ponto de referência para cima em relação ao eixo y.
- **n**: Move o ponto de referência para baixo em relação ao eixo y. 
- **b**: Move o ponto de referência para cima em relação ao eixo x.
- **m**: Move o ponto de referência para baixo em relação ao eixo x.
- **l**: Move o ponto de referência para cima em relação ao eixo z, se afastando da camera.
- **k**: Move o ponto de referência para baixo em relação ao eixo z, se aproximando da camera.

#### Controle Geral
- **q**: Retorna par ao ponto de origem.
- **f**: Liga o ventilador.
- **esc**: Fecha a janela e encerra a execução.
- 

# Autores

| [<img loading="lazy" src="https://avatars.githubusercontent.com/u/134743737?v=4" width=115><br><sub>Bruna Ferreira </sub>](https://github.com/brunagcferreira) |  [<img loading="lazy" src="https://avatars.githubusercontent.com/u/112771403?v=4" width=115><br><sub>Fernando Emidio</sub>](https://github.com/Fernando7492) |  [<img loading="lazy" src="https://avatars.githubusercontent.com/u/117954648?v=4" width=115><br><sub>Clivison Jose</sub>](https://github.com/clivissonjose) |
| :---: | :---: | :---: |