# Created by: wen@FreeBSD.org
# $FreeBSD: head/databases/pymongo/Makefile 481791 2018-10-11 08:13:06Z farrokhi $

PORTNAME=	pymongo
PORTVERSION=	3.7.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	farrokhi@FreeBSD.org
COMMENT=	Python driver for MongoDB

LICENSE=	APACHE20

USES=		python
USE_PYTHON=	autoplist concurrent distutils

CONFLICTS_INSTALL=	py[0-9][0-9]-pymongo28
.include <bsd.port.mk>
