# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/devel/py-pyxb/Makefile 446555 2017-07-25 04:40:01Z koobs $

PORTNAME=	pyxb
PORTVERSION=	1.2.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyXB-${DISTVERSION}

MAINTAINER=	amutu@amutu.com
COMMENT=	Python XML schema bindings

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libxml2>0:textproc/py-libxml2

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
