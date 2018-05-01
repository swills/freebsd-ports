# $FreeBSD: head/textproc/py-asciinema/Makefile 468110 2018-04-23 17:38:47Z swills $

PORTNAME=	asciinema
PORTVERSION=	2.0.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Tool for recording and sharing terminal sessions

LICENSE=	GPLv3+

RUN_DEPENDS=	ca_root_nss>=0:security/ca_root_nss

USES=		python:3.3+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
