# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/security/py-scrypt/Makefile 493652 2019-02-23 07:40:01Z yuri $

PORTNAME=	scrypt
DISTVERSION=	0.8.13
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Bindings for the scrypt key derivation function library

LICENSE=	BSD2CLAUSE

USES=		python ssl
USE_PYTHON=	autoplist distutils

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/_scrypt.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
