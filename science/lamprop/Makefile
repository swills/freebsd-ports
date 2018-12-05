# $FreeBSD$

PORTNAME=	lamprop
PORTVERSION=	3.8
CATEGORIES=	science python

MAINTAINER=	rsmith@xs4all.nl
COMMENT=	Calculates properties of fiber reinforced composites

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYNUMPY}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	rsmith-nl

PORTDOCS=	lamprop-manual.pdf

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/lamprop-manual.pdf ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
