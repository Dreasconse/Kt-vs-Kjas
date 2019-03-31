digraph "Base"
{
	ranksep=equally;
	ratio= 0.4;
	rankdir = "BT";
	node [shape=box width=3 height=2 labelloc=b fontsize=18];
	{
		node [color = green];
		"Microscale Manufacturing" [label="Microscale\nManufacturing\n10"];
		"Cultural Understanding" [label="Cultural\nUnderstanding\n9"];
		"Agricultural Understanding" [label="Agricultural\nUnderstanding\n8"];
		"Genetic Modification" [label="Genetic\nModification\n12"];
		"Information Pool" [label="Informaton Pool\nUnderstanding\n13"];
	}
	"Microscale Manufacturing"
	"Cultural Understanding" -> "Cultural Unification";
	"Hyperspace Mining" [label="Hyperspace\nMining\n4"];
	"Universal Translator" [label="Universal\nTranslator\n6"];
	"Industrial Understanding" [label="Industrial\nUnderstanding\n8"];
	Terraforming [shape=Msquare label="Terraforming\n\nYou may colonize lone ice\nworlds. This costs the Kt'zr'kt'rtl\nCost +3.\nEvery 3 ice worlds are\nworth one point\n\n30"];
	"Genetic Engineering" [label="Genetic\nEngineering\n8"];
	"Cultural Unification" [label="Cultural\nUnification\n5"];
	Nanotechnology [label="Nanotechnology\n6"];
	"Hyperspace Understanding" [label="Hyperspace\nUnderstanding\n4"];
	
	"Industrial Understanding" -> Terraforming;
	"Agricultural Understanding" -> Terraforming;
	"Genetic Modification" -> "Genetic Engineering";
	"Genetic Engineering" -> Terraforming;
	
	"Microscale Manufacturing" -> Nanotechnology;
	"Hyperspace Understanding" -> Nanotechnology;
	
	
	node [shape=hexagon width=.5 height=.5 labelloc=b fontsize=18];
	"Advanced Hyperdrives" [shape=doubleoctagon label="Advanced\nHyperdrives\n4"];
	
	{
		rank = same;
		node [color = green,style=filled];
		Hyperdrive [label="Light\nHyperdrive\n0"];
		Escort [label="Escort\n0"];
		"Colony Ship" [label="Colony Ship\n0"];
	}
	
	{
		node [color = green]
		Command [color = green label="Command\n10"];
		"Bulk Hyperdrive" [label="Bulk\nHyperdrive\n13"];
		"Battlestation" [color = green label="Battlestation\n23"];
		Shipyard [color = green label="Shipyard\n5"];
		Diplomats [color = green label="Diplomats\n6"];
		Destroyer [label="Destroyer\n7"];
		Lancer [label="Lancer\n7"];
	}
	"Hyperdrive 2" [label="Advanced\nLight Hyperdrive\n15"];
	"Escort 2" [label="Advanced\nEscort\n9"];
	"Colony Ship 2" [label="Advanced\nColony Ship\n9"];
	"Command 2" [label="Advanced\nCommand\n4"];
	"Bulk Hyperdrive 2" [label="Advanced Bulk\nHyperdrive\n16"];
	"Battlestation 2" [label="Advanced\nBattlestation\n25"];
	"Mobile Shipyard" [label="Mobile\nShipyard\n15"];
	"Diplomats 2" [label="Advanced\nDiplomats\n5"];
	"Drone Carrier" [label="Drone\nCarrier\n7"];
	"Drone Carrier 2" [label="Advanced\nDrone Carrier\n5"];
	"Interdictor" [label="Interdictor\n4"];
	"Interdictor 2"[label="Advanced\nInterdictor\n4"];
	Cruiser [label="Cruiser\n7"];
	"Cruiser 2" [label="Advanced\nCruiser\n9"];
	"Armored Hyperdrive" [label="Armored\nHyperdrive\n11"];
	"Armored Hyperdrive 2" [label="Advanced\nArmored Hyperdrive\n11"];
	Turtle [label="Turtle\n6"];
	"Turtle 2" [label="Advanced\nTurtle\n6"];
	Dreadnought [label="Dreadnought\n25"];
	"Dreadnought 2" [label="Advanced\nDreadnought\n12"];
	
	"Lancer 2" [label="Advanced\nLancer\n4"];
	Battleship [label="Battleship\n12"];
	"Battleship 2" [label="Advanced\nBattleship\n6"];
	
	"Destroyer 2" [label="Advanced\nDestroyer\n6"];
	"Planetary Shield" [label="Planetary\nShield\n11"];
	"Research Center" [label="Research\nCenter\n17"];
	
	
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
		Battleship -> "Battleship 2";
		Destroyer -> "Destroyer 2";
	}

	Command -> {"Drone Carrier" Interdictor "Dreadnought 2"};
	"Bulk Hyperdrive 2" -> "Advanced Hyperdrives" [headlabel="or"];
	"Hyperdrive 2"-> "Advanced Hyperdrives";
	"Advanced Hyperdrives" -> {Interdictor "Hyperspace Understanding" "Hyperspace Mining" Cruiser "Armored Hyperdrive 2"};
	"Armored Hyperdrive 2" ->"Cruiser 2";
	Battlestation -> Turtle;
	Turtle -> {"Interdictor 2" "Command 2" "Armored Hyperdrive" "Dreadnought" "Battleship 2" "Diplomats 2"};
	Lancer -> {"Cruiser 2" Dreadnought "Battlestation 2" Battleship "Turtle 2"};
	Destroyer -> {"Battlestation 2" Battleship};
	"Colony Ship 2" -> {"Planetary Shield" "Research Center"};
	"Planetary Shield" -> "Escort 2";
	"Research Center" -> {"Universal Translator" "Cultural Unification" Terraforming};
	Shipyard -> {"Mobile Shipyard" "Industrial Understanding"};
	Diplomats -> "Universal Translator";
	"Information Pool" -> Terraforming;
}