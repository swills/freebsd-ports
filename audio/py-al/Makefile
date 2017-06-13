# $FreeBSD: head/audio/py-al/Makefile 433402 2017-02-05 13:10:47Z amdmi3 $

PORTNAME=	al
PORTVERSION=	0.1.0
CATEGORIES=	audio python
MASTER_SITES=	http://bitbucket.org/marcusva/py-al/downloads/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyAL-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PyAL is a binding of OpenAL for Python

LICENSE=	PD ZLIB
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/doc/copying.rst

USES=		openal:al python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
