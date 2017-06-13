# $FreeBSD: head/devel/py-urwidtrees/Makefile 413342 2016-04-15 13:49:36Z amdmi3 $

PORTNAME=	urwidtrees
PORTVERSION=	1.0.2
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	geier@lostpackets.de
COMMENT=	Tree widgets for py-urwid

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}urwid>=1.0.0:devel/py-urwid
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}urwid>=1.0.0:devel/py-urwid

USE_GITHUB=	yes
GH_ACCOUNT=	pazz

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
