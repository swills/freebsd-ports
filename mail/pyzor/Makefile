# Created by: ijliao
# $FreeBSD: head/mail/pyzor/Makefile 415904 2016-05-26 18:06:26Z amdmi3 $

PORTNAME=	pyzor
PORTVERSION=	1.0.0
CATEGORIES=	mail python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	chalpin@cs.wisc.edu
COMMENT=	Collaborative, networked system to detect and block spam

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gdbm>=0:databases/py-gdbm

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
