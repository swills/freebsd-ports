# Created by: schmidtcarl@earthlink.net
# $FreeBSD: head/deskutils/ljcharm/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	charm
PORTVERSION=	1.9.2
PORTREVISION=	2
CATEGORIES=	deskutils net
MASTER_SITES=	SF/lj${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	seawolf@marinewolf.net
COMMENT=	Menu-driven python-based livejournal client

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:2.7
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

PORTDOCS=	*
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/CHANGES.charm ${STAGEDIR}${DOCSDIR}/CHANGES
	${INSTALL_DATA} ${WRKSRC}/README.charm ${STAGEDIR}${DOCSDIR}/README
	${INSTALL_DATA} ${WRKSRC}/charm.html ${STAGEDIR}${DOCSDIR}/

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/sample.charmrc ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
