# Created by: Shane Ambler
# $FreeBSD: head/graphics/py-openimageio/Makefile 476723 2018-08-09 06:58:30Z jbeich $

PORTREVISION=	4
CATEGORIES=	graphics multimedia python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	OpenImageIO python bindings

MASTERDIR=	${.CURDIR}/../openimageio
OPTIONS_EXCLUDE=${OPTIONS_DEFINE}

do-install:
	@${MKDIR} ${STAGEDIR}${PYTHON_SITELIBDIR}
	${INSTALL_LIB} ${BUILD_WRKSRC}/src/python/OpenImageIO.so ${STAGEDIR}${PYTHON_SITELIBDIR}

.include "${MASTERDIR}/Makefile"
