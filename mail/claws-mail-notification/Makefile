# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: head/mail/claws-mail-notification/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	notification
PORTREVISION=	0

COMMENT=	New mail notification plugin for Claws Mail

LIB_DEPENDS=	libcanberra-gtk.so:audio/libcanberra \
		libnotify.so:devel/libnotify

CLAWS_PLUGINS_BUILD=	notification

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
