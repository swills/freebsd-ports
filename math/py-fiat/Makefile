# $FreeBSD: head/math/py-fiat/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	fiat
PORTVERSION=	${MMVERSION}.0
PORTREVISION=	5
CATEGORIES=	math python
MASTER_SITES=	https://launchpad.net/${PORTNAME}/${MMVERSION}.x/release-${MMVERSION}/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-${MMVERSION}

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	FInite element Automatic Tabulator

LICENSE=	LGPL3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scientific>=0:math/py-scientific@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

MMVERSION=	1.1

.include <bsd.port.mk>
