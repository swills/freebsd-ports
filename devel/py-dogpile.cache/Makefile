# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: head/devel/py-dogpile.cache/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	dogpile.cache
PORTVERSION=	0.6.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Caching front-end based on the Dogpile lock

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gdbm>0:databases/py-gdbm@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
