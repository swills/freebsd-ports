# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/textproc/py-hunspell/Makefile 476796 2018-08-09 18:36:58Z thierry $

PORTNAME=	hunspell
PORTVERSION=	0.5.5
CATEGORIES=	textproc devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Python module for the Hunspell spellchecker engine

LICENSE=	LGPL3

LIB_DEPENDS=	libhunspell-${HSPLVER}.so:textproc/hunspell

USES=		python
USES+=		localbase
USE_PYTHON=	distutils

HSPLVER=	1.6
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/hunspell.so

pre-configure:
	${REINPLACE_CMD} -e "s|/usr/include|${LOCALBASE}/include|"	\
		-e "s|= \['hunspell|= ['hunspell-${HSPLVER}|"		\
		${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
