# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/www/py-bjoern/Makefile 465126 2018-03-20 22:35:42Z sunpoet $

PORTNAME=	bjoern
PORTVERSION=	2.2.0
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
