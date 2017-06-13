# Created by: ijliao
# $FreeBSD: head/www/py-cssutils/Makefile 435494 2017-03-05 18:50:09Z sunpoet $

PORTNAME=	cssutils
PORTVERSION=	1.0.2
PORTEPOCH=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	CSS Cascading Style Sheets library for Python

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE_GPLv3=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL3=	${WRKSRC}/COPYING.LESSER

OPTIONS_DEFINE=	EXAMPLES

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES?=		python

PORTEXAMPLES=	*

SLAVEDIRS=	www/py3-cssutils

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
