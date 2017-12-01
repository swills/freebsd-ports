# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>
# $FreeBSD: head/net/py-netifaces/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	netifaces
PORTVERSION=	0.10.6
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Getting network addresses from Python 3

LICENSE=	MIT

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/netifaces.so

.include <bsd.port.mk>
