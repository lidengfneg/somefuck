//显示类
//显示html


#include "html_view.h"
#include <QWebChannel>
#include <QWebEngineSettings>


html_view::html_view(int port, QWidget *parent) : port_(port), QWebEngineView(parent)
{

    page_=new QWebEnginePage(this);
    auto *webChannel = new QWebChannel(this);
    webChannel->registerObject("widget", this);
    //
    page_->setWebChannel(webChannel);
    //
    page_->settings()->setAttribute(QWebEngineSettings::LocalContentCanAccessRemoteUrls, true);
    page_->settings()->setAttribute(QWebEngineSettings::WebGLEnabled, true);
    page_->settings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    //设置页面对象
    this->setPage(page_);
    // QUrl url=QUrl("https://threejs.org/examples/#webgl_animation_keyframes")
    QUrl url = QUrl("http://www.baidu.com");
    //this->setUrl(url);
    this->load(url);
    // this->page()->set


}
