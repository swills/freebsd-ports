# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/py-flake8-polyfill/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	flake8-polyfill
PORTVERSION=	1.0.2
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Polyfill package for Flake8 plugins

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flake8>=0:devel/py-flake8@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
