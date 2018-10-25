data SBinaryTree elemento = Nulo
    | Node elemento (SBinaryTree elemento) (SBinaryTree elemento)

inOrder :: SBinaryTree elemento -> [elemento]
inOrder Nulo = []
inOrder (Node x left right) = (inOrder left) ++ [x] ++ (inOrder right)

preOrder :: SBinaryTree element -> [element]
preOrder Nulo = []
preOrder (Node x left right) = [x] ++ (preOrder left) ++ (preOrder right)

posOrder :: SBinaryTree element -> [element]
posOrder Nulo = []
posOrder (Node x left right) = (posOrder left) ++ (posOrder right) ++ [x]

main = do
  print (inOrder (Node 10 (Node 5 (Node 2 Nulo Nulo) (Node 7 Nulo Nulo)) (Node 15 (Node 14 Nulo Nulo) (Node 19 Nulo Nulo))))
  print (preOrder (Node 10 (Node 5 (Node 2 Nulo Nulo) (Node 7 Nulo Nulo)) (Node 15 (Node 14 Nulo Nulo) (Node 19 Nulo Nulo))))
  print (posOrder (Node 10 (Node 5 (Node 2 Nulo Nulo) (Node 7 Nulo Nulo)) (Node 15 (Node 14 Nulo Nulo) (Node 19 Nulo Nulo))))
