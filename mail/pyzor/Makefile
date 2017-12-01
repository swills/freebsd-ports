# Created by: ijliao
# $FreeBSD: head/mail/pyzor/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pyzor
PORTVERSION=	1.0.0
CATEGORIES=	mail python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	chalpin@cs.wisc.edu
COMMENT=	Collaborative, networked system to detect and block spam

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gdbm>=0:databases/py-gdbm@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
