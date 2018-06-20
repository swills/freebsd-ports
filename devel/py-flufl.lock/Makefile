# $FreeBSD: head/devel/py-flufl.lock/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	flufl.lock
PORTVERSION=	3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	acm@FreeBSD.org
COMMENT=	NFS-safe file locking with timeouts for POSIX systems

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}atpublic>=0:devel/py-atpublic@${PY_FLAVOR}

USES=		python:3.4+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
