# $FreeBSD: head/www/py-html5-parser/Makefile 472678 2018-06-18 08:36:59Z madpilot $

PORTNAME=	html5-parser
PORTVERSION=	0.4.5
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Fast implementation of the HTML 5 parsing spec for Python

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=3.8.0:devel/py-lxml@${FLAVOR}

USES=		pkgconfig python
USE_PYTHON=	autoplist distutils
USE_GNOME=	libxml2

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/html5_parser/html_parser.so

.include <bsd.port.mk>
