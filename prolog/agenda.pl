:- dynamic contact/2.
:- dynamic profile/2.

contact("Guilherme", 21).
contact("Joao", 20).

findAll(Age, Result) :- findall(Name, contact(Name, Age), Result).

findAllContacts :-
  contact(Name, _),
  write(Name),
  nl,
  fail.

insertContact(Name, Age) :- asserta(contact(Name, Age)).

add_contact :-
  nl, write('Adds your contact on agenda'), nl, nl,
  insertDataName.

insertDataName :-
  write("What is contact name?"),
  read(Answer),
  asserta(profile(nameContact, Answer)),
  profile(nameContact, NameContact),
  insertDataAge.

insertDataAge :-
  write("What is contact age?"),
  read(Answer),
  asserta(profile(ageContact, Answer)),
  profile(nameContact, NameContact),
  profile(ageContact, AgeContact),
  insertContact(NameContact, AgeContact),
  findAllContacts.

?- add_contact.
