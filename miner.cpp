#include "miner.h"
#include <iostream>

using namespace std;

//baseMiner code

unsigned int baseMiner::botCount = 0;

void baseMiner::start() {
	cout << "Miner #" << id << " (" << designation << ") is starting" << endl;
}

void baseMiner::stop() {
	cout << "Miner #" << id << " (" << designation << ") is going to standby" << endl;
}

unsigned int baseMiner::getID() {
	return id;
}

string baseMiner::getDesignation() {
	return designation;
}

baseMiner::baseMiner(std::string resource) : designation(resource) {
	id = ++botCount;
}

baseMiner::~baseMiner() {
	botCount--;
}

//fluidMiner code

void fluidMiner::collect() {
	cout << "Water vacuums and hoses deployed." << endl << "Heater turned on. Waiting for the ice to melt." << 
		endl << "Liquid water moved to collection chamber." << endl << "Surface pump activated." << endl;
}

fluidMiner::fluidMiner(string resource) : baseMiner(resource) {}

fluidMiner::~fluidMiner() {}

//waterMiner code

void waterMiner::detect() {
	cout << "Initiating heat blast." << endl << "Directional humidity detector activated."  << 
		endl << "Ice located." << endl;
}

waterMiner::waterMiner() : fluidMiner("water") {}

waterMiner::~waterMiner() {}