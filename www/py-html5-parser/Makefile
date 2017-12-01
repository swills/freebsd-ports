# $FreeBSD: head/www/py-html5-parser/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	html5-parser
PORTVERSION=	0.4.4
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Fast implementation of the HTML 5 parsing spec for Python

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=3.8.0:devel/py-lxml@${FLAVOR}

USES=		pkgconfig python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
