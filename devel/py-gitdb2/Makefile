# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-gitdb2/Makefile 482248 2018-10-16 20:04:20Z sunpoet $

PORTNAME=	gitdb2
PORTVERSION=	2.0.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Git Object Database

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}smmap2>=2.0.0:devel/py-smmap2@${PY_FLAVOR}

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}gitdb

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
