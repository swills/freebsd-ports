# Created by: Larry Rosenman <ler@FreeBSD.org>
# $FreeBSD: head/net-mgmt/iog/Makefile 431147 2017-01-11 00:28:13Z ler $

PORTNAME=	iog
PORTVERSION=	1.03
PORTREVISION=	5
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.dynw.com/iog/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphs Byte Counts for switches/routers/etc

NO_BUILD=	yes
NO_ARCH=	yes
USES=		perl5 shebangfix tar:tgz
SHEBANG_FILES=	${PORTNAME}
PLIST_SUB=	VERSION=${PORTVERSION}
USERS=		iog

IOGDIR=		${PREFIX}/iog/iog-${PORTVERSION}

do-install:
	${FIND} ${WRKSRC} -name '*.bak' -or -name '*.orig' -delete
	${MKDIR} -m 755 ${STAGEDIR}${IOGDIR}
	${INSTALL} ${COPY} -m 0600 ${WRKSRC}/iog.cfg ${WRKSRC}/iog.cfg.sample
	${CP} -R ${WRKSRC}/* ${STAGEDIR}${IOGDIR}
	${LN} -sf ${IOGDIR} ${STAGEDIR}${PREFIX}/iog/iog

.include <bsd.port.mk>
