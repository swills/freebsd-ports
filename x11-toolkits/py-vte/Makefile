# Created by: Alexander Nedotsukov <bland@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/py-vte/Makefile 428152 2016-12-08 19:52:19Z tijl $
#   $MCom: ports/x11-toolkits/py-vte/Makefile,v 1.5 2010/09/30 09:15:43 kwm Exp $

PORTREVISION=	3
CATEGORIES=	x11-toolkits gnome python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Python interface for VTE (Terminal widget)

MASTERDIR=	${.CURDIR}/../vte
BUILD_WRKSRC=	${WRKSRC}/python
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

USES=		python
USE_GNOME=	intltool pygtk2 vte
CONFIGURE_ARGS=	--enable-python \
		--disable-Bsymbolic \
		--disable-freetypetest

.include "${MASTERDIR}/Makefile"
