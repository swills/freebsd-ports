# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD$

PORTNAME=	inflect
PORTVERSION=	1.0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generate plurals, singular nouns, ordinals, indefinite articles

LICENSE=	AGPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING.txt

USES=		python
USE_PYTHON=	autoplist distutils

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR}

do-test:
	(cd ${WRKSRC} ; ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test)

.include <bsd.port.mk>
