# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/www/py-libsass/Makefile 443031 2017-06-09 18:44:27Z sunpoet $

PORTNAME=	libsass
PORTVERSION=	0.13.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Straightforward binding of libsass for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six

BROKEN_powerpc64=	fails to compile: cc1plus: error: unrecognized command line option -std=c++0x

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
