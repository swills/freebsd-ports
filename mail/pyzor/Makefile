# Created by: ijliao
# $FreeBSD: head/mail/pyzor/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pyzor
PORTVERSION=	1.0.0
CATEGORIES=	mail python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	chalpin@cs.wisc.edu
COMMENT=	Collaborative, networked system to detect and block spam

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gdbm>=0:databases/py-gdbm@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
