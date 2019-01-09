# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>
# $FreeBSD: head/net/py-netifaces/Makefile 489221 2019-01-03 20:57:41Z bofh $

PORTNAME=	netifaces
PORTVERSION=	0.10.9
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
