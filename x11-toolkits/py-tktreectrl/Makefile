# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/py-tktreectrl/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	tktreectrl
PORTVERSION=	2.0.1
CATEGORIES=	x11-toolkits tk python
MASTER_SITES=	SF/tkintertreectrl/TkinterTreectrl-${PORTVERSION:R}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TkinterTreectrl-${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TkTreectrl Python bindings

LIB_DEPENDS=	libtreectrl.so.1:x11-toolkits/tktreectrl
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tkinter>0:x11-toolkits/py-tkinter@${FLAVOR} \
		${PYTHON_SITELIBDIR}/Pmw/__init__.py:x11-toolkits/py-Pmw@${FLAVOR}

USES=		python:2.7 tk:run zip
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	TkinterTreectrl
PYDISTUTILS_PKGVERSION=	${PORTVERSION:R}

.include <bsd.port.mk>
