# Created by: Tim Bishop <tim@bishnet.net>
# $FreeBSD: head/devel/py-statgrab/Makefile 413213 2016-04-13 16:01:02Z tdb $

PORTNAME=	statgrab
PORTVERSION=	0.7
CATEGORIES=	devel python
MASTER_SITES=	http://ftp.mirrorservice.org/pub/i-scream/py${PORTNAME}/ \
		http://ftp.i-scream.org/pub/i-scream/py${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	tdb@FreeBSD.org
COMMENT=	Set of Python bindings for libstatgrab

LIB_DEPENDS=	libstatgrab.so:devel/libstatgrab

USES=		pkgconfig python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
