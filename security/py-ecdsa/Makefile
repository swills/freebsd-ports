# Created by: Neil Booth
# $FreeBSD: head/security/py-ecdsa/Makefile 371453 2014-10-24 16:50:42Z mva $

PORTNAME=	ecdsa
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kyuupichan@gmail.com
COMMENT=	ECDSA cryptographic signature library (pure python)

LICENSE=	MIT

USES=		python
USE_PYTHON=	distutils autoplist

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
