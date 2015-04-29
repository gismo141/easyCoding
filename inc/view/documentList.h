/**
 * Copyright 2015 <michael.r141@gmail.com>
 */

#ifndef DOCUMENT_LIST_H
#define DOCUMENT_LIST_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QTreeWidget>

class documentList : public QWidget {
  Q_OBJECT
 private:
 protected:
  QMainWindow* thisParent;
  QVBoxLayout* documentLayout;
  QLabel*  documentListLabel;
  QTreeWidget* documentTree;
 public:
  explicit documentList(QMainWindow* parent = 0);
};

#endif  // DOCUMENT_LIST_H
