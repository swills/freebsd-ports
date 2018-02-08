# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/py-pep8-naming/Makefile 461188 2018-02-07 21:43:29Z amdmi3 $

PORTNAME=	pep8-naming
PORTVERSION=	0.5.0
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Check PEP-8 naming conventions, plugin for flake8

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flake8-polyfill>=0:devel/py-flake8-polyfill@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
