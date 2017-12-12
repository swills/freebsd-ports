# Created by: Nicola Vitale	<nivit@email.it>
# $FreeBSD: head/textproc/py-enchant/Makefile 455308 2017-12-01 20:49:18Z amdmi3 $

PORTNAME=	enchant
PORTVERSION=	1.6.11
CATEGORIES=	textproc devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Spellchecking library for Python based on the Enchant library

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libenchant.so:textproc/enchant

OPTIONS_DEFINE=	WX
OPTIONS_DEFAULT=WX
WX_DESC=	Provide a wxSpellCheckerDialog
OPTIONS_SUB=	yes

USES=		python:2.7
USE_PYTHON=	distutils
NO_ARCH=	yes

WX_USE=		WX=3.0+
WX_VARS=	WX_COMPS=python:run

PLIST_SUB+=	VER=${PORTVERSION}

post-install-WX-off:
	${RM} ${STAGEDIR}${PYTHON_SITELIBDIR}/${PORTNAME}/checker/wxSpellCheckerDialog*

.include <bsd.port.mk>
