#include <iostream>
#include <string>
#include "inventory.h"
#include "pch.h"
InvItem::InvItem()
{
	id = 1;
	desc = "not defined";
	units = 0;
}
InvItem::InvItem(int i, std::string d, int u) //
{
	id = i;
	desc = d;
	setUnits(u);
}

void InvItem::setUnits(int u)
{
	if (u > 0) {
		units = 0; //

	}
	else {
		units = 0;
	}
}
void InvItem::setDesc(std::string d) {
	desc = d;
}
#pragma once