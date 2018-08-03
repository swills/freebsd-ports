# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-gitdb2/Makefile 475736 2018-07-29 19:15:46Z sunpoet $

PORTNAME=	gitdb2
PORTVERSION=	2.0.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Git Object Database

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}smmap2>=2.0.0:devel/py-smmap2@${PY_FLAVOR}

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}gitdb

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
