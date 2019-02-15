# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>
# $FreeBSD: head/net/py-wsproto/Makefile 492890 2019-02-14 00:29:04Z bofh $

PORTNAME=	wsproto
PORTVERSION=	0.13.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Sans-IO WebSocket protocol implementation

LICENSE=	MIT

RUN_DEPENDS=	${PY_ENUM34} \
		${PYTHON_PKGNAMEPREFIX}h11>=0.8.1:net/py-h11@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
