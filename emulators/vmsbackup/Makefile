# Created by: Jonathan M. Bresler (jmb)
# $FreeBSD: head/emulators/vmsbackup/Makefile 453625 2017-11-06 15:35:22Z ak $

PORTNAME=	vmsbackup
PORTVERSION=	4.1.1
CATEGORIES=	emulators sysutils
MASTER_SITES=	LOCAL/erwin
DISTNAME=	VMSBACKUP4-1-1
EXTRACT_SUFX=	.ZIP

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Reads VMS BACKUP tapes

USES=		zip
ALL_TARGET=	vmsbackup
NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/vmsbackup man/man1/vmsbackup.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's#"getopt.h"#<unistd.h>#' ${WRKSRC}/getoptmain.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/vmsbackup ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/vmsbackup.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
