#ifndef HTML_VIEW_H
#define HTML_VIEW_H

#include <QObject>
#include<QtWebEngineWidgets/QWebEngineView>
class html_view : public QWebEngineView
{
    Q_OBJECT
public:
    explicit html_view(int port, QWidget *parent = nullptr);

private:
    QWebEnginePage *page_;

    int port_;
};

#endif // HTML_VIEW_H
