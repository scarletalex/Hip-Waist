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

#### Se os parametros não forem cumpridos?

Será acionado um alerta e não será salvo esse cadastro, podendo após isso ser cadastrado com os dados dentro dos parametros. A primeira imagem é em relação aos dados, a segunda está se a pessoa já foi cadastrada:

![erro](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/erro.PNG)

## Cadastro Realizado...

Com as pessoas cadastrada, elas serão inserido na tabela. Na tabela, será mostrado os dados feito no cadastro, o RCQ calculado internamente a partir da cintura e do quadril, e os Riscos de doenças cardiocasculares através dos dados do cadastro e do RCQ...

![tabela com cadastro](https://raw.githubusercontent.com/scarletalex/Hip-Waist/master/Figuras%20do%20manual/tabela%20com%20cadastro.PNG)


## Como ordenar as pessoas por nome? E por RCQ?

Contamos com dois botões que possibilitam a ordenação a partir desses dois critérios de maneira rápida. Basta clicar na sua opção preferida e os filmes serão mostrados automaticamente na tabela. A primeira imagem mostrará os filmes ordenados por nota e a segunda, por nome.



