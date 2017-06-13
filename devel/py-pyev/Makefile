# Created by: Denis Generalov <gd@rambler-co.ru>
# $FreeBSD: head/devel/py-pyev/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	pyev
PORTVERSION=	0.9.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gd.workbox@gmail.com
COMMENT=	Python libev interface

LICENSE=	GPLv3

LIB_DEPENDS=	libev.so:devel/libev

USES=		python
USE_PYTHON=	distutils autoplist
PYDISTUTILS_PKGVERSION=${PORTVERSION}${DISTVERSIONSUFFIX}

CFLAGS+=	-I${PREFIX}/include
LDFLAGS+=	-L${PREFIX}/lib

.include <bsd.port.mk>
