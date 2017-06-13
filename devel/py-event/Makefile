# Created by: Alexander Botero-Lowry <alexbl@FreeBSD.org>
# $FreeBSD: head/devel/py-event/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PORTNAME=	event
DISTVERSIONPREFIX=	PYEVENT_
DISTVERSION=	0_3
PORTREVISION=	11
CATEGORIES=	devel net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python bindings for libevent

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libevent.so:devel/libevent

USE_GITHUB=	yes
GH_ACCOUNT=	jaraco
GH_PROJECT=	pyevent

BROKEN=		fails to build with libevent 2.1

USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/event.so

.include <bsd.port.mk>
