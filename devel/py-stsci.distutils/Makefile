# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-stsci.distutils/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	stsci.distutils
PORTVERSION=	0.3.7
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Packaging utilities used by some of STScI's packages

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}d2to1>0:devel/py-d2to1@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
