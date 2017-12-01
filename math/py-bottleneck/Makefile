# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/math/py-bottleneck/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	bottleneck
PORTVERSION=	1.2.1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Bottleneck-${PORTVERSION}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Collection of fast NumPy array functions written in Cython

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist cython

OPTIONS_DEFINE=	DOCS
DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}
PORTDOCS=	*

regression-test: build
	@cd ${WRKSRC} && nosetests

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.rst ${WRKSRC}/RELEASE.rst ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/doc/source/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
