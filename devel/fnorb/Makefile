# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: head/devel/fnorb/Makefile 439048 2017-04-21 10:38:57Z amdmi3 $

PORTNAME=	Fnorb
PORTVERSION=	1.3
PORTREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/${PORTNAME}%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CORBA 2.0 ORB written in Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tkinter>0:x11-toolkits/py-tkinter

USES=		python shebangfix
USE_PYTHON=	distutils noegginfo
SHEBANG_FILES=	tests/interop/*.py tests/datatransfer/*.py
NO_ARCH=	yes

PYDISTUTILS_INSTALLNOSINGLE=	yes
PYDISTUTILS_SETUP=	${PYSETUP}

PLIST_SUB=	PYDISTUTILS_EGGINFO=${PYDISTUTILS_EGGINFO}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
