# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-traceback2/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	traceback2
PORTVERSION=	1.4.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	New features in traceback backported to Python 2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>0:devel/py-pbr@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pbr>0:devel/py-pbr@${FLAVOR}

LICENSE=	PSFL

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
