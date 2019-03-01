digraph "Base"
{
	ranksep=equally;
	ratio= 0.44;
	rankdir = "BT";
	node [shape=box];
	"Industrial Understanding" -> "Terraforming";
	"Agricultural Understanding" -> Terraforming;
	"Genetic Modification" -> "Genetic Engineering";
	"Genetic Engineering" -> Terraforming;
	"Cultural Understanding" -> "Cultural Unification";
	"Microscale Manufacturing" -> Nanotechnology;
	"Hyperspace Understanding" -> Nanotechnology;
	"Hyperspace Mining";
	"Universal Translator";
	"Information Pool";
	
	"Advanced Hyperdrives" [shape=Msquare];

	node [shape=hexagon];
	{
		rank = same;
		Hyperdrive;
		Escort;
		"Colony Ship";
	}
	
	{
		rank = same;
		Command;
		"Bulk Hyperdrive";
		"Battlestation";
		Shipyard;
		Diplomats;
	}
	
	{
		weight = 2;
		edge [color=blue];
		"Drone Carrier"->"Drone Carrier 2";
		Interdictor -> "Interdictor 2";
		Command -> "Command 2";
		Hyperdrive -> "Hyperdrive 2";
		"Bulk Hyperdrive" -> "Bulk Hyperdrive 2";
		Cruiser-> "Cruiser 2";
		"Armored Hyperdrive" -> "Armored Hyperdrive 2";
		Battlestation -> "Battlestation 2";
		Turtle -> "Turtle 2";
		Dreadnought -> "Dreadnought 2";
		Escort -> "Escort 2";
		Lancer -> "Lancer 2";
		"Colony Ship" -> "Colony Ship 2";
		Diplomats -> "Diplomats 2";
	}

	Command -> {"Drone Carrier" Interdictor "Dreadnought 2"};
	Hyperdrive -> {"Bulk Hyperdrive" "Armored Hyperdrive"};
	"Bulk Hyperdrive 2" -> "Advanced Hyperdrives";
	"Hyperdrive 2"-> "Advanced Hyperdrives";
	"Advanced Hyperdrives" -> {Interdictor "Hyperspace Understanding" "Hyperspace Mining" Cruiser "Armored Hyperdrive 2"};
	"Armored Hyperdrive 2" ->"Cruiser 2";
	Battlestation -> Turtle;
	Turtle -> {"Interdictor 2" "Command 2" "Armored Hyperdrive" "Dreadnought" "Battleship 2" "Diplomats 2"};
	Escort ->{Lancer Destroyer};
	Lancer -> {Cruiser Dreadnought "Battlestation 2" Battleship};
	Destroyer -> {"Battlestation 2" "Destroyer 2"};
	Battleship -> "Battleship 2";
	"Colony Ship 2" -> {"Planetary Shield" "Research Center"};
	"Planetary Shield" -> "Escort 2";
	"Research Center" -> {"Universal Translator" "Information Pool" "Cultural Unification" Terraforming};
	Shipyard -> {"Mobile Shipyard" "Industrial Understanding"};
	Diplomats -> "Universal Translator";
}