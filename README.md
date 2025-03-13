# Projeto IoT - Leitura de Sensores e Controle de Servo Motor

Este projeto tem como objetivo a leitura de dois sensores (DHT11 e LDR) a cada 3000ms, exibindo os resultados na porta serial e no Node-RED. Além disso, o projeto permite controlar um servo motor através de comandos enviados pela porta serial e exibir as informações em um dashboard gráfico.

## Tarefas Implementadas

### 1. Leitura de Sensores
- **Sensores Utilizados:**
  - **DHT11** para medir a **temperatura** e **umidade**.
  - **LDR** para medir a **luminosidade**.

A leitura de ambos os sensores é realizada a cada **3000ms** e os valores são enviados para a **porta serial** e também para o **Node-RED** no formato de debug.

### 2. Controle de Servo Motor
- **Controle via Serial:**
  - A partir dos dados recebidos na **porta serial**, o servo motor é controlado em três ângulos diferentes.
  - O controle é feito utilizando o comando `Serial.available()` para ler os dados enviados pela serial.

#### Ângulos Controláveis:
  - **0°**
  - **90°**
  - **180°**

### 3. Dashboard no Node-RED
- **Interface Gráfica:**
  - **Temperatura atual** (em Fahrenheit)
  - **Umidade atual**
  - **Luminosidade**

A interface gráfica no Node-RED exibe os valores dos sensores de forma dinâmica e atualizada.

### 4. Controle do Servo Motor via Botões
- **Botões de Controle:**
  - Três botões são disponibilizados no Node-RED para controlar o servo motor, permitindo selecionar um dos três ângulos (0°, 90° ou 180°).
  
---

## Requisitos

- **Hardware:**
  - Arduino (ou outro microcontrolador compatível)
  - Sensor DHT11
  - Sensor LDR
  - Servo Motor
  - Resistores e fios de conexão
  
- **Software:**
  - IDE do Arduino
  - Node-RED para visualização e controle via interface gráfica

## Membros Grupo
RM 560721
RM 560440
RM 560131




