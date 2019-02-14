#pragma once

#include<string>
#ifndef INVENTORY_H
#define INVENTORY_H

class InvItem
{
private:
	int id;
	std::string desc;
	int units;
public:
	InvItem();
	InvItem(int i, std::string d, int u = 0);
	void setUnits(int u);
	void setDesc(std::string d);
	int getUnits() const { return units; }
	std::string getDesc() const { return desc; };
	int getId()const { return id; }
};
#endif //inventeory_inventory_h
#pragma once
