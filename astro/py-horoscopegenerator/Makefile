# $FreeBSD: head/astro/py-horoscopegenerator/Makefile 419779 2016-08-07 14:50:19Z kevlo $

PORTNAME=	HoroscopeGenerator
PORTVERSION=	0.1.8
PORTREVISION=	1
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	Generate horoscopes using context-free grammar

LICENSE=	MIT

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nltk>0:textproc/py-nltk

.include <bsd.port.mk>
