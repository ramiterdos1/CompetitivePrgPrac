import Data.Char
val::String -> Integer
val [] = 0
val (x:xs) = toInteger (ord x - ord 'A') +1+ val xs

p :: ( Integer, String) -> Integer
p (x,y) = x * (val y) 
main = do
	 f <- readFile "sort1.txt"
         let x = lines f
         --print "kol"
	 --print (zip [1..] x)
         print (sum ( map p (zip [1..] x)))

