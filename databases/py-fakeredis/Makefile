# $FreeBSD: head/databases/py-fakeredis/Makefile 477676 2018-08-20 21:45:03Z rene $

PORTNAME=	fakeredis
PORTVERSION=	0.13.0.1
CATEGORIES=	databases
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Fake version of databases/py-redis for unit testing

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}redis>=0:databases/py-redis@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
