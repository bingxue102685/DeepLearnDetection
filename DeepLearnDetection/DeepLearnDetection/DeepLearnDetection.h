#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DeepLearnDetection.h"

class DeepLearnDetection : public QMainWindow
{
    Q_OBJECT

public:
    DeepLearnDetection(QWidget *parent = Q_NULLPTR);

private:
    Ui::DeepLearnDetectionClass ui;
};
