# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/devel/py-binplist/Makefile 470785 2018-05-24 14:55:55Z antoine $

PORTNAME=	binplist
PORTVERSION=	0.1.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Binary plist parser

LICENSE=	APACHE20

DEPRECATED=	Not depended upon anymore, no longer maintained upstream
EXPIRATION_DATE=	2018-06-25

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>=0:devel/py-pytz@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
