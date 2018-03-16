# Created by: ijliao
# $FreeBSD: head/print/ttfquery/Makefile 464084 2018-03-10 17:46:04Z gerald $

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

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}fonttools>0:print/py-fonttools@${FLAVOR} \
		${PYNUMPY}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
