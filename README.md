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


6.5 Sobre os dados de validação

Linear Regression:

R2:  0.03992483038154071
MSE:  458.4470418439312
RMSE:  21.41137645841414
MAE:  17.039753759960327
MAPE:  8.682541883735295

Decision Tree Regressor:

Validation metrics
R2:  -0.2963098163821809
MSE:  619.002990015704
RMSE:  24.879770698615854
MAE:  17.182847136642756
MAPE:  6.948513378533314

Random Forest Regresson:

R2:  0.33047687588454955
MSE:  319.70506623852793
RMSE:  17.880298270401642
MAE:  13.055975049586678
MAPE:  7.059521218403213

Polinomial Regression:

R2:  0.06647668389711647
MSE:  445.76822347127546
RMSE:  21.11322390046758
MAE:  16.74993909048403
MAPE:  8.547931034605392

Linear Regression with Lasso:

R2:  0.007883642924698453
MSE:  473.7470809154487
RMSE:  21.76573180289256
MAE:  17.26492176467576
MAPE:  8.695808367641687

Linear Regression with Ridge:

R2:  0.03992810824954407
MSE:  458.4454766238971
RMSE:  21.41133990725235
MAE:  17.0394715713122
MAPE:  8.682412484475343

Linear Regression with ElasticNet;

R2:  0.00811707101546788
MSE:  473.6356162915494
RMSE:  21.76317109916543
MAE:  17.26290253848956
MAPE:  8.694035085887595

Polinomial Regression with Lasso:

R2:  0.009631007774810185
MSE:  472.91269390919564
RMSE:  21.746555909136408
MAE:  17.238378728440562
MAPE:  8.681846557814456

Polinomial Regression with Ridge:

R2:  0.06769929966791688
MSE:  445.1844102437571
RMSE:  21.099393598958173
MAE:  16.73874061169059
MAPE:  8.568992470935266

Polinomial Regression with ElasticNet:

R2:  0.012781775822342856
MSE:  471.4081655799173
RMSE:  21.711936016392396
MAE:  17.19996619878308
MAPE:  8.675108462242978

6.6 Sobre os dados de teste


Linear Regression:

R2:  0.052317119521687494
MSE:  461.42771933638954
RMSE:  21.480868682071254
MAE:  17.12996509166612
MAPE:  8.521859277849835

Decision Tree Regressor:

R2:  -0.23845917544438677
MSE:  603.0069811202068
RMSE:  24.556200461802042
MAE:  16.936443045495338
MAPE:  6.4533779049370885

Random Forest Regresson:

R2:  0.35180132044863355
MSE:  315.60856964229083
RMSE:  17.765375584048055
MAE:  13.043921179638874
MAPE:  6.51997591465694

Polinomial Regression:

R2:  0.0900793432990108
MSE:  443.0412557275438
RMSE:  21.04854521641683
MAE:  16.720535025987548
MAPE:  8.242463577057904

Linear Regression with Lasso:

R2:  0.007646329790263473
MSE:  483.1779704502674
RMSE:  21.981309570866504
MAE:  17.472989425619936
MAPE:  8.753477187350732


Linear Regression with Ridge:

R2:  0.05231017186224829
MSE:  461.43110215855063
RMSE:  21.48094742227518
MAE:  17.129678033478562
MAPE:  8.52281549810294

Linear Regression with ElasticNet;

R2:  0.007940270418991702
MSE:  483.03485047128675
RMSE:  21.97805383720967
MAE:  17.470258805997627
MAPE:  8.744584554552917

Polinomial Regression with Lasso:

R2:  0.00837248361268117
MSE:  482.8244054454881
RMSE:  21.97326569824085
MAE:  17.456853946046976
MAPE:  8.75607156019417

Polinomial Regression with Ridge:

R2:  0.08916736343845177
MSE:  443.48529961163933
RMSE:  21.059090664405225
MAE:  16.728878813016124
MAPE:  8.288682480961148

Polinomial Regression with ElasticNet:

R2:  0.010691921493419465
MSE:  481.6950688778471
RMSE:  21.947552685387205
MAE:  17.42552082025263
MAPE:  8.751067050702328

Ensaio de Clusterização:

6.7 Sobre os dados de treinamento

KMeans: 

Silhouette Score:  0.14214752184998414

Affinity Propagation:

Silhouette Score:  0.1693882248493382

7. Conclusões
Nesse ensaio de Machine Learning, consegui adquirir experiência e entender melhor sobre os limites dos algoritmos entre os estados de underffiting e overfitting. Algoritmos baseados em árvores são sensível quanto a profundidade do crescimento e do número de árvores na floresta, fazendo com que a escolha correta dos valores desses parâmetros impeçam os
algoritmos de entrar no estado de overfitting. Os algoritmos de regressão, por outro lado, são sensíveis ao grau do polinômio. Esse parâmetro controla o limite entre o estado de underfitting e overfitting desses algoritmos. Esse ensaio de Machine Learning foi muito importante para aprofundar o entendimento sobre o funcionamento de diversos algoritmos de classificação, regressão e clusterização e quais os principais parâmetros de controle entre os estados de underfitting e overfitting.

8. Próximos passos
Como próximos passos desse ensaio, pretendo ensaiar novos algoritmos de Machine Learning e usar diferentes conjuntos de dados para aumentar o conhecimento sobre os algoritmos e quais cenários são mais favoráveis para o aumento da performance dos mesmos.



