# Hip/Waist

### Projeto para disciplina de Técnicas de Programação 2019.2 com uso do Qt Creator . Hip/Waist é uma aplicação que cadastra e gerencia a relação cintura quadril (RCQ) de acordo com dados fornecidos pelos usuários.

A relação cintura quadril (RCQ) é uma forma bastante comum de estimar e perceber a distribuição da gordura dos segmentos superiores em relação aos segmentos inferiores e foi desenvolvida para prognosticar o risco de doença cardiovasculares. Para isso e necessário que utilize a medida da cintura (cm) divido pela medida do quadril (cm) e depois observar na tabela se esta dentro dos padrões aceitáveis para a idade e para o sexo (Figura 1).

 RCQ = Cintura (cm)/Quadril (cm).
 
 ![figura da relação](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/figura%20da%20rela%C3%A7%C3%A3o.png)
 
O Hip/Waist permite que o usuário cadastre seu nome, seu gênero, sua idade, a medida da cintura e do quadril.

![tela de inicio](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/tela%20de%20inicio.PNG)

Além da tela de cadastro, o Hip/Waist possui uma tela de tabela, no qual mostra os cadastros de dados feitos.![Tabela](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/tabela.PNG)

Além dessas telas, o Hip/Waist possui uma tela de estatísticas, que mostra o Maior RCQ, Menor RCQ e sua media, de todos os cadastrados.

![Estatisticas](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/Estatisticas.PNG)

# Manual do Usuário

### Hip/Waist é um aplicativo de simples utilização, mas para melhor entendimento foi, temos um botão na tela inicial do aplicativo que quando clicado, README.md desse repositório!

## Modo de cadastrar: 

Para cadastrar é fácil. Apenas digitar o nome, gênero, idade, cintura e quadril, os valores maiores que 0 e o nome com mais de 3 letras, lembrar tambem de não deixar os parametros vázios,além disso, se a pessoa não houver sido cadastrada anteriormente, e logo em seguida apertar o botão "Cadastrar". Observe a tela de cadastro:

![cadastro](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/cadastro.PNG)

#### Se os parâmetros não forem cumpridos?

Será acionado um alerta e não será salvo esse cadastro, podendo após isso ser cadastrado com os dados dentro dos parâmetros. A primeira imagem é em relação aos dados, a segunda se a pessoa já foi cadastrada:

![erro](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/erro.PNG)

![existe](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/existe.PNG)

## Cadastro Realizado...

Com as pessoas cadastradas, elas serão inserido na tabela. Na tabela, será mostrado os dados feito no cadastro, o RCQ calculado internamente a partir da cintura e do quadril, e os Riscos de doenças cardiocasculares através dos dados do cadastro e do RCQ...

![tabela com cadastro](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/tabela%20com%20cadastro.PNG)


## Como ordenar as pessoas por nome? E por RCQ?

Contamos com dois botões que possibilitam a ordenação a partir desses dois critérios. Basta clicar na sua opção desejada e as Pessoas serão mostradas automaticamente na tabela. A primeira imagem mostrará as pessoas ordenadas por nome e a segunda, por ordem crescente de RCQ.

![ordem alfabética](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/ordenar%20por%20nome.PNG)

![ordem RCQ](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/ordenar%20por%20rcq.PNG)

## Como usar a tabela?

### Errei algum dado quando inseri a pessoa, como posso editar ou excluir?

Você pode alterar os dados se clicar duas vezes na célula correspondente a linha da Pessoa, após clicar duas vezes na célula da Pessoa, uma nova janela será aberta, na janela de edição aparecerá a tela como a do cadastro, com os dados de quem deseja alterar ou excluir, contamos com dois botões que possibilitam a "Remoção" da pessoa ou a "Edição" dos dados:

![editar/excluir](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/edi%C3%A7%C3%A3o.PNG)

#### Item editado:

como demonstra a imegem, o nome Naruto foi alterado para Sakura e os valores da cintura e quadril também:

![editado](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/tabela%20atualizada.PNG)

#### Item Excluido:

A imagem mostrará a tabela com a remoção de naruto remoção de Naruto:

![excluído](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/remover.PNG)

## Estatísticas

O Hip/Waist traz algumas estatísticas que são calculadas automaticamente após qualquer cadastro ou após abrir um arquivo pronto. 

![estatisticas](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/estatistica%20com%20dados.PNG)

## Como salvar as Pessoas em um arquivo? E como carregar os filmes de um arquivo existente?

Para salvar é muito fácil. Basta selecionar a opção "Salvar" na barra de tarefas "Arquivo" ou digitar o comando CTRL+S, e as pessoas cadastradas serão salvas em um arquivo de planilha(.csv) com o nome e no local desejado.

![salvar](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/salvar.png)

Para carregar também é muito fácil, basta selecionar um arquivo que respeite o formato lido pelo app (.csc) e ele será mostrado automaticamente dentro das tabelas e estará pronto para ser lido nas estatísticas, ordenado por nome, RCQ, ser editado, excluido ou cadastrado mais pessoas.

![carregar](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/carregar.png)

## Caso precise de ajuda:

### Como obter mais informações do Hip/Waist?

Basta clicar no botão "manual de uso", detectado na tela de cadastro, que esse README.md será aberto e explicará a sua aplicação! 

### Como localizar cardiologistas?

Basta clicar no botão "Cardiologistas", detectado na tela de cadastro, que o maps com a localização dos cardiologistas mais próximos será aberto! 
## Cuide de sua saúde, vá ao médico!

![ajuda](https://github.com/scarletalex/Hip-Waist/blob/master/Figuras%20do%20manual/ajuda.png?raw=true)

# Mais informações:

## Engenharia Elétrica - Técnicas de Programação -IFPB -João Pessoa
## Maria Fernanda Ferreira de Aguiar

### Meu email: fernanda.aguiar@academico.ifpb.edu.br
### Meu instagram: @mariaf3rnand4






