#include "friend.h"
#include "friendlist.h"
#include "friendwidget.h"

Friend::Friend(int FriendId, QString UserId)
    : friendId(FriendId), userId(UserId)
{
    widget = new FriendWidget(friendId, userId);
    chatForm = new ChatForm(this);
}

Friend::~Friend()
{
    delete chatForm;
    delete widget;
}

void Friend::setName(QString name)
{
    widget->name.setText(name);
    chatForm->setName(name);
}

void Friend::setStatusMessage(QString message)
{
    widget->statusMessage.setText(message);
    chatForm->setStatusMessage(message);
}

QString Friend::getName()
{
    return widget->name.text();
}