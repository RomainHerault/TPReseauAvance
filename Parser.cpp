void Parser::writeInFile(string data, string filepath)
{
	ofstream myfile;
	myfile.open(filepath, ofstream::app);
	if (myfile.is_open()) 
	{
		myfile << data << endl; 
		cout << "Ecriture de la ligne" << endl;
	}
	else
	{
		cout << "Erreur d'ouverture de fichier" << endl;
	}
	
	myfile.close();
}