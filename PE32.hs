arr = zip [1..9] [0..]
f1 :: Int -> [Int]

f1 0 = []
f1 x = (mod x 10): f1 (div x 10)

chk :: [Int] -> Bool
chk x = foldr (&&) True (map (`elem` [1..9]) x) && chk2 1 x
   where
    chk2 :: Int -> [Int] -> Bool
    chk2 9 x = elem 9 x
    chk2 i x = (elem i x) && (chk2 (i+1) x)

f2 :: (Int,Int,Int) -> Bool
f2 (x,y,z) = chk ((f1 x) ++ (f1 y) ++ (f1 z)) 

s :: [(Int,Int,Int)]->Int
s [] =0
s ((_,_,x):xs) = x + (s xs)

main = do
  let an = [ (x,y,x*y) | x <- [10..999], y <- [100..999],  (x*y)>99, (x*y)<10000, f2 ( x, y,(x*y)) ]
  let an2 = [ (x,y,x*y) | x <- [1..9], y <- [1000..10000],  (x*y)>999, (x*y)<10000, f2 ( x, y,(x*y)) ]
  let ans = an2 ++ an
  print (ans)
  --print (ans2)
  print (s ans)	

