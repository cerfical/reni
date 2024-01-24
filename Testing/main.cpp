#include <RENI/RENI.hpp>
#include <iostream>

using namespace RENI;

class MainWindow : public RenderWindow {
public:

	MainWindow() {
		auto rect = rg::makeNode<rg::Rect2D>(Point2D(50, 50), Point2D(200, 300));
		m_scene.addRootNode(rect);
	}

private:
	void onRender() {
		renderDevice()->clear({ 255, 255, 255, 255 });
		renderDevice()->drawScene(m_scene);
	}

	RenderGraph m_scene;
};

int main() {
	auto window = MainWindow();
	window.setTitle("Simple Window");
	window.show();

	return UiMainLoop::get()->exec();
}
