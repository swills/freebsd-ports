# Created by: ijliao
# $FreeBSD: head/textproc/re_graph/Makefile 414165 2016-04-28 09:03:22Z amdmi3 $

PORTNAME=	re_graph
PORTVERSION=	0.2
PORTREVISION=	3
CATEGORIES=	textproc
MASTER_SITES=	http://www.oualline.com/sw/re/
DISTNAME=	${PORTNAME:S/_/-/}_${PORTVERSION:S/.//}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Regular Expression Graphing Program

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	p5-GD>=0:graphics/p5-GD \
		p5-GD-Arrow>=0:graphics/p5-GD-Arrow

USES=		tar perl5
USE_PERL5=	run
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/re_graph
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/re_graph.pl ${STAGEDIR}${PREFIX}/bin/re_graph

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/re_graph.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/tut* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
