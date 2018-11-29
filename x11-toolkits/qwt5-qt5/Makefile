# $FreeBSD: head/x11-toolkits/qwt5-qt5/Makefile 486090 2018-11-28 13:23:36Z makc $

PORTNAME=	qwt5-qt5
PORTVERSION=	5.2.3
CATEGORIES=	x11-toolkits

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Qt Widgets for Technical Applications

USES=		compiler:c++11-lang gmake qmake qt:5
USE_QT=		core gui printsupport svg widgets buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

USE_GITHUB=	yes
GH_ACCOUNT=	gbm19
GH_TAGNAME=	510caed

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
