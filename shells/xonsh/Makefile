# $FreeBSD: head/shells/xonsh/Makefile 479833 2018-09-15 12:34:47Z 0mp $

PORTNAME=	xonsh
PORTVERSION=	0.7.8
CATEGORIES=	shells python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	roberfern@gmail.com
COMMENT=	Python-ish BASH-wards shell

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/license

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}amalgamate>=0:devel/py-amalgamate@${PY_FLAVOR}

NO_ARCH=	yes

USES=		python:3.4+
USE_PYTHON=	distutils autoplist concurrent

.include <bsd.port.mk>
