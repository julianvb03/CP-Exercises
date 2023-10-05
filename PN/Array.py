import numpy as np

#¿Qué significa aumentar una dimensión en un axis 0 o 1?

#Imaginemos que tenemos una matriz.
matriz = np.array([["a", "b", "c"], ["d", "e", "f"]])

#Ahora queremos aumentarle una dimensión.
"""Axis = 0 = Aumentarle una dimensión en la fila.
Esto en palabras en simples signfica que se agregará una dimensión para toda la matriz,
creando así un tensor que tiene solo una fila."""
matriz_0 = np.expand_dims(matriz, axis = 0)
print(matriz_0)
#-->array([**[**['a', 'b', 'c'],
#       ['d', 'e', 'f']**]**], dtype='<U1'), ---> fila 0 ,lo que esta entre (****) es la nueva dimensión creada.

#Y si ejecutamos:
print(matriz_0[0])
#-->array([['a', 'b', 'c'],
#       ['d', 'e', 'f']], dtype='<U1') 
#Nos saldrá la matriz que creamos al inicio, por lo que mencione al inicio.

#------------------------------------------------------------------------------

"""Axis = 1 = Aumentar una dimensión en la fila.
Esto también explicado en palabras simple significa que se agregará una dimensión, 
pero para cada vector (["a","b","c"] y ["d", "e", "f"]), creando así un 
tensor con dos filas."""
matriz_1 = np.expand_dims(matriz, axis = 1)
print(matriz_1)
#-->array([**[**['a', 'b', 'c']**]**, ---> fila 0

#       **[**['d', 'e', 'f']**]**], dtype='<U1') ---> fila 1 ,lo que esta entre (****) es la nueva dimensión creada.

#Y si ejecutamos:
matriz_1[1]
#-->array([['d', 'e', 'f']], dtype='<U1')