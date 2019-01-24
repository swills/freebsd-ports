# Created by: Joseph Koshy <jkoshy@FreeBSD.org>
# $FreeBSD: head/print/py-fonttools/Makefile 490655 2019-01-18 18:43:24Z sunpoet $

PORTNAME=	fonttools
PORTVERSION=	3.36.0
CATEGORIES=	print python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Open source library for manipulating fonts, written in Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python zip
USE_PYTHON=	autoplist concurrent distutils

MAKE_ENV=	FONTTOOLS_MANPATH="man"
NO_ARCH=	yes

.include <bsd.port.mk>
