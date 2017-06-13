# $FreeBSD: head/devel/py-wrapt/Makefile 438634 2017-04-16 11:07:36Z sunpoet $

PORTNAME=	wrapt
PORTVERSION=	1.10.10
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
