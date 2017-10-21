# Created by: Andreas Sommer <andreas.sommer87@googlemail.com>
# $FreeBSD: head/textproc/py-sphinx-hieroglyph/Makefile 452532 2017-10-20 14:56:06Z swills $

PORTNAME=	sphinx-hieroglyph
PORTVERSION=	1.0.0
DISTVERSIONPREFIX=	hieroglyph-
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	andreas.sommer87@googlemail.com
COMMENT=	Sphinx extension which builds HTML presentations

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sphinx>=1.4:textproc/py-sphinx

USE_GITHUB=	yes
GH_ACCOUNT=	nyergler
GH_PROJECT=	hieroglyph

USES=		python shebangfix
USE_PYTHON=	autoplist distutils
SHEBANG_FILES=	src/hieroglyph/themes/slides2/static/scripts/md/render.py

NO_ARCH=	yes

.include <bsd.port.mk>
