# Github

Arquivo da aula de Git e Github para iniciantes

Curso de Git

Configurando o git

$ git config --global user.nome "Victor Ivan"  //
Indica o usuario

$ git config --global user.email "ivanvps@outlook.com" //
Indica qual o email do usuario

$ git config --global core.editor sub (Comando do editor;  ex: Sublime = sub) //
Indica o editor principal do git

$ git config [chave qualquer/ Variavel qlqr] //
Retorna um valor da chamada
ex: $ git config user.name
retorna o username do usuario em questão

///////////////////////////////////////////////////////////////////////////////

1. Comando para criar um novo diretorio

mkdir [nome do diretorio]

2. Entrando no diretorio/pasta

cd [nome do diretorio/pasta]

3. Listando arquivos naquela pasta

ls

4. Comando de entrada no arquivo readme.md

$ vi readme.md

	4.1 Comando de edição no arquivo
	pressionar o botão ' i ';

	4.2 Comando de saida de edição
	pressionar o botão ' esc ';

	4.3 Comando de saida do arquivo readme.md
	pressionar o botão ' esc ', depois digitar ' :wq ';


///////////////////////////////////////////////////////////////

$ git status // retorna como que está a condição do arquivo, se tem arquivos que sofreram alteração, arquivos prontos para dá commit e etc

$ git add (nome do arquivo) // passa o arquivo para um estagio pronto para o commit

$ git commit (nome do arquivo) // Dá commit no arquivo em questão

$ git log // retorna um historico das modificações ocorridas no diretorio

$ git log --author="nome do autor" // retorna um historico das modificações ocorridas no diretorio feita pelo autor entre aspas

$ git shortlog // retorna dados resumidos em ordem alfabetica sobre os user e sobre os commits realizados

$ git log --graph // retorna um grafico dos branchs e versoes do projeto

pelo hash indicado pelo log é possivel saber muitas informações sobre aquele determinado hash pelo comando

$ git show <hash>

ex:
$ git show baeb41e8bad295a41c4cf3668b102cdd9c896908

Fim da primeira vez que eu faço o curso.

$ git diff // Retorna as modificações feitas. É usada antes do arquivo está pronto para comitar, verificando erros no meio do caminho.

$git checkout <nome do arquivo> //  Retira todas as mudanças feitas nos arquivos antes de prepara-los para o commit

$git reset HEAD <nome do arquivo> // Retira ele da fila de adicionados prontos para ir ao commit

$git reset --soft <hash do commit anterior> // Retira o commit posterior ao commit com aquela hash e retorna ele já pronto para o commit
 $git reset --mixed <hash do commit anterior> // Retira o commit posterior ao commit com aquela hash e retorna ele sem está pronto para o commit
 $git reset --hard <hash do commit anterior> // Retira o commit posterior ao commit com aquela hash e deleta toda a alteração do arquivo

$git commit -am "mensagem nome do arquivo" // Commita o arquivo sem precisar adicionar separado o comando -am faz os dois junto

$git push origin master // Envia os arquivos do seu repositorio local para o seu remoto linkado pelo git init/

$git clone usuario@servidor:/caminho/para/o/repositorio // Clona os arquivos do repositorio remoto para o repositorio local



