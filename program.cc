#include <iostream>
#include <gtkmm.h>
class MainWindow : public Gtk::Window
{
public:
	MainWindow();
	virtual ~MainWindow();
protected:
	void on_button_clicked();
	Gtk::Button m_button;
};
MainWindow::MainWindow() : m_button("Hello World ボタン")
{
	set_border_width(10);
	m_button.signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_clicked));
	add(m_button);
	m_button.show();
}
MainWindow::~MainWindow()
{
}
void MainWindow::on_button_clicked()
{
	std::cout << "Hello World" << std::endl;
	Gtk::MessageDialog diag( *this, "GTKmm3 Hello Worldですよ！", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_OK_CANCEL);
	diag.set_title( "タイトル" );
	switch( diag.run() ){
		case Gtk::RESPONSE_OK:
			break;
		case Gtk::RESPONSE_CANCEL:
			break;
	}
}
int main(int argc, char* argv[])
{
	auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");
	MainWindow mainWindow;
	return app->run(mainWindow);
	return 0;
}
