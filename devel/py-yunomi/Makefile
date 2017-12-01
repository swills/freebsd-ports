# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/py-yunomi/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	yunomi
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Metrics library with rate, distribution and timing information

LICENSE=	MIT

PORTDOCS=	README.rst \
		HISTORY.rst

USES=		python:2.7
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	DOCS

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
