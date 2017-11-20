# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/www/py-bjoern/Makefile 454552 2017-11-20 13:22:44Z sunpoet $

PORTNAME=	bjoern
PORTVERSION=	2.0.2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Fast Python WSGI server

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libev.so:devel/libev

LDFLAGS+=	-lc
USES=		localbase python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/*.so

.include <bsd.port.mk>
