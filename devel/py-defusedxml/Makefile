# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-defusedxml/Makefile 465132 2018-03-20 22:36:15Z sunpoet $

PORTNAME=	defusedxml
PORTVERSION=	0.5.0
CATEGORIES=	devel python textproc
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	XML bomb protection for Python stdlib modules

LICENSE=	PSFL
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

PORTDOCS=	*
DOCS_FILES=	CHANGES.txt README.txt

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCS_FILES:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
