# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/www/py-bjoern/Makefile 471790 2018-06-05 18:56:40Z sunpoet $

PORTNAME=	bjoern
PORTVERSION=	2.2.1
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
