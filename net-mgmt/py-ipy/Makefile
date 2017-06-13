# Created by: ijliao
# $FreeBSD: head/net-mgmt/py-ipy/Makefile 405425 2016-01-07 11:16:14Z miwi $

PORTNAME=	ipy
PORTVERSION=	0.83
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	IPy-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python module for handling IPv4 and IPv6 Addresses and Networks

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

do-test:
	${PYTHON_CMD} ${WRKSRC}/test/test_IPy.py

.include <bsd.port.mk>
