#include <stdout.h>

int main(int argc, char **argv)
{
	try {
		const QDateTime dt = QDateTime::currentDateTime();
		const QString date = dt.toString("yyyy/MM/dd hh:mm:ss");
		const QString name = Jstr("Œ»İ“ú : ");
		
		QTextStream(stdout) << name << date << endl;
		return 0;
		
	} catch (const runtime_error &e) {
		cout << "runtime_error : " << e.what() << endl;
	} catch (const exception &e) {
		cout << "some exception : " << e.what() << endl;
	}
	exit(0);
}

