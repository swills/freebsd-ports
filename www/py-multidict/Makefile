# $FreeBSD: head/www/py-multidict/Makefile 451998 2017-10-13 14:06:20Z philip $

PORTNAME=	multidict
PORTVERSION=	3.2.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Multidict implementation

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	cython:lang/cython

USES=		python:3.4+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
