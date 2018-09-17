# Created by: db
# $FreeBSD: head/comms/nec2c/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	nec2c
PORTVERSION=	.9
PORTREVISION=	2
CATEGORIES=	comms hamradio
MASTER_SITES=	http://nec-archives.pa3kj.com/ \
		LOCAL/db
DISTNAME=	nec2c

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Used to calculate antenna patterns useful to ham radio

LIB_DEPENDS=	libccm.so:math/ccmath

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nec2c ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/Input/*.nec ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/Input/*.NEC ${STAGEDIR}${EXAMPLESDIR}
.include <bsd.port.mk>
