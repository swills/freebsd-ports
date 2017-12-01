# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/security/py-ssh/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	ssh
PORTVERSION=	1.8.0
PORTREVISION=	1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Python SSH2 protocol library

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>=2.1:security/py-pycrypto@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
