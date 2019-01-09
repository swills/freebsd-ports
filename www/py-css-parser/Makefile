# Created by: ijliao
# $FreeBSD: head/www/py-css-parser/Makefile 489306 2019-01-05 08:23:44Z madpilot $

PORTNAME=	css-parser
PORTVERSION=	1.0.4
DISTVERSIONPREFIX=	v
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	CSS related utilities (parsing, serialization, etc) for python

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE_GPLv3=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL3=	${WRKSRC}/COPYING.LESSER

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

USE_GITHUB=	yes
GH_ACCOUNT=	ebook-utils

.include <bsd.port.mk>
