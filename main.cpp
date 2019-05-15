int main(int argc, char *argv[]) {  // 1
	QFile file("error.txt"); // 1
	QTextStream stream(&file); // 1
	QStringList paths = QCoreApplication::libraryPaths(); // 1
	if (file.open(QIODevice::WriteOnly)) { // 1
		stream << "LIBS: " << paths.size() << endl; // 1
		foreach(QString libPath, paths) { // 1
			stream << libPath << endl; // 1
		} // 1
	} // 1
}  // 1