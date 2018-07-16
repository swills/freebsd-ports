# $FreeBSD$

PORTNAME=	poppler-qt4
DISTVERSIONPREFIX=	v
DISTVERSION=	0.24.0
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	martin.dieringer@gmx.de
COMMENT=	Python bindings for the Poppler-Qt4 PDF rendering library

LICENSE=	LGPL21 LGPL3
LICENSE_COMB=	dual

LIB_DEPENDS=	libpoppler-qt4.so:graphics/poppler-qt4

USES=		compiler:c++11-lang pkgconfig pyqt:4 python
USE_PYQT=	gui xml sip_build
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	wbsoft
GH_PROJECT=	python-${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}/${PYTHON_SITELIBDIR}/popplerqt4.so

.include <bsd.port.mk>
