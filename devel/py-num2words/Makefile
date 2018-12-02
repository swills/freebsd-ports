# Created by: Jonas Palm <jonaspalm@posteo.de>
# $FreeBSD: head/devel/py-num2words/Makefile 486482 2018-12-02 20:22:57Z antoine $

PORTNAME=	num2words
PORTVERSION=	0.5.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jonaspalm@posteo.de
COMMENT=	Library to convert numbers to words in multiple languages

LICENSE=	LGPL21

BROKEN=		fails to configure, non ascii char in position 1557 of LONG_DESC

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
