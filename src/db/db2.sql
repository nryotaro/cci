drop table if exists Requests;
drop table if exists AptTenants;
drop table if exists Apartments;
drop table if exists Buildings;
drop table if exists Tenants;

create table Tenants (
    TenantID int,
    TenantName varchar(100) not null,
    primary key(TenantID) 
);

create table Buildings(
       BuildingID int,
       ComplexID int not null,
       BuildingName varchar(100) not null,
       primary key(BuildingID)
);

create table Apartments(
    AptID int,
    UnitNumber varchar(10) not null,
    BuildingID int,
    primary key(AptID),
    foreign key(`BuildingID`) references Buildings(`BuildingID`)
);

create table Requests(
       RequestID int,
       Status varchar(100) not null,
       AptID int,
       Description varchar(500) not null,
       primary key(RequestID),
       foreign key(`AptID`) references Apartments(`AptID`)
);

create table AptTenants(
    TenantID int,
    AptID int,
    foreign key (`TenantID`) references Tenants(`TenantID`),
    foreign key (`AptID`) references Apartments(`AptID`)
);

insert into Buildings values
    (1, 1, 'building1')
  , (2, 2, 'building2')
  , (3, 3, 'building3');
  
insert into Apartments values
    (1, 'unit1', 1)
  , (2, 'unit2', 1)
  , (3, 'unit3', 2)
  , (4, 'unit4', 2);
insert into Requests values
    (1, 'Open', 1, 'requests1')
  , (2, 'Open', 2, 'requests2')
  , (3, 'Close', 3, 'requests3')
  , (4, 'Open', 4, 'requests3');

-- insert into Tenants values(1, 'tenant1'), (2, 'tenant2');

-- insert into Apartments values(1, 1, 1), (2, 2, 2), (3, 3, 3);

-- insert into AptTenants value(1, 1), (1, 2), (2, 3);
