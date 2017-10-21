# Created by: Andrey Zakhvatov
# $FreeBSD: head/games/bogged/Makefile 452517 2017-10-20 12:25:51Z gahr $

PORTNAME=	bogged
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SUNSITE/games/strategy
EXTRACT_SUFX=	.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Word game for X Window System

DEPRECATED=		Tcl/Tk 8.4 is no longer maintained, please use 8.5+
EXPIRATION_DATE=	2017-11-20

RUN_DEPENDS=	wish8.4:x11-toolkits/tk84

EXTRACT_CMD=	${GZIP_CMD}
EXTRACT_BEFORE_ARGS=	-dc
EXTRACT_AFTER_ARGS=	> ${WRKSRC}/${PORTNAME}

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/bogged

post-patch:
	@${REINPLACE_CMD} -e 's|wish|wish8.4|' ${WRKSRC}/bogged

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
