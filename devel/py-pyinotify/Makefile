# $FreeBSD: head/devel/py-pyinotify/Makefile 493802 2019-02-24 19:43:34Z jpaetzel $

PORTNAME=	pyinotify
PORTVERSION=	0.9.6
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP/source/p/pyinotify
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jpaetzel@FreeBSD.org
COMMENT=	Python interface to (lib)inotify

LICENSE=	MIT

LIB_DEPENDS=	libinotify.so:devel/libinotify

USES=		python
USE_PYTHON=	distutils py3kplist

NO_ARCH=	YES

.include <bsd.port.mk>
