# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: head/devel/py-boto/Makefile 442797 2017-06-06 20:52:01Z rm $

PORTNAME=	boto
PORTVERSION=	2.47.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Python interface to Amazon Web Services

LICENSE=	MIT

NO_ARCH=	yes
USES=		python:2.7+
USE_PYTHON=	autoplist concurrent distutils

CONFLICTS_INSTALL=	p5-Net-Amazon-Route53-[0-9]*

.include <bsd.port.mk>
