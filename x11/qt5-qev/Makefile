# $FreeBSD: head/x11/qt5-qev/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	qev
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt QWidget events introspection tool

USE_QT5=	core widgets
QT_DIST=	tools
USES=		qmake

WRKSRC_SUBDIR=	src/${PORTNAME}

# qev is not connected to qttool's build system, so we cannot just run qmake
# and set {BUILD,INSTALL}_WRKSRC.
# Instead, we run qmake from src/${PORTNAME} but need to copy .qmake.conf to
# it for all required variables to be set (MODULE_VERSION etc).
post-patch:
	${CP} ${WRKSRC}/../../.qmake.conf ${WRKSRC}

.include <bsd.port.mk>
