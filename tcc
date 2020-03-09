  UNIVERSIDADE TECNOLÓGICA FEDERAL DO PARANÁ
TECNOLOGIA EM ANÁLISE E DESENVOLVIMENTO DE SISTEMAS






VALÉRIA BANACHI BARRETO







 PLATAFORMA MEAN STACK PARA DIAGNÓSTICO E GESTÃO DE ENSINO








 TRABALHO DE CONCLUSÃO DE CURSO






CORNÉLIO PROCÓPIO
2017 
VALÉRIA BANACHI BARRETO















PLATAFORMA MEAN STACK PARA DIAGNÓSTICO E GESTÃO DE ENSINO



Trabalho de Conclusão de Curso de graduação, apresentado à disciplina de Trabalho e Conclusão de Curso 2, do curso de Análise e Desenvolvimento de Sistemas da Universidade Tecnológica Federal do Paraná – UTFPR, como requisito para a obtenção do título de Tecnólogo.

Orientador: Prof. Dr. Alexandre Rômolo Moreira Feitosa.



	


CORNÉLIO PROCÓPIO
2017 
FOLHA DE APROVAÇÃO
 
RESUMO


BARRETO, Valéria Banachi. Plataforma MEAN STACK Para Diagnóstico E Gestão De Ensino.  2017. 53 f. Trabalho de Conclusão de Curso – Tecnologia em Análise e Desenvolvimento de Sistemas. Universidade Tecnológica Federal do Paraná. Cornélio Procópio, 2017. 


A educação é um tema relevante para a sociedade e com o intuito de mensurar a qualidade da rede de ensino, vários países utilizam exames e questionários socioeconômicos. No entanto, ao analisar as ações em execução, observa-se a necessidade de conciliar a tecnologia disponível e a participação da comunidade escolar no processo de diagnóstico, como também elaborar medidas que favoreçam a retroalimentação do processo e a sua especificação. Dentro deste contexto, este trabalho tem o propósito de desenvolver uma ferramenta web que colabore no diagnóstico e divulgação dos problemas em instância micro de cada instituição de ensino, para que desta forma, todos os interessados possam trabalhar no aperfeiçoamento e acompanhamento da qualidade da educação.


Palavras-chaves: Educação. Qualidade. Diagnóstico. Tecnologia.

 
ABSTRACT


BARRETO, Valéria Banachi. MEAN STACK Platform for Diagnostics and Teaching Management.  2017. 53 f. Trabalho de Conclusão de Curso – Tecnologia em Análise e Desenvolvimento de Sistemas. Universidade Tecnológica Federal do Paraná. Cornélio Procópio, 2017. 


Education is a relevant topic for a society with the intention of measuring the quality of the education, many countries use exams and socioeconomic questionnaires. However, when analyzing the actions in execution, it is observed a need to reconcile available technology and participation of the school community in the diagnostic process, as well as to elaborate measures that favor a feedback of the process and its specification. Within this context, this work has the purpose of developing a tool that collaborates in diagnose and disseminate problems in micro instance of each educational institution, so that all interested parties work in the improvement and monitoring of the quality of education.


Keywords: Education.Quality. Diagnostics. Technology.

 
LISTA DE FIGURAS

FIGURA 1 - ALUNOS COM APRENDIZADO INADEQUADO	10
FIGURA 2 - EDUCAÇÃO CENTRADA NO ALUNO	11
FIGURA 3 - SISTEMA DE AVALIAÇÃO DA EDUCAÇÃO BÁSICA	16
FIGURA 4 - AUTENTICAÇÃO EDUCACENSO	17
FIGURA 5 - AUTENTICAÇÃO PAAE	18
FIGURA 6 - REGISTRO DE CLASSE ONLINE	19
FIGURA 7 - SISTEMA ESCOLA	20
FIGURA 8 - EXEMPLO DE QUESTIONAMENTO	22
FIGURA 9 - APLICATIVO ESCOLA QUE QUEREMOS	23
FIGURA 10 - HIERARQUIA DOS ATORES	27
FIGURA 11 - EXEMPLO VERBO MANTER	28
FIGURA 12 - CASO DE USO QUESTIONÁRIO	29
FIGURA 13 - CASO DE USO ENQUETE	30
FIGURA 14 - CASO DE USO GERENCIAMENTO USUÁRIO	31
FIGURA 15 - DIAGRAMA DE CLASSE	33
FIGURA 16 - URLS PADRÃO REST	34
FIGURA 17 - ARQUITETURA	35
FIGURA 18 - MODELO DE PROTOTIPAGEM	36
FIGURA 19 - COLLECTION MONGODB	38
FIGURA 20 - ROBOMONGO	39
FIGURA 21 - FINDBYIDANDUPDATE	39
FIGURA 22 - LOGIN	42
FIGURA 23 - TELA PRINCIPAL	43
FIGURA 24 - QUESTIONÁRIOS	43
FIGURA 25 - RESPOSTA QUESTIONÁRIO	44
FIGURA 26 - RESPOSTA ENQUETE	44

 
LISTA DE TABELAS

TABELA 1– ÍNDICE DE DESENVOLVIMENTO DA EDUCAÇÃO BÁSICA (IDEB). REDES MUNICIPAIS. CAJURU, CATANDUVA, PORTO FERREIRA E ITANHAÉM, 2005 – 2009.	11
TABELA 2– COMPARATIVO ENTRE OS MÉTODOS DE AVALIAÇÃO	24
TABELA 3 – HIERARQUIA ATORES	27
TABELA 4 - CASO DE USO QUESTIONÁRIO	29
TABELA 5 - CASO DE USO ENQUETE	31
TABELA 6 - CASO DE USO GERENCIAR USUÁRIO	32

 

LISTA DE SIGLAS, ACRÔNIMOS E ABREVIATURAS


ANA	Avaliação Nacional da Educação Básica
ANEB	Avaliação Nacional da Educação Básica
ANRESC	Avaliação Nacional do Rendimento Escolar
ENEM	Exame Nacional do Ensino Médio
GEQAF	General Education Quality Analysis/Diagnosis Framework (Análise/Diagnóstico da Qualidade do Ensino Geral)
IDEB	Índice de Desenvolvimento da Educação Básica
INEP	Instituto Nacional de Estudos e Pesquisas Educacionais Anísio Teixeira 
MVC	Model View Controller (Modelo visão controle)
OCDE		Organização para Cooperação e Desenvolvimento Econômico
PAAE	Avaliação da Aprendizagem Escolar
PISA	Programa Internacional de Avaliação de Estudantes
PROALFA	Programa de Avaliação da Alfabetização
PROEB	Programa de Avaliação da Rede Pública de Educação Básica
RCO	Registro de Classe Online
SAEB	Sistema de Avaliação da Educação Básica
SERE	Sistema Estadual de Registro Escolar
SIMAVE	Sistema Mineiro de Avaliação da Educação Pública
SINAES	Sistema Nacional de Avaliação da Educação Superior
UML	Linguagem Unificada de Modelagem
UNESCO	Organização das Nações Unidas para a Educação, a Ciência e a Cultura
UNICEF	Fundo das Nações Unidas para a Infância
 
SUMÁRIO

1	INTRODUÇÃO	8
1.1	ANÁLISE DO PROBLEMA	9
1.2	OBJETIVOS	12
1.2.1	Objetivo Geral	12
1.2.2	Objetivos Específicos	12
1.3	ORGANIZAÇÃO DO TEXTO	13
2	FUNDAMENTAÇÃO TEÓRICA	14
2.1	METODOLOGIAS DE DIAGNÓSTICO	14
2.1.1	Nível Internacional	14
2.1.2	Nível Nacional	15
2.1.3	Nível Estadual	18
2.1.4	Nível Municipal	20
2.2	ANÁLISE DOS MÉTODOS DE DIAGNÓSTICO	23
3	PROJETO	26
3.1	DIAGRAMA DE CASO DE USO	26
3.2	DIAGRAMA DE CLASSE	32
3.3	ARQUITETURA – REST API	33
3.4	PROCESSO DE SOFTWARE	36
3.5	FERRAMENTAS E TECNOLOGIAS	36
3.5.1	Linguagem Unificada de Modelagem	37
3.5.2	Bootstrap CSS3 e HTML5	37
3.5.3	Banco de Dados	37
3.5.4	AngularJS	40
3.5.5	Express	40
3.5.6	Node.js	40
3.5.7	MEAN STACK	41
4	APLICAÇÃO	42
5	CONSIDERAÇÕES FINAIS	45
6	PROPOSTAS FUTURAS	47

 
1	INTRODUÇÃO


A educação do século XXI tem por objetivo formar um cidadão capaz de transformar o conhecimento em ação, desenvolvendo habilidades e competências que permitam a sua inserção na sociedade (GEBRAN, 2009).
De acordo com Vianna (2006) a educação representa tudo que pode ser feito para ampliar o ser humano em relação ao desenvolvimento de competências e habilidades. 
Moram et al. (2000) referem-se à educação como um ensino superior as áreas específicas do conhecimento, pois, segundo eles, a educação auxilia na integração de ensino e vida, conhecimento e ética, reflexão e ação. 
Nessa vertente Delors et al. (1998) definem a educação a partir de quatro pilares fundamentais: o aprender a conhecer, para adquirir os instrumentos da compreensão, aprender a fazer, para agir sobre o meio, aprender a viver juntos, com o intuito de participação e cooperação e o aprender a ser, o qual enfatiza o desenvolvimento completo do indivíduo, sua capacidade de autonomia, discernimento e responsabilidade. Desta forma, os autores defendem a educação como uma experiência global, tanto cognitiva como prática.
Já o diagnóstico de ensino é o acompanhamento dos objetivos educacionais que visam à formação integral do indivíduo. O processo de diagnóstico de ensino tem por objetivo reconhecer as dificuldades existentes na educação do aluno, e para, isso deve analisar os diversos fatores físicos e sociais que interferem (NOVAES 1968).
É possível encontrar diversas formas utilizadas pelo Governo Brasileiro para avaliar a qualidade da educação como, por exemplo, a Prova Brasil, a Avaliação Nacional da Educação Básica - ANA e o Censo Escolar. No entanto, esses métodos encontram-se distante da realidade da instituição de ensino.
Aguiar (2014) enfatiza que para o diagnóstico de ensino ser efetivo é necessário conciliar a compreensão científica dos dados analisados com a participação de toda a comunidade escolar.
Martins (2014) destaca a relevância da proposta de diagnóstico da qualidade da educação, ao afirmar que: “Os municípios devem se preocupar em instaurar fóruns de educação e estimular a participação dos interessados de forma permanente”.
Assim sendo, esse trabalho visa o desenvolvimento de uma ferramenta que seja capaz de avaliar a qualidade da educação englobando a comunidade escolar no processo de diagnóstico e que possibilite ao gestor escolar a análise sistemática das informações.


1.1	ANÁLISE DO PROBLEMA


Dados analisados por Nogueira et al. (2015) sobre os tópicos emergentes na educação mostraram que a comunidade científica vem discutindo diversas formas de contribuir para melhorar a qualidade. Uma forte tendência abordada pelos autores revela o uso da tecnologia. 
Segundo Kenski (2007) as tecnologias utilizadas na educação quando bem aplicadas, alteram o comportamento de professores e alunos, levando-os ao melhor conhecimento e aprofundamento do conteúdo estudado.
No entanto, apesar de haver diversas ferramentas que auxiliam na educação e no seu desenvolvimento, como pode ser observado na Figura1, 57% dos alunos do terceiro ano do ensino fundamental não conseguem fazer operações básicas, como adição, nem como reconhecer figuras geométricas. Na escrita, 34,4% dos alunos nessa faixa etária estão com rendimento abaixo do considerado adequado e em relação a capacidade de leitura este valor chega a 22% (INEP, 2014).
Figura 1 - Alunos com aprendizado inadequado
 
Fonte: MEC/Inep (2014).

Segundo o quadro de Análise/Diagnóstico da Qualidade do Ensino Geral (GEQAF) de 2012, aproximadamente 525 milhões de crianças em idade escolar foram matriculadas em 2008, no entanto, grande parte dessas crianças não estão recebendo ensino adequado, ideal com o seu percurso escolar (UNESCO, 2012).
Ainda nesse documento é possível encontrar a conclusão que diz: 

“o que parece estar faltando são instrumentos para a análise e identificação sistêmicas das restrições mais importantes que impedem os Estados membros de atingirem e de manterem os níveis almejados e a equidade da qualidade da educação e dos resultados do processo de aprendizagem” (UNESCO, 2012).

Um estudo realizado por Alavarse, Bravo e Machado (2013) consta que os municípios do estado de São Paulo que realizam avaliações externas próprias possuem os maiores índices no Índice de Desenvolvimento da Educação Básica (Ideb).
 Na Tabela 1 é possível acompanhar os resultados alcançados por esses municípios nos anos de 2005, 2007 e 2009. 


	Tabela 1– Índice de Desenvolvimento da Educação Básica (IDEB). Redes municipais. Cajuru, Catanduva, Porto Ferreira e Itanhaém, 2005 – 2009.
Município	2005	2007	2009
Cajuru	5,2	7,0	8,2
Catanduva	3,9	5,1	6,1
Porto Ferreira	3,9	5,0	5,3
Itanhaém	4,3	4,9	5,4
Fonte: IDEB, 2016.

No entanto, as avaliações externas realizadas por tais municípios restringem- se a provas de desempenho nas disciplinas de Português e Matemática. 
Nevo (1997) afirma que as avaliações que visam aprimorar a qualidade da educação devem ser trabalhadas no nível da escola e que estas não se limitam à avaliação do aluno, mas sim da escola como um todo. 
No livro: “Dimensões de gestão escolar e suas competência” Luck (2009) esclarece que o objetivo fundamental da comunidade educacional é estabelecer uma comunidade de ensino efetivo, criando-se um ambiente contínuo de desenvolvimento. 
Na Figura 2, pode-se analisar as perspectivas que devem ser incorporadas na realidade do aluno (LUCK, 2009).

Figura 2 - Educação centrada no aluno
 
Fonte: Luck (2009, p. 16).
Os dados expostos revelam a necessidade da utilização de métodos de avaliações que caminhem de acordo com a realidade da escola, que incluam a comunidade escolar nesse processo, aproximando-se do cotidiano do aluno e assim, integrando os aspectos físicos, sociais e intelectuais.


1.2	OBJETIVOS


Nessa seção apresentar-se-á o objetivo geral e os objetivos específicos que norteiam esse trabalho.


1.2.1	Objetivo Geral


O objetivo principal desse trabalho é desenvolver uma ferramenta web que auxilie no diagnóstico da qualidade da educação em nível local da instituição de ensino, que introduza a participação de todos os interessados nesse processo e que possibilite o monitoramento permanente da respectiva qualidade. 


1.2.2	Objetivos Específicos


Para alcançar o objetivo proposto fez-se necessário os seguintes itens:
•	Revisar as tecnologias existentes relacionadas ao tema de diagnóstico da qualidade da educação; 
•	Estudar os segmentos que influenciam diretamente a qualidade da educação;
•	Realizar um levantamento junto a escolas, Núcleo Regional de Educação e educadores sobre a eficiência das metodologias e ferramentas utilizadas no processo de diagnóstico e acompanhamento da qualidade da educação; 
•	Elaborar um protótipo web para introduzir a comunidade escolar na coleta das informações da instituição e por meio dela permitir a análise sistemática dos dados;
•	Disponibilizar o código fonte do aplicativo para que outros possam implementar novas funcionalidades;


1.3	ORGANIZAÇÃO DO TEXTO


As próximas seções deste trabalho estão organizadas da seguinte maneira:
O capítulo 2 analisa algumas metodologias de diagnóstico referentes à qualidade da educação. O capítulo 3 apresenta as funcionalidades do projeto, ferramentas e tecnologias, como também relata a arquitetura do aplicativo e o processo de desenvolvimento. O capítulo 4  abordar os resultados da aplicação desenvolvida, o  capítulo 5 as considerações finais e o capítulo 6 as propostas futuras.
 
2	FUNDAMENTAÇÃO TEÓRICA


Este capítulo analisa algumas metodologias utilizadas como referencial e compara a aplicação das mesmas.


2.1	METODOLOGIAS DE DIAGNÓSTICO


Nessa seção encontram-se os documentos e métodos de diagnóstico em nível internacional, nacional, estadual e municipal, que influenciaram o desenvolvimento desse trabalho. 


2.1.1	Nível Internacional


Dentre as ações internacionais, analisa-se o: GEQAF e o Programa Internacional de Avaliação de Estudantes (Pisa).
O GEQAF foi elaborado pela Unesco e destina-se aos países membros da Organização, em especial aos agentes políticos que buscam aumentar a qualidade da educação. Os principais beneficiários são os alunos e toda a comunidade escolar (UNESCO, 2012).  
O objetivo do GEQAF é: 

“[...] possibilitar que os Estados membros procedam a uma análise e a um diagnóstico aprofundados e à identificação dos principais obstáculos que impedem os seus sistemas de educação geral de fornecerem educação e experiência eficiente de aprendizagem de alta qualidade, de maneira equitativa e sustentável, a todos os alunos.” (UNESCO, 2012, p.4).

O GEQAF é composto por 15 instrumentos analíticos: Relevância/Reatividade; Equidade e inclusão; Competências; Aprendizagem ao longo da vida; Aprendizagem; Ensino; Avaliação; Currículo; Alunos; Professores/Educadores; Contexto de aprendizagem; Governança; Financiamento; Eficiência do Sistema; Tecnologias da informação e comunicação na educação (UNESCO, 2012).
Cada instrumento analítico possui um conjunto de questionamentos a respeito do respectivo tema com o intuito de levar o leitor, agente político, a reflexão do sistema de educação a qual pertence. 
Ensino é um exemplo de instrumento analítico abordado no GEQAF que questiona se os processos de ensino utilizados contribuem ou não para a qualidade e aprendizagem eficaz (UNESCO, 2012).
Nesse instrumento analítico há levantamentos que estão intimamente relacionados ao problema norteador desse trabalho. São eles:

“Quem avalia o ensino? Quem são as partes interessadas envolvidas? Como são selecionadas as partes interessadas que avaliam o ensino? Os alunos, pais e professores estão entre essas partes interessadas? A participação das partes interessadas é eficaz? Onde está a evidência desta eficácia? Como usamos retorno de informação a partir da avaliação da eficácia do ensino? Onde está a evidência deste uso? Que impacto este uso tem tido? Onde se encontra a evidência deste impacto?” (UNESCO, 2012, p. 26).

Outro método internacional analisado é o Pisa, caracterizado por ser um programa mundial de avaliação do desempenho do aluno e das condições de aprendizagem. O programa é aplicado a cada três anos nos estudantes de 15 anos. Ele é coordenado pela Organização para Cooperação e Desenvolvimento Econômico (OCDE), e abrange três áreas do conhecimento: Leitura, Matemática e Ciências (Seed-PR, 2016).


2.1.2	Nível Nacional


Para abordar as práticas nacionais de avaliação, exemplifica-se o sistema brasileiro, constituído pelo: Sistema de Avaliação da Educação Básica (Saeb), Exame Nacional do Ensino Médio (Enem) e Sistema Nacional de Avaliação da Educação Superior (Sinaes) (SILVA, 2012, p.4).
O Saeb tem o objetivo de avaliar a qualidade do ensino a partir de testes padronizados e questionários socioeconômicos. 
Pode-se observar na Figura 3 que o Saeb é composto pela Avaliação Nacional da Educação Básica (Aneb), pela Avaliação Nacional da Alfabetização (ANA) e pela Avaliação Nacional do Rendimento Escolar (Anresc) (MEC, 2016).

Figura 3 - Sistema de Avaliação da Educação Básica
 
Fonte: INEP, 2016.

A primeira enfoca a gestão do sistema educacional e avalia a qualidade, a equidade e a eficiência da educação. É aplicada nos alunos do 5º ano e 9º ano do Ensino Fundamental e no 3º ano do Ensino Médio, de maneira amostral. Já a ANA é realizada com os alunos do 3º ano do Ensino Fundamental e tem como objetivo avaliar a alfabetização nas disciplinas de Português e Matemática (INEP, 2016). E a terceira, conhecida como Prova Brasil, visa avaliar a qualidade do ensino ministrado nas escolas públicas, por meio de testes de Português e Matemática com foco em leitura e resolução de problemas respectivamente, questionário socioeconômico e dados coletados com professores e diretores sobre demografia, perfil profissional e condições de trabalho (MEC, 2016).
Há ainda, na vertente de educação básica, o Censo Escolar. Caracterizado por ser uma pesquisa realizada na plataforma web: Educacenso (vide Figura 4), ferramenta coordenada pelo Inep que avalia quatro grandes dimensões: a escola, os alunos, os profissionais escolares e as turmas existentes (INEP, 2011).





Figura 4 - Autenticação Educacenso
 
Fonte: Educacenso.inep.gov.br  (2016).

O sistema de avaliação do Educacenso é representativo, assim sendo, o responsável (secretário ou diretor escolar) avalia as quatro dimensões citadas na visão de toda a comunidade escolar.  
Já o Enem é um exame realizado anualmente e tem o objetivo de avaliar o desempenho do estudante do Ensino Médio.  A avaliação é composta por quatro áreas de conhecimento, e a partir de seu desempenho, o aluno pode ingressar no ensino superior. (MEC, 2016).
O Sinaes é formado pelas avaliações das instituições, dos cursos e do desempenho dos estudantes. Esse sistema abrange eixos de: ensino, pesquisa, extensão, responsabilidade social, gestão da instituição e corpo docente (MEC, 2016).





2.1.3	Nível Estadual


Em nível estadual expõe-se o Sistema Mineiro de Avaliação da Educação Pública (Simave), o qual possui um sistema de avaliação externa e avaliação interna, o Registro de Classe Online – RCO e o Sistema Estadual de Registro Escolar – SERE, ambos do Estado do Paraná.  
A avaliação interna ocorre pelo Programa de Avaliação da Aprendizagem Escolar (PAAE) e a avaliação externa pelo Programa de Avaliação da Alfabetização (Proalfa) e o Programa de Avaliação da Rede Pública de Educação Básica (Proeb).
O PAAE (vide: Figura 5) constitui-se por ser um banco de itens no qual o professor pode formular as provas que serão aplicadas.  As questões podem ser de múltipla escolha ou discursivas, e são realizadas impressas ou em computadores. Após a aplicação, o sistema retorna relatórios e gráficos sobre o resultado da turma e de cada aluno (INSTITUITO AVALIAR, 2016). 

Figura 5 - Autenticação PAAE
 
Fonte: paae.institutoavaliar.org.br  (2016).

O Proalfa caracteriza-se por avaliar os alunos do 3º ano do Ensino Fundamental na disciplina de Língua Portuguesa. Os dados gerados por essa avaliação podem ser consultados pela comunidade escolar no site do Simave  (SEEMG, 2016). 
Já o Proeb avalia os discentes do 5º e 9º ano do Ensino Fundamental e 3º ano do Ensino Médio nas disciplinas de Português e Matemática. Os dados alcançados pelos alunos e instituições podem ser analisados no site supramencionado (SEEMG, 2016). 
Em relação aos métodos paranaenses, tem-se o RCO que visa substituir o Livro de Registro de Classe. De acordo com a instrução nº 07/10-SEED/DAE/CDE o livro visa registrar o trabalho efetivado em sala de aula, contendo, portanto, a frequência do aluno, o conteúdo ensinado e o aproveitamento escolar. 
Segundo informações coletadas no Núcleo Regional de Educação de Cornélio Procópio, o RCO (vide Figura 6) ainda esta em fase de teste, sendo utilizado em algumas escolas apenas. O sistema possui uma hierarquia de atores constituída pelo diretor, secretários, pedagogos e professores. 

Figura 6 - Registro de Classe Online
 
Fonte: Núcleo Regional de Cornélio Procópio (2016).

O diretor tem acesso a todas as funcionalidades do sistema, ele é responsável por cadastrar os demais usuários.
O sistema permite o cadastro do calendário escolar, estruturação do ano letivo, controle de notas, faltas, conteúdos ensinados, regras de avaliações, visualização de relatórios, como frequência, desempenho da turma, entre outros. 
As informações coletadas pelo RCO podem ser compartilhadas para o Sistema Estadual de Registro Escolar – SERE (vide Figura 7). 

Figura 7 - Sistema Escola
 
Fonte: Núcleo Regional de Cornélio Procópio (2016).

O SERE é utilizado pelas escolas para facilitar o registro dos dados e importação para o Sistema do Educacenso-Censo Escolar. O SERE possui informações referentes ao histórico escolar do indivíduo, matrículas realizadas, escolas frequentadas, evasão escolar, etc. É constituído pelo Sistema Escola Web, Sistema Seja e um banco de dados central (SEED, 2012). 


2.1.4	Nível Municipal


Em nível municipal analisa-se as avaliações externas aplicadas em algumas cidades, como também as orientações contidas no documento: “Indicadores da Qualidade da Educação” e o aplicativo “Escola que queremos”. 
Os municípios de Cajuru, Catanduva, Itanhaém e Porto Ferreira obtiveram destaque no resultado do Ideb nos anos de 2005, 2007 e 2009 (vide Tabela 1). Um estudo realizado por Alavarse, Bravo e Machado (2013) mostrou que esse desempenho favorável deu-se devido a esses municípios utilizarem de avaliações externas próprias de aprendizado nas disciplinas de Português e Matemática. 
Ainda conforme tais autores, os municípios de Cajuru e Catanduva possuem como objetivo avaliar o desenvolvimento dos alunos e dos professores. Os alunos são avaliados uma vez por ano com as provas específicas nas disciplinas citadas, já os professores são avaliados pela formação, assiduidade, jornada, formação contínua e participação em fóruns de educação.
O município de Itanhaém aplicou a avaliação externa no ano de 2005, e atualmente, a cada três meses a Secretaria de Educação avalia a aprendizagem pelos portfólios dos alunos, que são organizados pelas instituições de ensino (ALAVARSE; BRAVO; MACHADO, 2013). 
Já o “Indicadores da Qualidade na Educação” é um guia elaborado por diversas organizações como: Fundo das Nações Unidas para a Infância (Unicef), Inep, Ação Educativa, Fundação Abrinq, entre outros. Com o intuito de apoiar a comunidade escolar na avaliação e melhoria da educação (AÇÃO EDUCATIVA et al., 2004). 
Para tanto, os organizadores elaboraram um documento de apoio que permite a reflexão dos pontos fortes e fracos da instituição, desta forma, a escola pode agir conforme suas necessidades e prioridades (AÇÃO EDUCATIVA et al., 2004).
O documento aborda sete dimensões: ambiente educativo, prática pedagógica, avaliação, gestão escolar democrática, formação e condições de trabalho dos profissionais da escola, espaço físico escolar e acesso, permanência e sucesso na escola (AÇÃO EDUCATIVA et al., 2004).
A metodologia utilizada baseia-se em questionamentos feitos à comunidade escolar e esta avalia a qualidade da escola pelos indicadores de bom, médio ou ruim. Os participantes são divididos em grupos de 30 pessoas aproximadamente, e cada grupo discute um dos sete temas. Após a discussão, há o momento do plenário, no qual cada grupo expõe os valores analisados daquele tema específico (AÇÃO EDUCATIVA et al., 2004).
A Figura 8 ilustra um exemplo de questionamento realizado nesse método:


Figura 8 - Exemplo de questionamento
 
Fonte: INEP, 2016.

O “Escola que Queremos” (vide: Figura 9) é um aplicativo desenvolvido na 1ª edição do Hackathon:“Dados da Educação Básica”, ocorrida em abril de 2013.
Trata-se de um sistema que permite exibir os indicadores do Ideb, de uma respectiva instituição, possibilitando a disseminação das informações pertinentes em cinco áreas: ambiente físico escolar, insumos e condições de funcionalidade da escola, gestão escolar democrática e formação e condições de trabalho dos profissionais da escola (INEP, 2013).
Figura 9 - Aplicativo Escola que Queremos
 
Fonte: escolaquequeremos.org (2016).

Nesse aplicativo a avaliação da qualidade da educação fica a critério dos usuários receptores das informações. 


2.2	ANÁLISE DOS MÉTODOS DE DIAGNÓSTICO


A Tabela 2 compara os meios de avaliação analisados nesse trabalho. Nela encontram-se os dados referentes ao publico alvo, frequência de aplicação, amostra de aplicação e se a sua utilização dar-se-á mediante ferramenta tecnológica.






	Tabela 2– Comparativo entre os métodos de avaliação

Métodos	Destina-se a:	Frequência de aplicação	Nível de aplicação	Aplicada/realizada por meio da tecnologia
ANA	Avaliar os alunos nas disciplinas de Português e Matemática	Anual	Alunos do 3º Ano do Ensino Fundamental	Não
Aneb	Avaliar os alunos nas disciplinas de Português e Matemática	Bianual	Alunos do 5º e 9 º Ano do Ensino Fundamental e 3º do Ensino Médio	Não
Anresc	Avaliar os alunos nas disciplinas de Português e Matemático e levantar dados socioeconômicos	A cada 2 anos	Alunos do 5º e 9 º Ano do Ensino Fundamental	Não
Avaliação Catanduva	Avaliar os alunos nas disciplinas cursados no Ensino Médio e no Ensino Fundamental	Anual	Alunos do Ensino Fundamental e do Ensino Médio	Não
Censo Escolar	Levantar dados sobre a escola, os alunos, os profissionais e as turmas da instituição	Anual	Profissional representante	Sim
Enem	Avaliar o desempenho dos alunos do Ensino Médio	Anual	Alunos do 3º Ano do Ensino Médio	Não
GEQAF	Levar os agentes políticos à reflexão da qualidade da educação	___	Governantes	Não
Indicadores Qualidade da Educação	A participação de toda comunidade escolar no processo de avaliação	Flexível	Toda a Comunidade Escolar	Não
Paae	Avaliar o desempenho dos alunos nas disciplinas do Ensino Médio e do Ensino Fundamental	A escolha do professor	Alunos do Ensino Fundamental e do Ensino Médio	Sim
Proalfa	Avaliar os alunos na disciplina de Português e Matemática	Anual	Censitário aos alunos do 3º ano do Ensino Fundamental e amostral para os alunos do 2º e 4º ano	Não
Proeb	Avaliar os alunos na disciplina de Português e Matemática	Anual	Alunos do 5º e 9 º Ano do Ensino Fundamental e 3º do Ensino Médio	Não
RCO	Destina-se a gestão escolar, focado em notas, frequência escolar e conteúdos	Diário/Bimestral	Ensino Médio – Nível Estadual	Sim
SERE	Destina-se a gestão, documentação - matrícula	Diário/Bimestral	Ensino Médio – Nível Estadual	Sim

Como pode-se observar, a maioria dos métodos destinam-se apenas a avaliar o aprendizado do aluno em determinadas disciplinas ou controlar as informações referentes à nota, frequência escolar, matrículas, evasão e transferências. 
O Censo Escolar realiza questionamentos sobre as condições físicas da escola, rendimento da turma, formação dos profissionais da educação e condições sociais do aluno. No entanto, tais informações são respondidas de forma representativa, no qual um funcionário da instituição fornece os dados por toda a comunidade. 
Apenas através do guia “Indicadores da Qualidade da Educação” é que a comunidade pode ser introduzida. Porém, limita-se ao interesse de um membro escolar aplicar os questionários durante as reuniões escolares e ao deslocamento dos pais à instituição de ensino para debater o assunto.
Diante do exposto, este trabalho almeja propor uma ferramenta que possibilite a inserção da comunidade escolar, principalmente pais e alunos no processo de aperfeiçoamento do ensino, ressaltando os aspectos que ainda não foram abordados nas ferramentas supramencionadas. Pois, observa-se que todas juntas abordam pontos complementares e análogas, mas nenhuma inclui a comunidade escolar como um todo, principalmente considerando o aluno como agente transformador e os responsáveis como atores fundamentais no processo de construção e aperfeiçoamento da educação. 
Pelos fatos expostos ressalta-se a necessidade da elaboração de uma aplicação web que possibilite a troca de informações entre a escola e sua comunidade, que fornece subsídios para a avaliação sistemática da educação e que resulte em dados concisos para melhor aplicação das políticas públicas.
Diante do exposto, o próximo capítulo elucida o projeto desenvolvido neste trabalho a fim de incluir os fatos destacados anteriormente para assim contribuir no processo de avaliação da qualidade da educação.

 
3	PROJETO


A solução constitui-se na criação de uma ferramenta web que possibilite a participação da comunidade escolar no processo de diagnóstico, acompanhamento e colaboração da qualidade da educação.
Pretende-se por meio desta abordar as funcionalidades não contempladas nos métodos elencados, visando auxiliar a instituição de ensino a: mapear e acompanhar os pontos que necessitam de melhoria, retroalimentar o processo de diagnóstico, introduzir a comunidade escolar e diminuir o tempo entre a realização dos métodos de diagnóstico e os resultados obtidos. 
Nessa seção serão apresentadas as funcionalidades desenvolvidas representadas nos diagramas de caso de uso, o diagrama de classe e as ferramentas e as tecnologias utilizadas para o desenvolvimento da proposta.


3.1	DIAGRAMA DE CASO DE USO


As funcionalidades serão explanadas por meio dos diagramas de caso de uso da aplicação. 
Salienta-se ainda, que devido à complexidade do sistema, as ações que caracterizam cada seguimento, serão explicadas por meio de tabelas logo abaixo de cada diagrama de caso de uso específico.
Afim de melhor elucidar a composição do sistema, faz-se necessário compreender a hierarquia dos atores utilizados (vide Figura 10) e a exemplificação dos casos de uso referentes às ações de manter ().

Figura 10 - Hierarquia dos atores
 

Na Tabela 3 detalha-se cada ator.

	Tabela 3 – Hierarquia Atores

Ator	Descrição	Tipo de Usuário
Usuário Típico	Esse tipo de usuário tem a função de representar todos os atores em suas interações típicas. Ele é herdado pelo: responsável do aluno, aluno, professor, gestor escolar e gestor municipal.	Usuário Abstrato
Responsável do aluno	Esse ator exerce as funções básicas herdadas do “Usuário Típico” e representa a participação familiar no processo de diagnóstico da qualidade da educação. O responsável do aluno poderá participar e criar enquetes e dos questionários.	Usuário Primário

Aluno	O “Aluno” assim como o responsável pode criar e responder enquetes e questionários, como também cadastrar seus responsáveis.	Usuário Primário

Professor	O “Professor” tem a permissão de cadastrar alunos, responsáveis e criar e responder enquetes e questionários.	Usuário Primário

Gestor Escolar	O “Gestor Escolar” além das ações citadas tem a função de autorizar o cadastro de novos membros na aplicação.	Usuário Primário

Gestor Municipal	O “Gestor Municipal” poderá acompanhar o desenvolvimento da aplicação na instituição de ensino. Ele é responsável por cadastrar a instituição escolar	
Usuário Primário


A herança dos atores possibilita a organização das ações realizadas por cada usuário, por meio dela, as ações comuns e específicas de todos os indivíduos são claramente expostas.
Em relação ao verbo manter, presente nos casos de uso da aplicação, refere-se às ações de alterar, criar, consultar excluir determinado item (vide Figura 11). 

Figura 11 - Exemplo verbo manter
 

Para exemplificação, utilizou-se do “Manter Questionário” o qual é incluído pela ação de “Criar Questionário”, “Consultar Questionário”, “Alterar Questionário” e “Excluir Questionário”.
A Figura 12 ilustra o diagrama de caso de uso específico referente ao questionário.
Figura 12 - Caso de uso questionário
 

Na Tabela 4 detalha-se as funcionalidades do questionário.

	Tabela 4 - Caso de uso questionário

Caso de uso	Descrição	Usuário envolvido
Manter Questionário	Caracteriza-se pelas funcionalidades de criar, alterar, consultar e excluir questionário.	Usuário típico
Manter Questão	Caracteriza-se pelas funcionalidades de criar, alterar, consultar e excluir questões. Tais dados serão armazenados e poderão ser reutilizados quando solicitado.	Usuário típico
Imprimir Questionário	O usuário poderá imprimir o questionário caso necessário. Esse caso de uso possibilita a utilização da ferramenta considerando as restrições que a instituição	Usuário típico
Lançar Resultados Respondidos Manualmente	Caso o usuário tenha escolhido a opção de aplicar o questionário impresso, este deverá lançar os resultados obtidos no sistema, para assim, continuar usando a outras funcionalidades.	Usuário típico
Visualizar Resultado Questionário	O usuário que solicitou a criação do questionário poderá visualizar as informações coletadas pelos participantes	Usuário típico
Compartilhar Resultado Questionário	O usuário responsável pelo questionário poderá compartilhar as informações se assim desejar.	Usuário típico
Delimitar 
Público-alvo	O usuário responsável pelo questionário poderá especificar quais usuários responderão o questionário	Usuário típico
Responder Questionário	Os usuários poderão responder o questionário	
Usuário típico

Manter Questionário	Caracteriza-se pelas funcionalidades de criar, alterar, consultar e excluir questionário.	Usuário típico
Manter Questão	Caracteriza-se pelas funcionalidades de criar, alterar, consultar e excluir questões. Tais dados serão armazenados e poderão ser reutilizados quando solicitado.	Usuário típico

As funcionalidades referentes ao questionário possibilitam a inserção da comunidade escolar no processo de diagnóstico, como também auxiliam a instituição.
Por meio delas, os usuários poderão utilizar questionários gerais e específicos sobre algum fim almejado. Esses dados poderão ser compartilhados e analisados.
Ressalta-se ainda a presença da funcionalidade de “Imprimir Questionário”, a qual permite a aplicação dos questionários mesmo mediante a precariedade do público, em relação ao acesso à tecnologia. Pra isso, o usuário solicitante, deverá após a aplicação, lançar os dados recolhidos e posteriormente, fazer-se uso das outras funcionalidades da ferramenta.
A Figura 13 representa o diagrama de caso de uso específico referente à enquete.

Figura 13 - Caso de uso enquete
 

Na Tabela 5 detalha-se as funcionalidades da enquete.


	Tabela 5 - Caso de uso enquete

Caso de uso	Descrição	Usuário envolvido
Manter Enquete	Caracteriza-se pelas funcionalidades de criar, alterar, consultar e excluir enquete.	Usuário típico
Responder Enquete	Os usuários delimitados podem responder a enquete	Usuário típico
Aplicar Enquete	O usuário pode aplicar a enquete para todos os tipos de usuários elencados	Usuário típico
Compartilhar Resultado Enquete	O usuário responsável pela enquete pode compartilhar as informações com os outros usuários se assim desejar.	Usuário típico
Delimitar 
Público-alvo	O usuário responsável pela enquete pode especificar quais usuários a responderão.	Usuário típico
Visualizar parcial dos dados	Ao responder uma enquete, os usuários podem acompanhar a parcial da votação	Usuário típico
	
As funcionalidades do caso de uso esquete possibilitam a criação de uma enquete para levantar as opiniões referentes a um determinado objetivo. 
Já a Figura 14 ilustra o diagrama de caso de uso específico relacionado com o gerenciamento de usuário.

Figura 14 - Caso de uso gerenciamento usuário
 

Na Tabela 6 detalha-se as funcionalidades relacionadas a gerencia dos usuários.

	Tabela 6 - Caso de uso gerenciar usuário

Caso de uso	Descrição	Usuário envolvido
Manter Perfil	Caracteriza-se pelas funcionalidades de criar, alterar, consultar e excluir perfil.	Usuário típico
Solicitar Cadastro	Os usuários menos específicos poderão solicitar o cadastro na ferramenta ou poderão ser cadastrados pelos usuários mais específicos	Usuário típico
Autenticar no Sistema	Para o controle do acesso, o sistema possuirá autenticação mediante nome e senha.	Usuário típico
Desconectar do Sistema	O usuário poderá desconectar do sistema	Usuário típico
Excluir Usuário	Os usuários mais específicos poderão excluir os usuários que não estiverem utilizando o sistema adequadamente	Professor
Bloquear Usuário	Os usuários mais específicos poderão bloquear os usuários que não estiverem utilizando o sistema adequadamente	Professor

Esse caso de uso expõe as opções de gerenciamento de usuário, como o cadastro, autenticação no sistema e controle de acesso (casos de uso “Bloquear Usuário” e “Excluir Usuário”).


3.2	DIAGRAMA DE CLASSE


A Figura 15 ilustra o diagrama de classe que orientou o desenvolvimento desse projeto. 
Figura 15 - Diagrama de Classe
 

No diagrama encontra-se a representação do usuário padrão, contendo as especificações pertinentes aos alunos e professores. Além da classe escola, enquete e questionário. 


3.3	ARQUITETURA – REST API


O estilo arquitetural abordado neste trabalho é o REST (Representational State Transfer) criado por Roy Fielding. 
Para uma aplicação ser considerada REST deve atender aos princípios de: Interface Uniforme, Stateless, Cacheável, Cliente-Servidor, Sistema em Camadas e Código sob demanda (HENRIQUE, 2017).
A interface uniforme exige um padrão de comunicação entre o cliente e o servidor, tornando-os independentes um do outro. As URLs de comunicação devem ser em sua maioria definidas por substantivos. A Figura 16 exibe um exemplo de URLs da aplicação proposta. 
Figura 16 - URLs padrão REST
 

Além disso, as URLs necessariamente devem ser identificadas conforme o protocolo HTTP requisitado: GET, POST, PUT, DELETE e HEAD (HENRIQUE, 2017). 
O REST faz uso do padrão de arquitetura “Model-View-Controller” (MVC) juntamente com a arquitetura Cliente/Servidor.
Segundo Silva (2012) o MVC faz a separação da lógica e da interface do sistema. Essa divisão é feita pela camada Modelo, Visão e Controle. A camada Modelo faz a manipulação dos dados internos da aplicação, comunicação com os dados. Já a camada de Visão faz a interface do usuário e a camada de Controle realiza as funcionalidades de comportamento da aplicação, controla fluxos e manda as respostas ao usuário.
No livro: “Engenharia de Software”, Sommerville (2011) enfatiza que a arquitetura MVC é normalmente utilizada nas aplicações que possibilitam diversas maneiras de visualizar e interagir com os dados, como também naquelas que programarão outros requisitos.
Incorporado com a arquitetura MVC, aplicar-se-á a arquitetura Cliente/Servidor. Essa arquitetura possibilita a distribuição das aplicações computacionais através de muitas plataformas.  Tais aplicações são divididas em um provedor de acesso, uma central de dados e numerosos clientes com uma interface gráfica para a interação (FERNEDA, 2016).
Uma visão da arquitetura pode ser observada na Figura 17.

Figura 17 - Arquitetura
 

Salienta-se ainda que a comunicação das informações ocorre via JSON (JavaScript Object Notation) caracterizado por ser uma formatação leve de troca de dados (JSON, 2017).






3.4	PROCESSO DE SOFTWARE


O processo de desenvolvimento utilizado nesse trabalho foi o modelo de prototipagem (vide Figura 18).

Figura 18 - Modelo de prototipagem
 
Fonte: Pressman (2006)

De acordo com Pressman (2006) o modelo de prototipagem inicia-se no levantamento de objetivos e necessidades do software. Posteriormente há a criação de um projeto rápido que representa os aspectos visíveis para o cliente. O projeto rápido resulta em um protótipo o qual é implementado e avaliado pelo cliente. Ao final, há a revisão da prototipação, com o intuito de aprimorar os requisitos do software.


3.5	FERRAMENTAS E TECNOLOGIAS


Essa seção apresentará as ferramentas e tecnologias utilizadas para o desenvolvimento da proposta.

3.5.1	Linguagem Unificada de Modelagem


Utilizou-se da Linguagem Unificada de Modelagem (UML) para especificar, visualizar, construir e documentar os artefatos do sistema de software. A UML foi criada pelo Grupo “Management Object”. Sua principal função é definir o escopo de um software de forma que todos os envolvidos sejam capazes de compreender as informações contidas.
A fim de modelar os diagramas, fez-se uso do “Astah Community”, ferramenta gratuita para determinado fim (ASTAH, 2016).  


3.5.2	Bootstrap CSS3 e HTML5


A publicação do conteúdo foi mediante a “Linguagem de Marcação de Hypertexto”, versão 5, (HTML5). O qual fornece ferramentas de apoio para o “CSS” e “Javascript”, como também possui estruturas de linguagem de marcação que facilitam a manipulação dos objetos (EIS; FERREIRA, 2012).
A estilização da aplicação foi o “Cascading Style Sheets 3” (CSS3) e o “Bootstrap” para o desenvolvimento responsivo do projeto.


3.5.3	Banco de Dados


O banco de dados utilizado para essa proposta foi o MongoDB. O MongoDB é um banco de dados não relacional, orientado a documentos, composto por uma estrutura de dados similar ao objeto JSON (JavaScript Object Notation), o qual possui alta disponibilidade, escalabilidade horizontal e excelente performance  (MongoDB, 2017).
A Figura 19 exemplifica a estruturação de uma collection. Entende-se por collection ou coleção o conjunto de itens que definem determinado objeto. As coleções (collections) são análogas as tabelas dos bancos de dados relacionais. 

Figura 19 - Collection MongoDB
 

Para a visualização dos registros de dados, fez-se o uso da ferramenta Robomongo versão 0.9.0 (vide Figura 20). 
Figura 20 - Robomongo
 

Tal ferramenta possibilita a visualização das informações nas coleções, execução de comandos SQL simples de insert, delete, update e select, até os mais complexos, como os de agregação. 
Além disso, o MongoDB oferece funções específicas que contribuem na programação dos objetos, como: “updateOne()”, “updateMany()”, “findAndModify()”, “findOneAndReplace()”, “bulkWrite()”, entre outros. Na Figura 21 ilustra-se o uso de alguns métodos próprios dessa tecnologia utilizados na implementação da presente proposta. 

Figura 21 - FindByIdAndUpdate
 

3.5.4	AngularJS


O AngularJS é um framework MVC no lado do cliente focado em Single Page Web Applications  (SPA), desenvolvido pela Google e lançado 2009. Ele difere da maneira tradicional, na qual a lógica é processada no servidor, pois permite a execução da lógica diretamente no lado cliente por meio de interfaces dinâmicas sem manipulação do DOM (ALMEIDA, 2016).
Segundo Wiesner e Battisti (2015) o “AngularJS” possibilita a criação de diretivas próprias, resultando em aproveitamento do código e produtividade.
A programação da aplicação front-end cliente, deu-se no Visual Studio Code. 


3.5.5	Express


O Express foi criado em 2009 por TJ Holowaychuk, sendo um framework web light-weight que colabora na organização da aplicação web na arquitetura MVC (Model-View-Controller) no lado do servidor (ALMEIDA, 2016).
Ele estende as capacidades do servidor, inserindo middlewares, views e rotas. Middlewares são funções que trabalham com requisições.


3.5.6	Node.js


O Node.js é um servidor em JavaScript orientado a eventos que faz uso do I/O assíncrono para garantir o não bloqueio da sua thread. Segundo Schroeder e Santos, (2013) os processos em um servidor Node.js são executados utilizando um único processo, fazendo com que o consumo de memória alocado por requisição seja menor.
Albernethy (2013) afirma que o Node.js é bem projetado para situações que grandes volumes de tráfego é esperado e a lógica e o processamento necessário do lado do servidor não são necessariamente volumosos para o cliente. 
Ainda conforme esse autor, apesar do Node.js utilizar uma linguagem de script (leve), o desempenho de um servidor em JavaScript é maximizado por meio da V8 JavaScript Engine, a qual compila e executa o código lidando com alocação de memória e remoção de objetos em desuso.  
Assim como a programação da aplicação front-end o back-end, deu-se no Visual Studio Code. 


3.5.7	MEAN STACK


O conjunto das tecnologias supramencionadas deram origem ao termo MEAN (MongoDB, Express, AngularJS e Node.js) relatado inicialmente por Valeri Karpov em 2013 para detonar o uso de uma stack completa para desenvolvimento de aplicações (ALMEIDA, 2016).

 
4	APLICAÇÃO


O trabalho resultante das tecnologias mencionados no capítulo anterior poderá ser analisado nessa seção. 
Sendo assim, a primeira imagem esboça a tela de login (vide Figura 22). Por meio dela os usuários poderão acessar o sistema. 

Figura 22 - Login
 

Além do campo de preenchimento de acesso, nessa tela encontra-se uma pequena introdução do que a aplicação poderá proporcionar aos usuários e à instituição.
Ao acessar o sistema via e-mail e senha o usuário é direcionado para a tela principal (vide Figura 24) na qual encontra-se o caminho para criação de uma enquete e de um questionário, como também elenca os questionários e enquetes disponíveis para participação. 
Ressalta-se que ao acessar o sistema, a aplicação gera um token encriptado por uma frase de segurança. Todas as requisições solicitadas ao servidor são analisadas e apenas autorizadas posterior confirmação de existência e integridade. 

Figura 23 - Tela principal
  

Como abordado no capítulo anterior, o sistema permite a criação, edição, busca e exclusão de escolas, professores, alunos, responsáveis, enquetes e questionários.  Assim sendo, a Figura 24 exibe como exemplo a tela de gerenciamento de questionários.
 
Figura 24 - Questionários
 

Ao selecionar a opção questionário no menu superior a aplicação lista todos os questionários criados pelo usuário logado, obedecendo a escola a qual pertence. Ainda nessa tela encontra-se o botão de edição, exclusão, pesquisa, criação e visualização das respostas coletadas.
Já a Figura 25 aclara um exemplo de questionário na ação de responder. Ao clicar em salvar, o usuário criador do questionário já terá acesso as informações relatadas. 

Figura 25 - Resposta questionário
 

Ressalta-se que todos os campos de inserção na aplicação contêm a programação de validação, a fim de evitar o mau preenchimento dos campos. 
Por fim a Figura 26 trás a tela na qual o usuário participa da enquete, nela há o questionamento, as opções e os resultados parciais da mesma.

Figura 26 - Resposta enquete
  
5	CONSIDERAÇÕES FINAIS


O desenvolvimento da ferramenta MEAN Stack para diagnóstico e gestão de ensino proporcionou um aprendizado amplo em relação à profissão de um analista de sistemas, ultrapassando questões como desenvolvimento web e engenharia de software. 
Este trabalho foi fundamentado a partir do estado da arte em relação às tecnologias disponíveis que favorecem o gerenciamento, acompanhamento e controle da qualidade da educação. 
Muito mais que pesquisas e referências, esta ação foi amparada por profissionais experientes, pertencentes ao Núcleo Regional de Educação de Cornélio Procópio, a professores do Colégio Estadual Cristo Rei e a professores da Escola Municipal Vitorino Gomes Henriques. 
Durante o processo de fundamentação e levantamento dos requisitos houve diversas entrevistas com profissionais das instituições mencionadas, a fim de elucidar a situação do acompanhamento e gerenciamento da qualidade da educação, em relação às operações macros e micros (relatadas no capítulo 2).
Apesar dos resultados coletados mostrarem um grande número de métodos e ferramentas que buscam acompanhar, comparar e proporcionar a qualidade da educação, pouco observou-se a participação da comunidade escolar.
A partir de então, iniciou-se os estudos norteados ao problema: “Como inserir a comunidade escolar no processo de diagnóstico, gerenciamento e acompanhamento do processo de ensino, principalmente em relação à qualidade da educação?”. 
Além disso, como proporcionar o desempenho de uma ferramenta que possivelmente terá uma grande quantidade de acesso e fluxo de requisições?
Nesse momento, o foco passou à problemática arquitetural da aplicação. Modelar uma arquitetura, “pilar” do produto final esperado, mostrou-se desafiador, principalmente levando em consideração os conhecimentos apenas teóricos do mesmo. 
Posterior construção arquitetural, iniciou-se o desenvolvimento dos CRUDs (Create, Read, Update e Delete). Como já mencionada a programação deu-se na linguagem JavaScript no back-end e no front-end, ademais, banco de dados não relacional e o framework da Google, o Angular 2. 
Em relação à segurança, outro ponto de destaque nesse desenvolvimento, permite o acesso aos dados do servidor, apenas mediante autenticação. Todas as requisições precisam de um “consentimento de autorização” e as informações trafegadas são encriptadas e decriptadas por uma frase secreta. 
Por fim, conclui-se que o desenvolvimento proposto atende a demanda ao fim que se destina, possibilitando o acesso de várias pessoas simultaneamente, em diversos dispositivos diferentes. Comumente, a inserção de uma ferramenta web em uma instituição de ensino, introduz a participação da comunidade escolar transcendendo as funcionalidades de enquetes e questionários, por meio da reflexão, aproximação e formação de agentes ativos e participativos do processo de educação. 


 
6	PROPOSTAS FUTURAS


 A aplicação proposta nesse trabalho aborda uma vertente entre tantas que estão diretamente relacionadas à qualidade da educação, acompanhamento e gerenciamento escolar. 
Por isso, como trabalhos futuros, sugere-se a ampliação e aprofundamento dos seguimentos diretamente relacionados ao tema. Dentre alguns, destaca-se: Inclusão de avaliações, acompanhamento de desempenho escolar, gerenciamento de formação de professores, fácil visualização dos dados em instância macro (referentes ao IDEB, ANA, Censo Escolar, etc.), entre outros.
Além disso, cada novo seguimento desenvolvido, poderia ser elaborado por uma arquitetura baseada em micro serviços, no qual cada novo “módulo” funcionaria independentemente.
 
REFERÊNCIAS


AÇÃO EDUCATIVA.Indicadores da qualidade na educação. Disponível em:
<http://portal.mec.gov.br/seb/arquivos/pdf/Consescol/ce_indqua.pdf>Acesso em: 22 abr. 2016.

ALAVARSE, Ocimar. BRAVO, Maria. MACHADO, Cristiane. Avaliações externas e qualidade na educação básica: Articulações e Tendências. Disponível em: 
<http://www.fcc.org.br/pesquisa/publicacoes/eae/arquivos/1783/1783.pdf>Acesso em: 26 abr. 2016.

ALMEIDA, Fernando José de. Criando Ambientes Inovadores. São Paulo: Estação Palavra, 1999. Disponível em:
<http://www.dominiopublico.gov.br/download/texto/me003151.pdf>Acesso em: 06 nov. 2015.

CHAVES, Eduardo O. C. Tecnologia na educação, ensino a distância e aprendizagem mediada pela tecnologia: conceituação básica. Disponível em: 
<http://periodicos.puccampinas.edu.br/seer/index.php/reveducacao/article/download/421/401>Acesso em:06 nov. 2015.

DELORS, Jacques e outros, 1998. Educação: um tesouro a descobrir; Relatório para a UNESCO da Comissão Internacional sobre Educação para o século XXI. São Paulo, Cortez REFERENCIA DA UNESCO.

DEMO, Pedro. Educação e Qualidade. 11. Ed. Campinas: Papirus,1994.

EIS, Diego. HTML5 e CSS3 com farinha e pimenta. 1. ed. São Paulo: Tableless, 2012.

FERNEDA, Edberto. Fundamentos da arquitetura cliente servidor. Disponível em: <https://www.marilia.unesp.br/Home/Instituicao/Docentes/EdbertoFerneda/fundamentos_da_-arquitetura_cliente-servidor.pdf> Acesso em: 08 mai. 2016.

GEBRAN, Mauricio Pessoa. Tecnologias Educacionais. Curitiba: IESDE Brasil, 2009.

HENRIQUE, Fernando. Construindo uma API RESTful em Java. Disponível em:
 <http://www.devmedia.com.br/construindo-uma-api-restful-em-java/29904> Acesso em: 21 mai. 2017

INSTITUTO AVALIAR. Avaliação da Aprendizagem Escolar. Disponível em:
<http://paae.institutoavaliar.org.br/sistema_ava_v3/default.aspx?id_objeto=143294&id_pai=23967&area=atributo>Acesso em: 26 abr. 2016.

INSTITUTO NACIONAL DE ESTUDOS E PESQUISAS EDUCACIONAIS ANÍSIO TEIXEIRA. Avaliação Nacional da Alfabetização. Disponível em:
<http://portal.mec.gov.br/index.php?option=com_docman&view=download&alias=21091-apresentacao-ana-15-pdf&category_slug=setembro-2015-pdf&Itemid=30192&_ga=1.264982927.1899407909.1441556994 > Acesso em: 25 out. 2015.

______.Censo Escolar. Disponível em:
< http://portal.inep.gov.br/descricao-do-censo-escolar>Acesso em: 04 mar. 2016.

______. Projeto “Escola que Queremos” é o vencedor da 1ª edição do Hackathon. Disponível em:
<http://portal.inep.gov.br/visualizar/-/asset_publisher/6AhJ/content/projeto-%E2%80%9Cescola-que-queremos%E2%80%9D-e-o-vencedor-da-1%C2%AA-edicao-do-hackathon> Acesso em: 04 mar. 2016.

JSON. Introdução ao JSON. Disponível em:<http://www.json.org/json-pt.html> Acesso em: 21 mai. 2017.

KENSKI, Vani M. Educação e tecnologias: O novo ritmo da informação. 3. ed. Campinas: Papirus, 2007.

LUCK, Heloísa. Dimensões de gestão escolar e suas competências. Curitiba: Editora Positivo, 2009.

LOPES, Maria Inácia. Como selecionar conteúdos de ensino. 2012. Disponível em:
<http://catolicadeanapolis.edu.br/revmagistro/wp-content/uploads/2013/05/COMO-SELECIONAR-CONTE%C3%9ADOS-DE-ENSINO.pdf> Acesso em: 06 nov.  2015.

MINISTÉRIO DA EDUCAÇÃO. Enem – Apresentação. 2016. Disponível em <http://portal.mec.gov.br/enem-sp-2094708791> Acesso em: 19 abr. 2016.

______. Prova Brasil – Apresentação. 2016. Disponível em < http://portal.mec.gov.br/prova-brasil> Acesso em: 21 abr. 2016.

MORAN, José M.; MASETTO, Marcos T.; BEHRENS, Marilda A. Novas tecnologias e mediação pedagógica. Campinas: Papirus, 2000.

NOVAES, Maria Helena. O valor do diagnostico na educação. 1968.Disponível em: <http://www.ufrgs.br/museupsi/valordigeduc.htm > Acesso em: 06 nov.  2015.

NEVO, David. Avaliação por diálogos: Uma contribuição possível para o aprimoramento escolar. 1997. Disponível em: <http://www.dominiopublico.gov.br/download/texto/me000061.pdf> Acesso em: 23  abril 2016.

NODEBR. O que é Node.js? 2017. Disponível em: <http://nodebr.com/o-que-e-node-js/> Acesso em: 08 maio de 2017.

OLIVEIRA, Ana Paula de M. A Prova Brasil como política de regulação da rede pública do Distrito Federal. 2011. 276 f. Dissertação (Mestrado) – Universidade de Brasília, Brasília, 2011.

ORGANIZAÇÃO DAS NAÇÕES UNIDAS PARA A EDUCAÇÃO, A CIÊNCIA E A CULTURA. Quadro de análise/diagnóstico da qualidade do ensino geral. Disponível em:
<http://www.ibe.unesco.org/fileadmin/user_upload/GEQAF/GEQAF-2012_por.pdf>Acesso em: 27 mar. 2016.

PRESSMAN, Roger S. Engenharia de Software: Uma abordagem profissional. Tradução Ariovaldo Griesi; Mario Moro Fecchio. 7. ed. São Paulo: AMGH Ltda, 2009. 779 p. Tradução de: Software Engineering.
SECRETARIA DE EDUCAÇÃO DE MINAS GERAIS. Sistema Mineiro de avaliação da educação pública. Disponível em:
<http://www.simave.caedufjf.net/> Acesso em: 26 abr. 2016.

SALGADO, Gabriel M. Diagnóstico da educação deve conciliar conhecimento técnico com participação de toda a sociedade. De olho nos planos.Disponível em:
<http://www.deolhonosplanos.org.br/diagnostico-da-educacao-deve-conciliar-conhecimento-tecnico-com-participacao-de-toda-a-sociedade/> Acesso em: 26 de abr. 2016.

SECRETARIA DA EDUCAÇÃO DO PARANÁ. Programa Internacional para Avaliação de Alunos. Disponível em:
<http://www.educacao.pr.gov.br/modules/conteudo/conteudo.php?conteudo=116> Acesso em: 22  abr. 2016.

SECRETARIA DA ESTADO DA EDUCAÇÃO. Sistema Escola. Disponível em:
<http://www.gestaoescolar.diaadia.pr.gov.br/arquivos/File/pdf/manual_sere_modulo_matricula.pdf> Acesso em: 07 maio 2017.


SECRETARIA DE EDUCAÇÃO FUNDAMENTAL. Parâmetros curriculares nacionais: introdução aos parâmetros curriculares nacionais. Disponível em:
<http://portal.mec.gov.br/seb/arquivos/pdf/livro01.pdf > Acesso em: 06 nov. 2015.

SILVA, Isabelle F. O sistema nacional de avaliação: características, dispositivos legais e resultados. Disponível em: 
<http://www.fcc.org.br/pesquisa/publicacoes/eae/arquivos/1602/1602.pdf>Acesso em: 19 mar. 2016.

SILVA, Valéria M. Revisão sistemática da evolução MVC na base ACM. Disponível em: 
<https://www.researchgate.net/publication/264003410_Revisao_sistematica_da_evolucao_MVC_na_base_ACM>Acesso em: 26 abr. 2016.

SOMMERVILLE. Ian, Engenharia de Software. Tradução Ivan Bosnic; Kalinka Gonçalves. 9 ed. São Paulo: Pearson, 2011. 529 p. Tradução: Software Engineering.

VALENTE, José A. O computador na sociedade do conhecimento. Campinas: UNICAMP/NIED, 1999.

VIANNA, Carlos E. S. Evolução histórica do conceito de educação e os objetivos constitucionais da educação brasileira. Faculdades Integradas Teresa D’Ávila, Lorena, v.3, n.4, 2º semestre de 2006. Disponível em: <http://publicacoes.fatea.br/index.php/janus/article/viewFile/41/44>. Acesso em: 25 out. 2015.

WIESNER, Ricardo; BATTISTI, Gerson. Desvendando o framework AngularJS. XXIII Seminário de Iniciação Científica, Ijuí, 2015. Disponível em: <https://www.revistas.unijui.edu.br/index.php/salaoconhecimento/article/viewFile/4965/4151> Acesso em: 26 abril 2016.
Novas arrumar

