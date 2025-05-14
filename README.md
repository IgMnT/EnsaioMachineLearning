1. Nome do Projeto: Ensaio de Machine Learning


2. Problema de Negócio

2.1 Descrição
A empresa Data Money acredita que a expertise no treinamento e ajuste fino dos algoritmos, feito
pelos Cientistas de Dados da empresa, é a principal motivo dos ótimos resultados que as
consultorias vem entregando aos seus clientes.


2.2 Objetivo
O objetivo desse projeto será realizar ensaios com algoritmos de Classificação, Regressão e
Clusterização, para estudar a mudança do comportamento da performance, a medida que os
valores dos principais parâmetros de controle de overfitting e underfitting mudam.


3. Planejamento da solução

3.1 Produto final
O produto final será 7 tabelas mostrando a performance dos algoritmos, avaliados usando múltiplas
métricas, para 3 conjuntos de dados diferentes: Treinamento, validação e teste.


3.2 Algoritmos ensaiados
Classificação:
Conteúdo licenciado para Igor Monteiro Magro - 171.686.267-10
Preparando a descrição do projeto 2
Algoritmos: KNN, Decision Tree, Random Forest e Logistic Regression
Métricas de performance: Accuracy, Precision, Recall e F1-Score
Regressão:
Algoritmos: Linear Regression, Decision Tree Regressor, Random Forest Regressor, Polinomial
Regression, Linear Regression Lasso, Linear Regression Ridge, Linear Regression Elastic Net,
Polinomial Regression Lasso, Polinomial Regression Ridge e Polinomial Regression Elastic Net
Métricas de performance: R2, MSE, RMSE, MAE e MAPE
Agrupamento:
Algoritmos: K-Means e Affinity Propagation
Métricas de performance: Silhouette Score


3.3 Ferramentas utilizadas:
1. Python 3.8 e Scikit-learn


4. Desenvolvimento

4.1 Estratégia da solução
Para o objetivo de ensaiar os algoritmos de Machine Learning, eu vou escrever os códigos
utilizando a linguagem Python, para treinar cada um dos algoritmos e vou variar seus principais
parâmetros de ajuste de overfitting e observar a métrica final.
O conjunto de valores que fizerem os algoritmos alcançarem a melhor performance, serão aqueles
escolhidos para o treinamento final do algoritmo.


4.2 O passo a passo

Passo 1: Divisão dos dados em treino, teste e validação.
Passo 2: Treinamento dos algoritmos com os dados de treinamento, utilizando os parâmetros
“default”.
Passo 3: Medir a performance dos algoritmos treinados com o parâmetro default, utilizando o
conjunto de dados de treinamento.
Passo 4: Medir a performance dos algoritmos treinados com o parâmetro “default”, utilizando o
conjunto de dados de validação.
Passo 5: Alternar os valores dos principais parâmetros que controlam o overfitting do algoritmo até
encontrar o conjunto de parâmetros apresente a melhor performance dos algoritmos.
Passo 6: Unir os dados de treinamento e validação
Passo 7: Retreinar o algoritmo com a união dos dados de treinamento e validação, utilizando os
melhores valores para os parâmetros de controle do algoritmo.
Passo 8: Medir a performance dos algoritmos treinados com os melhores parâmetro, utilizando o
conjunto de dados de teste.
Passo 9: Avaliar os ensaios e anotar os 3 principais Insights que se destacaram.


5. Os top 3 Insights

5.1 Insight Top 1
Os algoritmos baseado em árvores possuem uma performance melhores em todas as métricas,
quando aplicados sobre os dados de teste, no ensaio de Classificação.


5.2 Insight Top 2
Conteúdo licenciado para Igor Monteiro Magro - 171.686.267-10
Preparando a descrição do projeto 3
A performance dos algoritmos de classificação sobre os dados de validação ficou bem próxima da
performance sobre os dados de teste.


5.3 Insight Top 3
Todos os algoritmo de regressão não apresentaram boas métricas de performance, o que mostra
uma necessidade de uma seleção de atributos e uma preparação melhor das variáveis
independentes do conjunto de dados.


6. Resultados

Ensaio de Classificação:

6.1 Sobre os dados de treinamento:

KNN:

Accuracy : 0.7815
Precision : 0.7780
Recall : 0.7758
F1 : 0.7767

Decision Tree Classifier:

Accuracy : 1.0000
Precision : 1.0000
Recall : 1.0000
F1 : 1.0000

Random Forest Classifier:

Accuracy : 1.0000
Precision : 1.0000
Recall : 1.0000
F1 : 1.0000

Logistic Regression:

Accuracy : 0.8761
Precision : 0.8755
Recall : 0.8716
F1 : 0.8733

6.2 Sobre os dados de validação:

KNN:

Accuracy : 0.6756
Precision : 0.66927
Recall : 0.6671
F1 : 0.6679

Decision Tree Classifier:

Accuracy : 0.9439
Precision : 0.9438
Recall : 0.9445
F1 : 0.9442

Random Forest Classifier:

Accuracy : 0.9646
Precision : 0.9660
Recall : 0.9621
F1 : 0.9638

Logistic Regression:

Accuracy : 0.8747
Precision : 0.8740
Recall : 0.8702
F1 : 0.8719

6.3 Sobre os dados de teste:

KNN:

Precision : 0.6650
Accuracy : 0.6705
Recall : 0.6630
F1 : 0.6637

Decision Tree Classifier:

Accuracy : 0.9445
Precision : 0.9434
Recall : 0.9440
F1 : 0.9437

Random Forest Classifier:

Accuracy : 0.9639
Precision : 0.9650
Recall : 0.9617
F1 : 0.9632

Logistic Regression:

Accuracy : 0.8721
Precision : 0.8715
Recall : 0.8680
F1 : 0.8695

Ensaio de Regressão:

6.4 Sobre os dados de treinamento:

Linear Regression:

R2:  0.04605830473391903
MSE:  455.99611182562677
RMSE:  21.35406546364478
MAE:  16.998249066011095
MAPE:  8.653185943804512

Decision Tree Regressor:

R2:  0.9917566957405923
MSE:  3.940402971731975
RMSE:  1.9850448286454327
MAE:  0.21409852496986279
MAPE:  0.08262787375974134

Random Forest Regresson:

R2:  0.9030528878175742
MSE:  46.34193727697196
RMSE:  6.807491261615541
MAE:  4.8663253197517795
MAPE:  2.6511806209204125

Polinomial Regression:

R2:  0.09419491057528084
MSE:  432.9862096386579
RMSE:  20.80832068280999
MAE:  16.458031755824443
MAPE:  8.350539820928132

Linear Regression with Lasso:

R2:  0.007400905609184383
MSE:  474.47483414340275
RMSE:  21.782443254681112
MAE:  17.305483795260546
MAPE:  8.736697313910927

Linear Regression with Ridge:

R2:  0.04605770063554282
MSE:  455.99640059223805
RMSE:  21.354072225040312
MAE:  16.998307602320097
MAPE:  8.653414734181558

Linear Regression with ElasticNet;

R2:  0.007831741118630053
MSE:  474.2688893586024
RMSE:  21.777715430196125
MAE:  17.299506969671594
MAPE:  8.732300419042266

Polinomial Regression with Lasso:

R2:  0.009149935251170582
MSE:  473.6387760067563
RMSE:  21.763243692215468
MAE:  17.28544966126129
MAPE:  8.699700898061744

Polinomial Regression with Ridge:

R2:  0.09317140761274367
MSE:  433.47545690992723
RMSE:  20.82007341269303
MAE:  16.471971837686485
MAPE:  8.372689165744587

Polinomial Regression with ElasticNet:

R2:  0.012832763427018778
MSE:  471.8783378824533
RMSE:  21.722760825513255
MAE:  17.244236014680347
MAPE:  8.678785850035073







