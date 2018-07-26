# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/archivers/py-libarchive-c/Makefile 475285 2018-07-25 00:13:51Z koobs $

PORTNAME=	libarchive-c
PORTVERSION=	2.8
PORTREVISION=	1
CATEGORIES=	archivers python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python interface to libarchive

LICENSE=	LGPL20+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=0:devel/py-pytest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest -vv

.include <bsd.port.mk>
