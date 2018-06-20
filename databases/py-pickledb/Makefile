# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/databases/py-pickledb/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pickleDB
PORTVERSION=	0.6.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Lightweight, fast, and simple key-value store

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}simplejson>=0:devel/py-simplejson@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
