# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/graphics/py-gimp/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	gimp
PORTREVISION=	1
PORTEPOCH=	0
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GIMP python plugin

GIMP_SLAVE=	pygimp

USES=		python:2.7
USE_GNOME=	pygtk2

CONFIGURE_ARGS=	--enable-python
PLIST=	${.CURDIR}/pkg-plist

BUILD_WRKSRC=	${WRKSRC}/plug-ins/pygimp
INSTALL_WRKSRC=	${WRKSRC}/plug-ins/pygimp

MASTERDIR=	${.CURDIR}/../../graphics/gimp-app

.include "${MASTERDIR}/Makefile"
