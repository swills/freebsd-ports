# Created by: Shaun Amott <shaun@FreeBSD.org>
# $FreeBSD: head/www/py-hpack/Makefile 438326 2017-04-12 02:29:31Z shaun $

PORTNAME=	hpack
PORTVERSION=	3.0.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	shaun@FreeBSD.org
COMMENT=	HTTP/2 header encoding (HPACK) logic implementation

LICENSE=	MIT

USES?=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

post-extract:
	${REINPLACE_CMD} -e 's/RFC 7541 ../RFC 7541 section/' ${WRKSRC}/HISTORY.rst

.include <bsd.port.mk>
