1. Ch - 3
2. This Doc
3. https://www.w3schools.com/sql
-------------------------- Good 2 Go ----------------------------------------
// Create test table with all CONSTRAINT -Subroto- ⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽
// person (id(primary) autoin, name, age>18, City)
// students( id (primary), scholarship(decimal 10.2 ), person_id(Foreign))

⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽⚽

create table person(
id int AUTO_INCREMENT,
name varchar(50) NOT NULL,
age int CHECK (age>=18),
City varchar(255) DEFAULT 'Kushtia',
primary key(id)
);

create table students(
id int AUTO_INCREMENT,
scholarship decimal(10,2),
person_id int,
primary key(id),
foreign key(person_id) references person(id)
);

create table account(Branch_name varchar(30), Account_number varchar(30), Balance DECIMAL( 10, 2 ), primary key(Account_number));

insert into account() values ("Downtown","A-101","500");
insert into account() values ("Perryridge","A-102","400");
insert into account() values ("Perryridge","A-103","600");
insert into account() values ("Brightown","A-201","900");
insert into account() values ("Mianus","A-215","700");
insert into account() values ("Mianus","A-216","9500");
insert into account() values ("Brightown","A-217","750");
insert into account() values ("Redwood","A-416","800");
insert into account() values ("Downtown","A-219","900");
insert into account() values ("Redwood","A-222","700");
insert into account() values ("Round Hill","A-305","350");
insert into account() values ("Redwood","A-232","550");
insert into account() values ("Perryridge","A-104","900");
insert into account() values ("Perryridge","A-329","500");


create table borrower(customer_name varchar(20),loan_number varchar(10), primary key(customer_name));

insert into borrower() values("Smith","L-11");
insert into borrower() values("Adams","L-16");
insert into borrower() values("Curry","L-39");
insert into borrower() values("Hays","L-15");
insert into borrower() values("Jackson","L-14");
insert into borrower() values("Jones","L-17");
insert into borrower() values("Smith","L-23");
insert into borrower() values("Williams","L-17");


create table depositor(customer_name varchar(20),account_number  VARCHAR( 20 ));

insert into depositor()values("Hayes","A-102");
insert into depositor()values("Johnson","A-101");
insert into depositor()values("Johnson","A-201");
insert into depositor()values("Jones","A-217");
insert into depositor()values("Jones","A-216");
insert into depositor()values("Jones","A-219");
insert into depositor()values("Smith","A-215");
insert into depositor()values("Sindsay","A-222");
insert into depositor()values("Turner","A-305");
insert into depositor()values("Jones","A-329");


create table branch(branch_name varchar(20),branch_city varchar(20),assets int(20), primary key(branch_name));

insert into branch() values ("Brightown","brooklyn","7100000");
insert into branch() values ("Downtown","Brooklyn","9000000");
insert into branch() values ("Mianus","Horeseneck","40000");
insert into branch() values ("North town","Rye","3700000");
insert into branch() values ("Perryridge","Horesenec","1700000");
insert into branch() values ("Redwood","Paloalto","2100000");
insert into branch() values ("Pownal","Benninglon","3000000");
insert into branch() values ("Round Hill","Horeseneck","8000000");

create table customer(customer_name varchar(20),customer_street varchar(20),customer_city varchar(20), primary key(customer_name));

insert into customer() values("Adams","Spring","Pins fields");
insert into customer() values("Brooks","Senator","Brooklyn");
insert into customer() values("Curry","North","Rye");
insert into customer() values("Glenn","Sand Hill","Woodside");
insert into customer() values("Green","Walnut","Standford");
insert into customer() values("Hayes","Main","Harrison");
insert into customer() values("Johnson","Alma","Daloalto");
insert into customer() values("Jones","Main","Harrison");
insert into customer() values("Lindsay","Park ","Pinsfield");
insert into customer() values("Smith","North","Ray");
insert into customer() values("Turner","Putnam","Stamford");
insert into customer() values("Williams","Nassau","Prineton");

create table loan(id int AUTO_INCREMENT, branch_name varchar(20),loan_number varchar(10),amount int(10), primary key(id));

insert into loan() values('' ,"Round Hill","L-11","900");
insert into loan() values('' ,"Downtown","L-14","1500");
insert into loan() values('' ,"Perryridge","L-15","1500");
insert into loan() values('' ,"Perryridge","L-16","1300");
insert into loan() values('' ,"Downtown","L-17","1000");
insert into loan() values('' ,"Redwood","L-23","2000");
insert into loan() values('' ,"Mianus","L-93","500");
insert into loan() values('' ,"Kushtia","L-95","3300");
insert into loan() values('' ,"Rajbari","L-98","1233");
insert into loan() values('' ,"Perryridge","L-18","1000");

create table persons(
p_id int(10),
lastname varchar(15),
firstname varchar(15),
address varchar(15),
city varchar(15), 
primary key(p_id)
);

insert into persons(p_id, lastname, firstname, address, city) values('1','Hansen','Ola','Timoteivn 10','Sandnes');
insert into persons(p_id, lastname, firstname, address, city) values('2','Svendson','Tove','Vorgvn 23','Sandnes');
insert into persons(p_id, lastname, firstname, address, city) values('3','Pettersen','Kari','Storgt 20','Stavanger');
insert into persons(p_id, lastname, firstname, address, city) values('4','Nilsen','Tom','Vingvn 23','Stavanger');

create table orders(
o_id int(5),
orderno varchar(15),
p_id int(5),
primary key(o_id),
foreign key(p_id) references persons(p_id)
);

insert into orders values(1, '77895', 3);
insert into orders values(2, '44678', 3);
insert into orders values(3, '22456', 1);
insert into orders values(4, '24562', 1);
insert into orders values(5, '34764', 2);


select * from account;
select * from borrower;
select * from depositor;
select * from branch;
select * from customer;
select * from loan;

Customer- (customer_name, customer_street, customer_city)
Branch- (branch_name, branch_city, assets)

Account- (branch_name, account_number, balance)
Depositor- (customer_name, account_number)

Loan- (branch_name, loan_number, amount)
Borrower- (customer_name, loan_number)

Answer at the end of the page.
Problem no-1: Find all loan number and amount from loan made at Perryridge branch with amount >1200.
Problem no-2: Find all customer names and loan_number who have a loan from the bank.
Problem no-3: Find the name and loan_number of all customers who have a loan at the “Perryridge” branch.
Problem no-4: Find the name of all customer whos street address includes the substring “Hill”.
Problem no-5: List in alphabetic order all customers who have a loan at “Perryridge” branch.
Problem no-6: Find all customer having loan and account at the bank. //May be Intersect is not present in Mysql, union is present. See Ans.
Problem no-7: Find the the average balance for each customer who lives in Harrison and has at least three accounts. // VVI

✈️✈️✈️✈️✈️✈️✈️✈✈️✈️✈️✈️✈️✈️✈️✈️ Second Round ✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈️✈

Customer- (customer_name, customer_street, customer_city)
Branch- (branch_name, branch_city, assets)

Account- (branch_name, account_number, balance)
Depositor- (customer_name, account_number)

Loan- (branch_name, loan_number, amount)
Borrower- (customer_name, loan_number)

Problem no-01: Find the name branches in the loan relation whose loan amounts less than 1000.
Problem no-02: Find the account numbers whose balance equal or greater than 700.
Problem no-03: Find the name of customer who have account.
Problem no-04: Find the name of customer who have both loan and account.
Problem no-05: Find the name of customer who have account but not loan.
Problem no-06: Find average balance in ‘Horeseneck’ city.
Problem no-07: Find the name of customer in ‘Harrison’ city or live in street name ‘North’.
Problem no-08: Find the name of customer in whose balance greater than average balance. (VVI)
Problem no-09: Find the average balance of ‘Perryridge’ city.





go 🏃




go 🏃🏃🏃





go 🏃🏃🏃🏃🏃🏃




go 🏃🏃🏃🏃🏃🏃🏃🏃🏃





go 🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃





go 🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃🏃




Answers:
Problem no-1: Find all loan number and amount from loan made at Perryridge branch with amount >1200.
Querey: select loan_number,amount from loan where branch_name="Perryridge" and amount>1200;

Problem no-2: Find all customer names and loan_number who have a loan from the bank.
Querey: select customer_name, loan.loan_number  from borrower, loan where borrower.loan_number=loan.loan_number;

Problem no-3: Find the name and loan_number of all customers who have a loan at the “Perryridge” branch.
Query:  select distinct customer_name, borrower.loan_number as loan_id from borrower,loan 
        where borrower.loan_number=loan.loan_number and branch_name="Perryridge";

Problem no-4: Find the name of all customer whos street address includes the substring “Hill”.
Query: select customer_name,customer_street from customer where customer_street like "%Hill";

Problem no-5: List in alphabetic order all customers who have a loan at “Perryridge” branch.
Query: select distinct customer_name from borrower, loan where borrower.loan_number=loan.loan_number and branch_name="Perryridge" order by customer_name;

Problem no-6: Find all customer having loan and account at the bank.
Query: select distinct borrower.customer_name from depositor,borrower where borrower.customer_name=depositor.customer_name;

Problem no-7: Find the the average balance for each customer who lives in Harrison and has at least three accounts.
Query: select c.customer_name, avg(balance) from account a, depositor d, customer c where a.account_number=d.account_number and d.customer_name=c.customer_name and customer_city='Harrison'
group by customer_name having count(distinct c.customer_name)>=3;



-----Second Round---Details: https://docs.google.com/document/d/1gQQPDF7oVXGfL9tZxp1kJ4aToriJRiJoRe7Rf8to-Xg/edit?usp=sharing ------

Problem no-01: Find the name branches in the loan relation whose loan amounts less than 1000.
Query: select branch_name from loan where amount<1000;

Problem no-02: Find the account numbers whose balance equal or greater than 700.
Query: select account_number from account where balance>=700;

Problem no-03: Find the name of customer who have account.
Query: select customer_name from depositor,account where depositor.account_number=account.account_number;

Problem no-04: Find the name of customer who have both loan and account.
Query: select distinct borrower.customer_name from depositor,borrower where borrower.customer_name=depositor.customer_name;

Problem no-05: Find the name of customer who have account but not loan.
Query: select customer_name from depositor where customer_name not in (select customer_name from borrower);

Problem no-06: Find average balance in ‘Horseneck’ city.
Query: select avg(balance) as average from branch,account where account.branch_name=branch.branch_name and branch.branch_city='Horeseneck'
group by branch_city;


Problem no-07: Find the name of customer in ‘Harrison’ city or live in street name ‘North’.
Query: select customer_name from customer where customer_city='HARRISON' or customer_street='NORTH';

Problem no-08: Find the name of customer in whose balance greater than average balance.
Query:  select customer_name,balance from depositor,account 
        where depositor.account_number=account.account_number and balance>(select avg(balance) from account);

Problem no-09: Find the average balance of ‘Perridge’ city.
Query: select avg(balance) as average from account where branch_name='Perridge';



Thanks
Subroto
