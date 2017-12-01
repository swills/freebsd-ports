# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/www/py-libsass/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	libsass
DISTVERSION=	0.13.4
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Straightforward binding of libsass for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_powerpc64=	fails to compile: cc1plus: error: unrecognized command line option -std=c++0x

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
