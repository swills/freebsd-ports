# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: head/devel/py-dogpile.cache/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	dogpile.cache
PORTVERSION=	0.6.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Caching front-end based on the Dogpile lock

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gdbm>0:databases/py-gdbm@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
