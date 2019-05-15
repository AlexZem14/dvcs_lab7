int main(int argc, char *argv[]) {  // 1
	QFile file("egor.txt"); // 4
	QTextStream stream(&file), stream2(&file2); // 4
	QStringList paths = QCoreApplication::libraryPaths(); // 1
	if (file.open(QIODevice::WriteOnly)) { // 1
		stream << "LIBS: " << paths.size() << endl; // 1
		foreach(QString libPath, paths) { // 1
			stream << libPath << endl; // 1
		} // 1
	} // 1
	stream << "NEW Bites:" << paths.size() << endl; // 9
	foreach(QString libPath, QCoreApplication::libraryPaths()) { // 2
		stream << libPath << endl; // 2
		int c = 50; // 9
	} // 
	stream << "OLD Bus DRIVERS:" << endl; // 10
	foreach(auto driver, QSqlDatabase::drivers()) { // 3
		stream2 << driver << endl; // 10
	} // 3
	int a = 5; // 5
	int b = 10; // 6
	for ( int i = 0; i < b; i++) { // 6
		a+=6; // 6
	} // 5
	QPluginLoader plug("./sqldrivers/qsqlmysql.dll"); // 7
	plug.load(); // 7
	auto t2 = plug.isLoaded(); // 7
	stream << "mysql plugin is loaded: " << plug.isLoaded() << endl; // 7
	stream << "NEW DRIVERS:" << endl; // 8
	foreach( auto driver, QSqlDatabase::drivers() ) { // 8
		stream << driver << endl; // 8
	} // 8
	file.close(); // 11

	QApplication a(argc, argv); // 11
	ClientWindow w; // 11
	//w.show(); // 11
	return a.exec(); // 11
}  // 1