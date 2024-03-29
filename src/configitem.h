//======================================================================
// File:		configitem.h
// Author:	Matthias Toussaint
// Created:	Sat Oct 19 17:36:58 CEST 2002
//----------------------------------------------------------------------
// Permission to use, copy, modify, and distribute this software and its
// documentation  for any  purpose and  without fee is  hereby  granted,
// provided  that below copyright notice appear  in all copies  and that
// both  that  copyright  notice and  this permission  notice  appear in
// supporting documentation.
// 
// This  file is  provided AS IS  with no  warranties  of any kind.  The
// author shall  have no liability  with respect  to the infringement of
// copyrights, trade  secrets  or any patents by  this file  or any part
// thereof.  In no event will the author be liable  for any lost revenue
// or profits or other special, indirect and consequential damages.
//----------------------------------------------------------------------
// (c) 2000-2002 Matthias Toussaint
//======================================================================

#ifndef CONFIGITEM_HH
#define CONFIGITEM_HH

#include <qlistview.h>

class ConfigItem : public QListViewItem
{
public:
  ConfigItem( int id, const QPixmap &, const QString & label, QListView *parent );
  virtual ~ConfigItem();
  
  int id() const { return m_id; }

protected:
  int m_id;
  
};

#endif // CONFIGITEM_HH
