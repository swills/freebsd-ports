# $FreeBSD: head/math/py-bitmath/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	bitmath
PORTVERSION=	1.2.3
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}
DISTFILES=	${PORTNAME}-${PORTVERSION}-4.tar.gz

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Represent and manipulate file sizes with different prefix notations

LICENSE=	MIT

USES=		python:2.7
USE_PYTHON=	autoplist distutils

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}-4

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}progressbar231>0:misc/py-progressbar231@${FLAVOR}

.include <bsd.port.mk>
