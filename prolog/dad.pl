sponsor(joao, maria).
sponsor(joao, jose).
sponsor(jose, ana).
sponsor(maria, beatriz).

granpa(X, Z) :- sponsor(X, Y), sponsor(Y, Z), write(X), write(" é avô de "), write(Z).
