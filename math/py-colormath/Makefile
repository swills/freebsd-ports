# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/math/py-colormath/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	colormath
PORTVERSION=	2.1.1
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Module that spares the user from directly dealing with color math

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=1.9.2,1:math/py-numpy@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}networkx>=1.9.1:math/py-networkx@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
