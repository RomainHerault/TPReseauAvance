#include <string>
#include <vector>

class Node {

	private:

		std::string type;
		std::string position;

		int firstId;
		int secondId;
		int thirdId;

		int nbPorts;
		std::vector<Port> ports;
		
	public:

		static Node createLeaf();
		static Node createEdge();
		static Node createAggr();
		static Node createCore();
	
		Node();
		~Node();

		/*std::string getType();
		std::string getPosition();

		int getFirstId();
		int getSecondId();
		int getThirdId();

		int getNbPorts();

		std::vector<Port> getPosition();*/

		void connectOnPort(Node destination, int port);

		
}
