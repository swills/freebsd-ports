# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: head/devel/py-foolscap/Makefile 442881 2017-06-07 19:12:17Z sunpoet $

PORTNAME=	foolscap
PORTVERSION=	0.12.4
CATEGORIES=	devel python
MASTER_SITES=   http://foolscap.lothar.com/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	RPC protocol for Twisted Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>=0.13:security/py-openssl
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		python twisted
USE_PYTHON=	autoplist distutils

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
