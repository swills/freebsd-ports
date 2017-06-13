# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/textproc/py-html2text/Makefile 440442 2017-05-08 17:21:49Z dbaio $

PORTNAME=	html2text
PORTVERSION=	2016.9.19
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Convert HTML into clean plain ASCII text

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

CONFLICTS=	html2text-[0-9]*

.include <bsd.port.mk>
