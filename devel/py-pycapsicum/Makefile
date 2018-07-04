# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-pycapsicum/Makefile 473699 2018-07-02 04:00:29Z linimon $

PORTNAME=	pycapsicum
PORTVERSION=	1.0
CATEGORIES=	devel security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	stillson@gmail.com
COMMENT=	Python interface to capsicum security

LICENSE=	BSD3CLAUSE

BROKEN_mips=		fails to compile: _pycapsicum.c: error: 'for' loop initial declaration used outside C99 mode
BROKEN_mips64=		fails to compile: _pycapsicum.c: error: 'for' loop initial declaration used outside C99 mode
BROKEN_powerpc64=	fails to compile: _pycapsicum.c: error: 'for' loop initial declaration used outside C99 mode

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
