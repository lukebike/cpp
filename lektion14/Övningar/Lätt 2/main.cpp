/*1. Om en medlemsfunktion i basklassen är virtual, måste alla subklasser skriva om den.
2. override är obligatoriskt för att polymorfism ska fungera – utan override körs alltid
basklassens version.
3. En klass med minst en ren virtuell medlemsfunktion (= 0) går inte att skapa objekt av
direkt.
4. En subklass till en abstrakt klass är automatiskt själv abstrakt, oavsett om den
implementerar de rena virtuella funktionerna eller inte.
5. Om en basklass destruktor inte är virtual, kan delete på en basklasspekare hoppa
över subklassens destruktor.*/

// 1. Ja, då en virtual funktion har ingen implementation i bas klassen; Sant
// 2. Sant
// 3. Det stämmer
// 4. Nej
// 5. Sant