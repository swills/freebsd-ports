# $FreeBSD: head/www/py-html5-parser/Makefile 446984 2017-07-31 16:22:20Z madpilot $

PORTNAME=	html5-parser
PORTVERSION=	0.4.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Fast implementation of the HTML 5 parsing spec for Python

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=3.8.0:devel/py-lxml

USES=		pkgconfig python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
