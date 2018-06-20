# Created by: ijliao
# $FreeBSD: head/print/ttfquery/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	ttfquery
PORTVERSION=	1.0.5
PORTREVISION=	5
CATEGORIES=	print
MASTER_SITES=	CHEESESHOP
DISTNAME=	TTFQuery-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	FontTools-based package for querying system fonts

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/license.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}fonttools>0:print/py-fonttools@${PY_FLAVOR} \
		${PYNUMPY}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
