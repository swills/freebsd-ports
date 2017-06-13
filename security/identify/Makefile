# Created by: nsayer@quack.kfu.com
# $FreeBSD: head/security/identify/Makefile 413927 2016-04-24 09:02:54Z amdmi3 $

PORTNAME=	identify
PORTVERSION=	0.7
CATEGORIES=	security
MASTER_SITES=	http://ftp.nluug.nl/ftp/pub/pub/security/coast/daemons/pidentd/tools/ \
		http://www.scn.rain.com/pub/security/authent/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Client side ident protocol daemon wrapper

LICENSE=	PD

BUILD_DEPENDS=	${LOCALBASE}/lib/libident.a:security/libident

PORTDOCS=	README
PLIST_FILES=	libexec/identify

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/identify ${STAGEDIR}${PREFIX}/libexec

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
