# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/security/py-mnemonic/Makefile 451836 2017-10-12 09:30:58Z ehaupt $

PORTNAME=	mnemonic
PORTVERSION=	0.18
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Implementation of Bitcoin BIP-0039

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbkdf2>=1.3:security/py-pbkdf2

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
