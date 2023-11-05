# CPC-40007Adapter

An adapter to plug an Amstrad 40007 Gate Array in to a 40010 Socket. It's not a great idea, but if you're stuck.

# Main points 

* There are many things fundamentally flawed in doing this, including broken addressing, for example it won't boot with a Dandanator and 128K.
* It might need long pins to get above other components on later CPC464-2MINI boards.
* Due to the old Ferranti process, this requires a second voltage and generates some heat.
* There might be some fundamental flaw that I've missed that causes bad things to happen.
* It uses an LM1117 instead of resistors for the second voltage required.

# BOM

iBOM can be found in BOM folder.
