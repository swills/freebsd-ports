# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/py-pydocstyle/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pydocstyle
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Python docstring style checker

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE-MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}snowballstemmer>0:textproc/py-snowballstemmer@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}

USES=		python zip
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

.include <bsd.port.mk>
