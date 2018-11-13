# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/py-pycodestyle/Makefile 484815 2018-11-12 18:35:46Z amdmi3 $

PORTNAME=	pycodestyle
PORTVERSION=	2.4.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Python style guide checker

LICENSE=	MIT # mentioned as "Expat"

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
