Select Person.firstName,Person.lastName , Address.city, Address.state 
From Person LEft Join Address on Person.personId = Address.personId;