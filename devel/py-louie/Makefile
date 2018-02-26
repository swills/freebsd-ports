# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/devel/py-louie/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	Louie
PORTVERSION=	1.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Signal dispatching mechanism

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0.8.3:devel/py-nose@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
