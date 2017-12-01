# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/math/py-fastcluster/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	fastcluster
PORTVERSION=	1.1.23
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Python functions for hierarchical clustering

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${FLAVOR}

PORTDOCS=	CITATION.txt \
		INSTALL.txt \
		NEWS.txt \
		README.txt

USES=		python
USE_PYTHON=	distutils autoplist concurrent

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
