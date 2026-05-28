#  Sistema de Irrigação Automática com Arduino Uno R3 Utilizando Água Reaproveitada de Ares-Condicionados e Bebedouros



## Sobre o Projeto

Este projeto consiste no desenvolvimento de um sistema automatizado de irrigação utilizando Arduino Uno R3, sensor de umidade do solo, módulo relé e bomba de água para automatizar a irrigação de hortas escolares.

A solução utiliza água reaproveitada proveniente de aparelhos de ares-condicionados e bebedouros escolares, promovendo sustentabilidade, economia de água e conscientização ambiental no ambiente escolar.

O sistema monitora continuamente a umidade do solo e realiza a irrigação apenas quando necessário, evitando desperdícios e aumentando a eficiência no uso dos recursos hídricos.

---

# Problema

Grande parte da água proveniente de aparelhos de ares-condicionados e do desperdício dos bebedouros escolares é descartada diariamente.

Além disso, a irrigação manual pode causar:
- desperdício de água;
- irrigação excessiva;
- irrigação insuficiente;
- dificuldades na manutenção de hortas escolares.

Diante disso, surgiu a necessidade de desenvolver uma solução automatizada, acessível e sustentável para o reaproveitamento hídrico e irrigação inteligente.

---
# Solução Desenvolvida

O sistema utiliza um sensor de umidade do solo conectado ao Arduino Uno R3 para monitorar continuamente as condições do solo.

Quando o sensor identifica que o solo está seco:
1. O sensor envia os dados ao Arduino;
2. O Arduino processa as informações;
3. O módulo relé é acionado;
4. A bomba de água é ligada automaticamente;
5. A irrigação ocorre utilizando água reaproveitada;
6. Após atingir o nível ideal de umidade, o sistema interrompe automaticamente a irrigação.

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

1. A água descartada pelos aparelhos de ares-condicionados e pelos bebedouros é coletada;
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

O MVP apresenta:
- monitoramento automático da umidade;
- acionamento automático da bomba;
- irrigação inteligente;
- desligamento automático após atingir umidade adequada.

---

## Vídeo Demonstrativo

O vídeo do funcionamento está disponível em:

```txt
lv_0_20260527203830.mp4
```

---


# Imagens do Projeto

## MVP

IMG-20260527-WA0028.jpg


---

# Impactos do Projeto

## Sustentabilidade
- Reaproveitamento de água;
- Redução do desperdício;
- Uso consciente dos recursos naturais.

## Educação
- Integração entre tecnologia e sustentabilidade;
- Incentivo ao aprendizado prático;
- Aplicação de automação no ambiente escolar.

## Economia
- Redução do consumo de água potável;
- Baixo custo de implementação;
- Fácil replicação em escolas públicas.

---
 
# Diferenciais

- Utilização de água reaproveitada;
- Baixo custo;
- Fácil implementação;
- Automatização completa da irrigação;
- Aplicação sustentável no ambiente escolar.

---

# Melhorias Futuras

- Integração com IoT;
- Monitoramento remoto;
- Aplicativo mobile;
- Dashboard web;
- Painéis solares;
- Sensores adicionais;
- Registro automático de dados.

---

# Testes Realizados

Foram realizados testes para:
- leitura do sensor de umidade;
- acionamento do módulo relé;
- funcionamento da bomba;
- distribuição da água;
- desligamento automático do sistema.

--- 


# Conhecimentos Aplicados

O projeto envolveu conhecimentos em:
- programação;
- automação;
- eletrônica básica;
- sustentabilidade;
- desenvolvimento de sistemas;
- prototipagem.

---
# Equipe

## CETI São João Batista

### Integrantes
- Elayni Feitoza de Medeiros
- Allana Náyra de Sousa Nascimento
- Maria Paula Almeida Ribeiro
- Cráisla Vitória Barbosa Silva
- João Lucas Lima de Meneses

### Orientador
- Lucas Eduardo Soares de Oliveira

---

# Instituição

CETI São João Batista  
3ª GRE — São João da Fronteira  
Programa Do Piauí Para o Mundo 2026

---


# Referências

- Instituto Trata Brasil
- Ministério do Meio Ambiente
- Arduino Documentation
- Cirkit Designer
- Artigos sobre irrigação automatizada
- Estudos sobre reaproveitamento de água

---

# Considerações Finais

O projeto demonstra como a tecnologia pode ser utilizada para promover sustentabilidade, automação e conscientização ambiental dentro do ambiente escolar.

A solução apresenta baixo custo, facilidade de replicação e potencial de expansão futura, tornando-se uma alternativa viável para irrigação inteligente utilizando água reaproveitada.
