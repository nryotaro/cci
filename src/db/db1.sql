drop table AptTenants;
drop table Apartments;
drop table Tenants;

create table Tenants (
    TenantID int,
    TenantName varchar(100) not null,
    primary key(TenantID) 
);

create table Apartments(
    AptID int,
    UnitNumber varchar(10),
    BuildingID int,
    primary key(AptID)
);

create table AptTenants(
    TenantID int,
    AptID int,
    foreign key (`TenantID`) references Tenants(`TenantID`) ,
    foreign key (`AptID`) references Apartments(`AptID`)
);

insert into Tenants values(1, 'tenant1'), (2, 'tenant2');

insert into Apartments values(1, 1, 1), (2, 2, 2), (3, 3, 3);

insert into AptTenants value(1, 1), (1, 2), (2, 3);
