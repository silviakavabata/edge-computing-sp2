SENSOR DE CÁLCULO DE FLUXO DE ÁGUA BASEADO EM RPM

--Descrição:
O sensor é baseado na utilização de um led infravermelho e um sensor infravermelho para medir quantas rotações por minuto são realizadas pela roda instalada entre o led e o sensor de luz.
O programa leva em consideração a quantidade de aros que a roda situada entre os componentes possui para calcular a rotação. Toda vez que o fotoresistor recebe um sinal de luz, ele adicionará o valor de 1 para uma variável, e caso um aro esteja na frente do sensor ele não receberá o sinal e a variável não mudará. Assim podemos calcular uma rotação, dividindo a quantidade de sinais recebidos pelo sensor pelo número de aros que a roda possui, tal valor podendo variar dependendo do tamanho da peça. E utilizando a fórmula rotações dividido por 60 podemos determinar quantas rotações serão realizadas por minuto, assim podendo medir a velocidade do fluxo de água de uma certa área, mostrando caso os valores estejam normais, abaixo do normal ou acima do normal.

--REQUISITOS DE HARDWARE:
1x Placa arduino UNO
1x Fotoresistor LDR
1x LED
2x Resistores 220 kOhm

--REQUISITOS DE SOFTWARE:
Arduino IDE

--INSTALAÇÂO:
Para utilizar este projeto, você precisará de:

-Um ambiente de desenvolvimento de sistemas de arduinos e o codigo fornecido dentro do link para o tinkercad abaixo neste documento.
-Os materias listados em "Requisitos".
-Uma roda ou objeto que possa tampar e destampar momentaneamente o sensor para que possa ser realizado o calculo do rpm.

1.Monte os sistemas apresentados nas imagens e no link da simulação.
2.Coloque o led e o ldr estando paralelos um ao outro e coloque a roda entre eles.
3.Use algo para realizar a movimentação da roda, seja o fluxo de água mencionado anteriormente, ou até mesmo girar manualmente.

--LINK DA SIMULAÇÃO/TINKERCAD:
https://www.tinkercad.com/things/auCxYjAIJ9s-rpm-por-sensor-ldr-e-led/editel