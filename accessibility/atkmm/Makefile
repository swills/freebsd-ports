# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME=	atkmm
PORTVERSION=	2.28.1
CATEGORIES=	accessibility gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	C++ wrapper for ATK API library

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USES=		compiler:c++11-lang gnome localbase:ldflags meson pathfix \
		pkgconfig python:3.4+ tar:xz
USE_GNOME=	atk glibmm
USE_LDCONFIG=	yes
BINARY_ALIAS=	python3=${PYTHON_VERSION}

.include <bsd.port.mk>
