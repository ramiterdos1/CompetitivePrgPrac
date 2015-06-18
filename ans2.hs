let f s = if s==[] then [[]] else takeWhile (/=' ') s2: f (dropWhile (/=' ') s2) where s2 = dropWhile (==' ') s
