#  Sistema de Irrigação Automática com Arduino Uno R3 Utilizando Água Reaproveitada de Ares-Condicionados e Bebedouros



## Sobre o Projeto

Este projeto consiste no desenvolvimento de um sistema automatizado de irrigação utilizando Arduino Uno R3, sensor de umidade do solo, módulo relé e bomba de água para automatizar a irrigação de hortas escolares.

A solução utiliza água reaproveitada proveniente de aparelhos de ar-condicionado e bebedouros escolares, promovendo sustentabilidade, economia de água e conscientização ambiental no ambiente escolar.

O sistema monitora continuamente a umidade do solo e realiza a irrigação apenas quando necessário, evitando desperdícios e aumentando a eficiência no uso dos recursos hídricos.

---

# Problema

Grande parte da água proveniente de aparelhos de ar-condicionado e do desperdício dos bebedouros escolares é descartada diariamente.

Além disso, a irrigação manual pode causar:
- desperdício de água;
- irrigação excessiva;
- irrigação insuficiente;
- dificuldades na manutenção de hortas escolares.

Diante disso, surgiu a necessidade de desenvolver uma solução automatizada, acessível e sustentável para o reaproveitamento hídrico e irrigação inteligente.

---

# Tecnologias Utilizadas

- Arduino Uno R3
- Arduino IDE
- Sensor de Umidade do Solo
- Módulo Relé 5V
- Bomba de Água
- Protoboard
- Jumpers
- GitHub
- Eletrônica Básica
- Automação

---

# Componentes Utilizados

| Componente | Quantidade |
|---|---|
| Arduino Uno R3 | 1 |
| Sensor de Umidade do Solo | 1 |
| Módulo Relé 5V | 1 |
| Bomba de Água | 1 |
| Protoboard | 1 |
| Fios Jumper | Diversos |
| Mangueiras | 1 conjunto |
| Reservatório de Água | 1 |
| Fonte de Alimentação | 1 |

---
# Funcionamento do Sistema

## Fluxo de Funcionamento

```txt
Sensor de Umidade → Arduino Uno R3 → Relé → Bomba de Água → Irrigação
```

## Etapas

1. A água descartada pelos aparelhos de ar-condicionado e pelos bebedouros é coletada;
2. A água é armazenada em um reservatório;
3. O sensor monitora constantemente a umidade do solo;
4. O Arduino recebe os dados do sensor;
5. Quando o solo está seco, o relé é acionado;
6. A bomba inicia automaticamente a irrigação;
7. Quando o solo atinge o nível ideal, o sistema desliga a bomba.

---

# Como Executar o Projeto

## 1. Instale a Arduino IDE

Download:
https://www.arduino.cc/en/software

---

## 2. Monte o Circuito

Conecte:
- Sensor de umidade no pino A0;
- Relé no pino digital 7;
- Bomba de água ao relé;
- Arduino via USB ou fonte externa.

---

## 3. Abra o Código

Abra o arquivo:

```txt
irrigacao_automatica.ino
```

na Arduino IDE.

---

## 4. Faça Upload para o Arduino

1. Conecte o Arduino ao computador;
2. Selecione a porta correta;
3. Clique em “Upload”.

---

## 5. Realize os Testes

- Solo seco → bomba ligada;
- Solo úmido → bomba desligada.

---

# Ligações do Circuito

| Componente | Ligação |
|---|---|
| Sensor de Umidade | A0 |
| Relé | Pino 7 |
| Bomba | Relé |
| Alimentação | Fonte Externa |

---


#MVP Funcional

O MVP apresenta:
- monitoramento automático da umidade;
- acionamento automático da bomba;
- irrigação inteligente;
- desligamento automático após atingir umidade adequada.

---

