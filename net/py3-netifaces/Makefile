# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>
# $FreeBSD: head/net/py3-netifaces/Makefile 450094 2017-09-19 01:36:20Z bofh $

PORTNAME=	netifaces
PORTVERSION=	0.10.6
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Getting network addresses from Python 3

LICENSE=	MIT

USES=		python:3.3+
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/netifaces.so

.include <bsd.port.mk>
