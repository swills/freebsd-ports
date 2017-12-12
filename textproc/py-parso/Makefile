# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/textproc/py-parso/Makefile 456064 2017-12-11 20:08:13Z ultima $

PORTNAME=	parso
DISTVERSION=	0.1.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Python Parser

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=3.0.7:devel/py-pytest@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-cache>=0:devel/py-pytest-cache@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

do-test:
		cd ${WRKSRC} && ${PYTHON_CMD} -m pytest test

.include <bsd.port.mk>
