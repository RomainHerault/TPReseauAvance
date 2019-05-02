class Port {

	private:

		Node source;
		Node destination;

	public:

		Port();
		~Port();

		Node getDestination();
		void setDestination(Node destination);
}
