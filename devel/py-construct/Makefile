# Created by: Piotr Florczyk <p.florczyk@adminworkshop.pl>
# $FreeBSD: head/devel/py-construct/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	construct
PORTVERSION=	2.5.3
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python module for parsing and building of data structures

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
