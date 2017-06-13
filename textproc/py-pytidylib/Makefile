# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/textproc/py-pytidylib/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	pytidylib
PORTVERSION=	0.2.4
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python wrapper for HTML Tidy (tidylib)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libtidy.so:www/tidy-lib

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
