# $FreeBSD: head/devel/qt5-script/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	script
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 4-compatible scripting module

BROKEN_powerpc64=	Does not build

USE_QT5=	core buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake
# Keep make(1) from descending into src/script/obj/ (qmake:outsource
# doesn't work).
MAKE_ENV=	MAKEOBJDIR=.
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

post-patch:
	@${REINPLACE_CMD} -e '/scripttools/ d' \
		${WRKSRC}/src/src.pro

.include <bsd.port.mk>
