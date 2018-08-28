    Escreva um programa que leia informações de ações da bolsa de valores. Proponha e implemente um TAD denominado ‘Stats’. Esse TAD deverá guardar todas as cotações passadas como entrada, além do valor máximo, mínimo e médio. Ao final, o programa deve imprimir os dados estatísticos de todas as ações. Dica: utilize os TADs da STL para auxiliar nessa tarefa (map, vector, list).

Exemplo:

```
input =
SUZB3 47.18
JBSS3 8.95
KLBN11 19.57
BRKM5 56.4
SUZB3 45.18
JBSS3 9.55
KLBN11 20.57
BRKM5 54.4
SUZB3 48.18
JBSS3 7.95
KLBN11 20.00
BRKM5 55.0
```
```
output =
BRKM5 56.40 54.40 55.00 | 54.40 56.40 55.27
JBSS3 8.95 9.55 7.95 | 7.95 9.55 8.82
KLBN11 19.57 20.57 20.00 | 19.57 20.57 20.05
SUZB3 47.18 45.18 48.18 | 45.18 48.18 46.85
```

Arquivos requeridos: `main.cpp` `Stats.hpp` `Stats.cpp`
