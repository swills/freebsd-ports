# Created by: Olivier Duchateau
# $FreeBSD: head/devel/lxqt-build-tools/Makefile 474277 2018-07-09 18:03:14Z jsm $

PORTNAME=	lxqt-build-tools
PORTVERSION=	0.5.0
CATEGORIES=	devel
MASTER_SITES=	LXQT/${PORTNAME}

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	Helpers CMake modules for LXQt

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/BSD-3-Clause

USES=		cmake:outsource lxqt pkgconfig qt:5 tar:xz
USE_QT=		qmake_build buildtools_build core
USE_GNOME=	glib20

.include <bsd.port.mk>
