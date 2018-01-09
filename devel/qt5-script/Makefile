# $FreeBSD: head/devel/qt5-script/Makefile 458293 2018-01-06 21:30:31Z rakuco $

PORTNAME=	script
DISTVERSION=	${QT5_VERSION}
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
