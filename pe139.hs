

ptrips :: Integer->Integer->Integer->[(Integer,Integer,Integer)]
ptrips x y z
   |x+y+z>100000001 = [] 
   |x*x + y*y == z*z = (x,y,z) : ptrips (x+2) (x+3) (x+4) 
   |x*x + y*y > z*z = ptrips x (y+2) (y+3)
   | otherwise = ptrips x y (z+2)

pyTriplets = ptrips 3 4 5

ans= [ (x,y,z)| (x,y,z) <- pyTriplets , mod (z*z) (z*z-2*x*y) ==0]


