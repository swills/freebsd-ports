# Created by: Satoshi TAOKA <taoka@FreeBSD.org>
# $FreeBSD: head/japanese/prn/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	prn
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	japanese print
MASTER_SITES=	PORTS_JP
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Yet another converter from text file to postscript (with Japanese support)

RUN_DEPENDS=	kcc:japanese/kcc

do-install:
.for i in cmt prn psconv
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} ${i} ${STAGEDIR}${PREFIX}/bin)
.endfor
	${LN} -sf prn ${STAGEDIR}${PREFIX}/bin/cprn
	@${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} cmtdefs ${STAGEDIR}${DATADIR})
.for i in cmt cprn prn psconv
	(cd ${WRKSRC} && ${INSTALL_MAN} ${i}.jman \
		${STAGEDIR}${MANPREFIX}/man/man1/${i}.1)
.endfor
	(cd ${WRKSRC} && ${INSTALL_MAN} cmtdefs.jman \
		${STAGEDIR}${MAN5PREFIX}/man/man5/cmtdefs.5)

.include <bsd.port.mk>
