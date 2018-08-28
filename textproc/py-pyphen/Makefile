# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/textproc/py-pyphen/Makefile 478178 2018-08-27 06:14:21Z yuri $

PORTNAME=	pyphen
PORTVERSION=	0.9.5
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Pyphen-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Module to hyphenate text based on Hunspell dictionaries

LICENSE=	GPLv2 LGPL21 MPL11
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING.GPL
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING.LGPL
LICENSE_FILE_MPL11=	${WRKSRC}/COPYING.MPL

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
