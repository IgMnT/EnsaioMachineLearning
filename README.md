# Ensaio de Machine Learning

## Problema de Negócio

### Descrição
A empresa Data Money acredita que a expertise no treinamento e ajuste fino dos algoritmos, feito
pelos Cientistas de Dados da empresa, é a principal motivo dos ótimos resultados que as
consultorias vem entregando aos seus clientes.

### Objetivo
O objetivo desse projeto será realizar ensaios com algoritmos de Classificação, Regressão e
Clusterização, para estudar a mudança do comportamento da performance, a medida que os
valores dos principais parâmetros de controle de overfitting e underfitting mudam.

## Planejamento da solução

### Produto final
O produto final será 7 tabelas mostrando a performance dos algoritmos, avaliados usando múltiplas
métricas, para 3 conjuntos de dados diferentes: Treinamento, validação e teste.

### Algoritmos ensaiados
**Classificação:**
- **Algoritmos:** KNN, Decision Tree, Random Forest e Logistic Regression
- **Métricas de performance:** Accuracy, Precision, Recall e F1-Score

**Regressão:**
- **Algoritmos:** Linear Regression, Decision Tree Regressor, Random Forest Regressor, Polinomial
Regression, Linear Regression Lasso, Linear Regression Ridge, Linear Regression Elastic Net,
Polinomial Regression Lasso, Polinomial Regression Ridge e Polinomial Regression Elastic Net
- **Métricas de performance:** R2, MSE, RMSE, MAE e MAPE

**Agrupamento:**
- **Algoritmos:** K-Means e Affinity Propagation
- **Métricas de performance:** Silhouette Score

### Ferramentas utilizadas:
1. Python 3.8 e Scikit-learn

## Desenvolvimento

### Estratégia da solução
Para o objetivo de ensaiar os algoritmos de Machine Learning, eu vou escrever os códigos
utilizando a linguagem Python, para treinar cada um dos algoritmos e vou variar seus principais
parâmetros de ajuste de overfitting e observar a métrica final.
O conjunto de valores que fizerem os algoritmos alcançarem a melhor performance, serão aqueles
escolhidos para o treinamento final do algoritmo.

### O passo a passo

1. Divisão dos dados em treino, teste e validação.
2. Treinamento dos algoritmos com os dados de treinamento, utilizando os parâmetros "default".
3. Medir a performance dos algoritmos treinados com o parâmetro default, utilizando o conjunto de dados de treinamento.
4. Medir a performance dos algoritmos treinados com o parâmetro "default", utilizando o conjunto de dados de validação.
5. Alternar os valores dos principais parâmetros que controlam o overfitting do algoritmo até encontrar o conjunto de parâmetros apresente a melhor performance dos algoritmos.
6. Unir os dados de treinamento e validação
7. Retreinar o algoritmo com a união dos dados de treinamento e validação, utilizando os melhores valores para os parâmetros de controle do algoritmo.
8. Medir a performance dos algoritmos treinados com os melhores parâmetro, utilizando o conjunto de dados de teste.
9. Avaliar os ensaios e anotar os 3 principais Insights que se destacaram.

## Os top 3 Insights

### Insight Top 1
Os algoritmos baseado em árvores possuem uma performance melhores em todas as métricas,
quando aplicados sobre os dados de teste, no ensaio de Classificação.

### Insight Top 2
A performance dos algoritmos de classificação sobre os dados de validação ficou bem próxima da
performance sobre os dados de teste.

### Insight Top 3
Todos os algoritmo de regressão não apresentaram boas métricas de performance, o que mostra
uma necessidade de uma seleção de atributos e uma preparação melhor das variáveis
independentes do conjunto de dados.

## Resultados

### Ensaio de Classificação:

#### Sobre os dados de treinamento:

| Algoritmo | Accuracy | Precision | Recall | F1 |
|-----------|----------|-----------|--------|----| 
| KNN | 0.7815 | 0.7780 | 0.7758 | 0.7767 |
| Decision Tree Classifier | 1.0000 | 1.0000 | 1.0000 | 1.0000 |
| Random Forest Classifier | 1.0000 | 1.0000 | 1.0000 | 1.0000 |
| Logistic Regression | 0.8761 | 0.8755 | 0.8716 | 0.8733 |

#### Sobre os dados de validação:

| Algoritmo | Accuracy | Precision | Recall | F1 |
|-----------|----------|-----------|--------|----| 
| KNN | 0.6756 | 0.6693 | 0.6671 | 0.6679 |
| Decision Tree Classifier | 0.9439 | 0.9438 | 0.9445 | 0.9442 |
| Random Forest Classifier | 0.9646 | 0.9660 | 0.9621 | 0.9638 |
| Logistic Regression | 0.8747 | 0.8740 | 0.8702 | 0.8719 |

#### Sobre os dados de teste:

| Algoritmo | Accuracy | Precision | Recall | F1 |
|-----------|----------|-----------|--------|----| 
| KNN | 0.6705 | 0.6650 | 0.6630 | 0.6637 |
| Decision Tree Classifier | 0.9445 | 0.9434 | 0.9440 | 0.9437 |
| Random Forest Classifier | 0.9639 | 0.9650 | 0.9617 | 0.9632 |
| Logistic Regression | 0.8721 | 0.8715 | 0.8680 | 0.8695 |

### Ensaio de Regressão:

#### Sobre os dados de treinamento:

| Algoritmo | R2 | MSE | RMSE | MAE | MAPE |
|-----------|----|----|------|-----|------|
| Linear Regression | 0.0461 | 455.996 | 21.354 | 16.998 | 8.653 |
| Decision Tree Regressor | 0.9918 | 3.940 | 1.985 | 0.214 | 0.083 |
| Random Forest Regressor | 0.9031 | 46.342 | 6.807 | 4.866 | 2.651 |
| Polinomial Regression | 0.0942 | 432.986 | 20.808 | 16.458 | 8.351 |
| Linear Regression with Lasso | 0.0074 | 474.475 | 21.782 | 17.305 | 8.737 |
| Linear Regression with Ridge | 0.0461 | 455.996 | 21.354 | 16.998 | 8.653 |
| Linear Regression with ElasticNet | 0.0078 | 474.269 | 21.778 | 17.300 | 8.732 |
| Polinomial Regression with Lasso | 0.0091 | 473.639 | 21.763 | 17.285 | 8.700 |
| Polinomial Regression with Ridge | 0.0932 | 433.475 | 20.820 | 16.472 | 8.373 |
| Polinomial Regression with ElasticNet | 0.0128 | 471.878 | 21.723 | 17.244 | 8.679 |

#### Sobre os dados de validação:

| Algoritmo | R2 | MSE | RMSE | MAE | MAPE |
|-----------|----|----|------|-----|------|
| Linear Regression | 0.0399 | 458.447 | 21.411 | 17.040 | 8.683 |
| Decision Tree Regressor | -0.2963 | 619.003 | 24.880 | 17.183 | 6.949 |
| Random Forest Regressor | 0.3305 | 319.705 | 17.880 | 13.056 | 7.060 |
| Polinomial Regression | 0.0665 | 445.768 | 21.113 | 16.750 | 8.548 |
| Linear Regression with Lasso | 0.0079 | 473.747 | 21.766 | 17.265 | 8.696 |
| Linear Regression with Ridge | 0.0399 | 458.445 | 21.411 | 17.039 | 8.682 |
| Linear Regression with ElasticNet | 0.0081 | 473.636 | 21.763 | 17.263 | 8.694 |
| Polinomial Regression with Lasso | 0.0096 | 472.913 | 21.747 | 17.238 | 8.682 |
| Polinomial Regression with Ridge | 0.0677 | 445.184 | 21.099 | 16.739 | 8.569 |
| Polinomial Regression with ElasticNet | 0.0128 | 471.408 | 21.712 | 17.200 | 8.675 |

#### Sobre os dados de teste:

| Algoritmo | R2 | MSE | RMSE | MAE | MAPE |
|-----------|----|----|------|-----|------|
| Linear Regression | 0.0523 | 461.428 | 21.481 | 17.130 | 8.522 |
| Decision Tree Regressor | -0.2385 | 603.007 | 24.556 | 16.936 | 6.453 |
| Random Forest Regressor | 0.3518 | 315.609 | 17.765 | 13.044 | 6.520 |
| Polinomial Regression | 0.0901 | 443.041 | 21.049 | 16.721 | 8.242 |
| Linear Regression with Lasso | 0.0076 | 483.178 | 21.981 | 17.473 | 8.753 |
| Linear Regression with Ridge | 0.0523 | 461.431 | 21.481 | 17.130 | 8.523 |
| Linear Regression with ElasticNet | 0.0079 | 483.035 | 21.978 | 17.470 | 8.745 |
| Polinomial Regression with Lasso | 0.0084 | 482.824 | 21.973 | 17.457 | 8.756 |
| Polinomial Regression with Ridge | 0.0892 | 443.485 | 21.059 | 16.729 | 8.289 |
| Polinomial Regression with ElasticNet | 0.0107 | 481.695 | 21.948 | 17.426 | 8.751 |

### Ensaio de Clusterização:

#### Sobre os dados de treinamento:

| Algoritmo | Silhouette Score |
|-----------|------------------|
| KMeans | 0.1421 |
| Affinity Propagation | 0.1694 |

## Conclusões
Nesse ensaio de Machine Learning, consegui adquirir experiência e entender melhor sobre os limites dos algoritmos entre os estados de underffiting e overfitting. Algoritmos baseados em árvores são sensível quanto a profundidade do crescimento e do número de árvores na floresta, fazendo com que a escolha correta dos valores desses parâmetros impeçam os
algoritmos de entrar no estado de overfitting. Os algoritmos de regressão, por outro lado, são sensíveis ao grau do polinômio. Esse parâmetro controla o limite entre o estado de underfitting e overfitting desses algoritmos. Esse ensaio de Machine Learning foi muito importante para aprofundar o entendimento sobre o funcionamento de diversos algoritmos de classificação, regressão e clusterização e quais os principais parâmetros de controle entre os estados de underfitting e overfitting.

## Próximos passos
Como próximos passos desse ensaio, pretendo ensaiar novos algoritmos de Machine Learning e usar diferentes conjuntos de dados para aumentar o conhecimento sobre os algoritmos e quais cenários são mais favoráveis para o aumento da performance dos mesmos.



