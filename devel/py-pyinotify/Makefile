# $FreeBSD: head/devel/py-pyinotify/Makefile 455210 2017-11-30 15:50:30Z mat $

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

.include <bsd.port.mk>
