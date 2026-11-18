Övning: 2: Sant eller falskt, del 2
För vardera påståendet nedan, avgör om det är sant eller falskt, och motivera kort:

1. En klass med en ren virtuell funktion kan ändå ha vanliga, icke-virtuella medlemsfunk-
   tioner.

2. Om Bas har en virtual-funktion utan = 0, måste varje subklass skriva över den för
   att subklassen ska gå att skapa objekt av.
3. Att ta bort override från en subklassfunktion som korrekt skriver över en virtuell
   basklassfunktion gör att koden slutar kompilera.
4. Två syskonklasser (två olika subklasser till samma basklass) kan anropa varandras
   medlemsfunktioner direkt, utan en basklasspekare.

Svar:

5. Det stämmer, men subklasserna måste implementera den virtuella funktionen

6. Nej. Varje subklass måste skriva över funktionen bara ifall virtual funktionen är lika med 0

7. Nej, men det kan orsaka odefinierat beteende.

8. Nej, det kan de inte, de kan endast anropa deras egna medlemsfunktioner och basklassens.
