# Created by: Olivier Duchateau
# $FreeBSD: head/devel/libqtxdg/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	libqtxdg
PORTVERSION=	3.2.0
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	LXQT/${PORTNAME}

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	Qt implementation of freedesktop.org xdg specs

LICENSE=	LGPL21+

USES=		cmake compiler:c++11-lib lxqt pkgconfig qt:5 tar:xz
USE_LDCONFIG=	yes
USE_QT=		buildtools_build qmake_build core dbus gui svg widgets \
		xml

.include <bsd.port.mk>
