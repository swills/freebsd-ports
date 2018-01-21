# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/audio/py-tagpy/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	tagpy
PORTVERSION=	2013.1
PORTREVISION=	12
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Python bindings for Scott Wheeler's TagLib

LICENSE=	MIT

LIB_DEPENDS=	libboost_python.so:devel/boost-python-libs \
		libtag.so:audio/taglib

USES=		compiler:c++11-lang python shebangfix
HAS_CONFIGURE=	yes
CONFIGURE_SCRIPT=	configure.py
CONFIGURE_ARGS=	--taglib-inc-dir="${LOCALBASE}/include/taglib" \
		--taglib-lib-dir="${LOCALBASE}/lib" \
		--boost-inc-dir="${PYTHON_INCLUDEDIR},${LOCALBASE}/include" \
		--boost-lib-dir="${PYTHON_LIBDIR},${LOCALBASE}/lib" \
		--boost-python-libname="boost_python"
SHEBANG_FILES=	configure.py
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
