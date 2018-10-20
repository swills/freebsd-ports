# $FreeBSD: head/x11/qt5-qev/Makefile 482584 2018-10-20 16:11:28Z tcberner $

PORTNAME=	qev
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt QWidget events introspection tool

USE_QT=		core widgets
USES=		compiler:c++11-lang qmake qt-dist:5,tools

WRKSRC_SUBDIR=	src/${PORTNAME}

# qev is not connected to qttool's build system, so we cannot just run qmake qt-dist:5,tools
# and set {BUILD,INSTALL}_WRKSRC.
# Instead, we run qmake qt-dist:5,tools from src/${PORTNAME} but need to copy .qmake qt-dist:5,tools.conf to
# it for all required variables to be set (MODULE_VERSION etc).
post-patch:
	${CP} ${WRKSRC}/../../.qmake.conf ${WRKSRC}

.include <bsd.port.mk>
