# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/security/pure-sfv/Makefile 491925 2019-02-02 09:36:08Z tobik $

PORTNAME=	pure-sfv
PORTVERSION=	0.3
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}
DISTNAME=	${PORTNAME}_${PORTVERSION}_src

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Utility to test and create .sfv files

LICENSE=	GPLv2

USES=		gmake

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/pure-sfv
PORTDOCS=	ReadMe.txt

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -E 's/^(CFLAGS|CC)[ +=]*/\1?=/' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
