# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/comms/py-hidapi/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	hidapi
PORTVERSION=	0.7.99
DISTVERSIONSUFFIX=	.post21
CATEGORIES=	comms python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cython interface to comms/hidapi

LICENSE=	GPLv3

LIB_DEPENDS=	libhidapi.so:comms/hidapi

USES=		python
USE_PYTHON=	autoplist distutils cython

post-patch:
	@${REINPLACE_CMD} -e 's|usb-1.0|usb|g' ${WRKSRC}/setup.py

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/hid.so

.include <bsd.port.mk>
