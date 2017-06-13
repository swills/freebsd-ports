# $FreeBSD: head/databases/py-python-rrdtool/Makefile 441925 2017-05-28 21:18:04Z antoine $

PORTNAME=	python-rrdtool
PORTVERSION=	1.4.7
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Python bindings for RRDTool, the graphing and logging utility

LICENSE=	LGPL3

LIB_DEPENDS=	librrd.so:databases/rrdtool

USES=		groff pkgconfig python
USE_GNOME=	cairo glib20 libxml2
USE_PYTHON=	distutils autoplist

LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
