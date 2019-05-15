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
	stream << "NEW LIBS:" << paths.size() << endl; // 2
	foreach(QString libPath, QCoreApplication::libraryPaths()) { // 2
		stream << libPath << endl; // 2
	} // 
	stream << "OLD DRIVERS:" << endl; // 3
	foreach(auto driver, QSqlDatabase::drivers()) { // 3
		stream << driver << endl; // 3
	} // 3
	int a = 5; // 5
	int b = 10; // 6
	for ( int i = 0; i < b; i++) { // 6
		a+=6; // 6
	} // 5
}  // 1