# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: head/sysutils/pidof/Makefile 446376 2017-07-22 09:01:02Z amdmi3 $

PORTNAME=	pidof
PORTVERSION=	20050501
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/novel
DISTNAME=	${PORTNAME}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Tool which prints PID of given process name

LICENSE=	BSD2CLAUSE

CONFLICTS=	psmisc-1*

PLIST_FILES=	bin/pidof

post-patch:
	@${REINPLACE_CMD} 's/NOMAN/NO_MAN/ ; /LINKS/d' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pidof ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
