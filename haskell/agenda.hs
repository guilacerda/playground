data Person = Person {
  name :: String
  , email :: String
  , numbers :: (String, String)
} deriving (Show)

data Agenda = Agenda {
  contacts :: [Person]
} deriving (Show)

addsAgenda :: Agenda -> Person -> Agenda
addsAgenda agenda person = Agenda (contacts agenda ++ [person])

main = do
  let agenda = Agenda []
  -- addsAgenda(Agenda )
  let person = Person "guilherme" "guilherme@email" ("1234", "12345")
  let agendaA = addsAgenda agenda person

  print(contacts agendaA)
