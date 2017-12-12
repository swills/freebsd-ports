# $FreeBSD: head/devel/py-wrapt/Makefile 455711 2017-12-07 16:00:18Z sunpoet $

PORTNAME=	wrapt
PORTVERSION=	1.10.11
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Decorators, wrappers and monkey patching

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	autoplist concurrent distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/wrapt/_wrappers.so

.include <bsd.port.mk>
