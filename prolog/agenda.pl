:- dynamic contact/4.

contact("Guila", "gui@email.com", "+5561999999999", "a").
contact("Augusto", "augusto@email.com", "+5561999999999", "a").
contact("Corto", "corto@email.com", "+5561999999999", "a").
contact("Casca", "casca@email.com", "+5561999999999", "a").
contact("Ana", "ana@email.com", "+5561999999999", "f").

findAll(Type, Search) :- findall(Name, contact(Name, _, _, Type), Search).

insertContact(Name, Email, Phone, Type) :- asserta(contact(Name, Email, Phone, Type)).

findAllContacts() :-
  contact(Name, _, _, Type),
  write(Name),
  write(" : "),
  write(Type),
  nl,
  fail.
