# Created by: bland@FreeBSD.org
# $FreeBSD: head/devel/py-pyicu/Makefile 453319 2017-11-01 22:08:47Z jbeich $

PORTNAME=	pyicu
PORTVERSION=	1.9.4
PORTREVISION=	5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyICU-${PORTVERSION}

MAINTAINER=	bland@FreeBSD.org
COMMENT=	Python extension wrapping IBM's ICU C++ API #'

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libicudata.so:devel/icu

USES?=		python
USE_PYTHON=	distutils autoplist

MAKE_ENV+=	PYICU_INCLUDES="${LOCALBASE}/include" \
		PYICU_CFLAGS="${CXXFLAGS:ts:}" \
		PYICU_LFLAGS="-L${LOCALBASE}/lib"
CFLAGS+=	-w -DPYICU_VER=\"${PORTVERSION}\"

pre-configure:
	@if [ ! -e ${LOCALBASE}/lib/libicule.so ]; then \
		${REINPLACE_CMD} "s/, 'icule'//" ${WRKSRC}/${PYSETUP}; \
	fi

.include <bsd.port.mk>
