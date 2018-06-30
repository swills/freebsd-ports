# Created by: Stas Timokhin <devel@stasyan.com>
# $FreeBSD: head/science/py-veusz/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	veusz
PORTVERSION=	1.19.1
PORTREVISION=	3
CATEGORIES=	science kde
MASTER_SITES=	http://download.gna.org/veusz/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	devel@stasyan.com
COMMENT=	Scientific plotting package

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYNUMPY}
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		python pyqt:4 qt:4 shebangfix
USE_PYQT=	gui svg
USE_PYTHON=	distutils concurrent autoplist
USE_QT=		corelib gui xml
SHEBANG_FILES=	examples/embedexample.py

post-patch:
	@${REINPLACE_CMD} \
		-e 's,distutils\.command\.install ,setuptools\.command\.install ,' \
		${WRKSRC}/setup.py

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/veusz/helpers/*.so

.include <bsd.port.mk>
