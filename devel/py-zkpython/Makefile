# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-zkpython/Makefile 481127 2018-10-02 19:06:16Z feld $

PORTNAME=	zkpython
PORTVERSION=	0.4.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python bindings to Apache Zookeeper

LICENSE=	APACHE20

LIB_DEPENDS=	libzookeeper_mt.so:devel/libzookeeper

USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
