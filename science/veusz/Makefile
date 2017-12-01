# Created by: Stas Timokhin <devel@stasyan.com>
# $FreeBSD: head/science/veusz/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	veusz
PORTVERSION=	1.19.1
PORTREVISION=	2
CATEGORIES=	science kde
MASTER_SITES=	http://download.gna.org/veusz/

MAINTAINER=	devel@stasyan.com
COMMENT=	Scientific plotting package

LICENSE=	GPLv2

RUN_DEPENDS=	${PYNUMPY}
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		pyqt:4 python:2.7
USE_PYQT=	gui svg
USE_PYTHON=	distutils autoplist

post-patch:
	@${REINPLACE_CMD} \
		-e 's,distutils\.command\.install ,setuptools\.command\.install ,' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
