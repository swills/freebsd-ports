# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/py-flake8-docstrings/Makefile 458535 2018-01-09 15:38:12Z amdmi3 $

PORTNAME=	flake8-docstrings
PORTVERSION=	1.3.0
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Extension for flake8 which uses pydocstyle to check docstrings

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flake8>=0:devel/py-flake8@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}flake8-polyfill>=0:devel/py-flake8-polyfill@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pydocstyle>=0:devel/py-pydocstyle@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
