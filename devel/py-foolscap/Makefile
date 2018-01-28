# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: head/devel/py-foolscap/Makefile 460022 2018-01-26 18:11:44Z sunpoet $

PORTNAME=	foolscap
PORTVERSION=	0.13.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	RPC protocol for Twisted Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>=0:security/py-openssl@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}twisted>=16.0.0:devel/py-twisted@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

do-test:
	cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
