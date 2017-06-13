# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/audio/py-pylast/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	pylast
PORTVERSION=	1.4.2
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Python interface to Last.fm and Libre.fm

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
