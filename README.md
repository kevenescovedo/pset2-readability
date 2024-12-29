
# PSET 2 LEGEBILIDADE 
De acordo com a Scholastic , “Charlotte's Web” de EB White está entre o nível de leitura da segunda e quarta séries, e “The Giver” de Lois Lowry está entre um nível de leitura da oitava série e um nível de leitura da décima segunda série. No entanto, o que significa um livro estar no “nível de leitura da quarta série”?

Bem, em muitos casos, um especialista humano pode ler um livro e tomar uma decisão sobre a série para a qual acha que o livro é mais apropriado. Mas você também pode imaginar um algoritmo tentando descobrir qual é o nível de leitura de um texto.

Então, que tipo de características são características de níveis de leitura mais altos? Bem, palavras mais longas provavelmente se correlacionam com níveis de leitura mais altos. Da mesma forma, frases mais longas provavelmente se correlacionam com níveis mais altos de leitura também. Vários “testes de legibilidade” foram desenvolvidos ao longo dos anos, para fornecer um processo estereotipado para calcular o nível de leitura de um texto.

Um desses testes de legibilidade é o índice Coleman-Liau. O índice Coleman-Liau de um texto é projetado para mostrar qual nível escolar (EUA) é necessário para entender o texto. A fórmula é:

```formula
indice = 0.0588 * L - 0.296 * S - 15.8
```
Aqui, L é o número médio de letras por 100 palavras no texto e S é o número médio de sentenças por 100 palavras no texto.

# EXEMPLO
```Run
$ ./readability
Texto: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```


