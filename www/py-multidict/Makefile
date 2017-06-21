# $FreeBSD: head/www/py-multidict/Makefile 443712 2017-06-16 16:27:34Z wg $

PORTNAME=	multidict
PORTVERSION=	2.1.6
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
