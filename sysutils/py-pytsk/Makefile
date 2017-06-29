# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/sysutils/py-pytsk/Makefile 444647 2017-06-29 14:30:20Z antoine $

PORTNAME=	pytsk
PORTVERSION=	20170508
PORTREVISION=	1
CATEGORIES=	sysutils security devel python
MASTER_SITES=	CHEESESHOP \
		https://github.com/py4n6/pytsk/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}3-${PORTVERSION}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python bindings for the Sleuthkit

LICENSE=	APACHE20

LIB_DEPENDS=	libtalloc.so:devel/talloc \
		libtsk.so:sysutils/sleuthkit

USES=		python
USE_PYTHON=	distutils autoplist

post-extract:
	${RM} ${WRKSRC}/pytsk3.c

post-patch:
	${REINPLACE_CMD} 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
