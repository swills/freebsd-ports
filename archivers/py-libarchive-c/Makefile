# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/archivers/py-libarchive-c/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	libarchive-c
PORTVERSION=	2.2
CATEGORIES=	archivers python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python interface to libarchive

LICENSE=	LGPL20+

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=0:devel/py-pytest@${PY_FLAVOR}

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils

GH_ACCOUNT=	Changaco
GH_PROJECT=	python-${PORTNAME}

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest

.include <bsd.port.mk>
