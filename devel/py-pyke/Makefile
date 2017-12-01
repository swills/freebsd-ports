# Created by: Thinker K.F. Li <thinker@branda.to>
# $FreeBSD: head/devel/py-pyke/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pyke
PORTVERSION=	1.1.1
CATEGORIES=	devel python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python Knowledge Engine

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ply>=2.3:devel/py-ply@${FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	distutils

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/LICENSE ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
