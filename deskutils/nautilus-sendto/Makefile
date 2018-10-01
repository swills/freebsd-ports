# Created by: Gustau Perez i Querol <gustau.perez@gmail.com>
# $FreeBSD: head/deskutils/nautilus-sendto/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	nautilus-sendto
PORTVERSION=	3.8.3
CATEGORIES=	deskutils
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Convenience application to send a file via email

USE_GNOME=	intlhack introspection:build
USES=		gettext gmake localbase pathfix pkgconfig tar:xz
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
CPPFLAGS+=	-Wno-error=format-nonliteral

.include <bsd.port.mk>
