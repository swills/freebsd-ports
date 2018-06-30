# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/x11/qimageblitz/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qimageblitz
PORTVERSION=	0.0.6
PORTREVISION=	3
CATEGORIES=	x11
MASTER_SITES=	KDE/stable/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Graphical effects and filters library for KDE4

USE_LDCONFIG=	yes
USE_QT=		corelib gui qmake_build moc_build uic_build rcc_build
USES=		cmake qt:4 tar:bzip2
USE_CXXSTD=	gnu++98

post-patch:
	${REINPLACE_CMD} -e \
		's,$${LIB_INSTALL_DIR}/pkgconfig,libdata/pkgconfig,' \
		${WRKSRC}/blitz/CMakeLists.txt

.include <bsd.port.mk>
