# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/sysutils/ts/Makefile 424516 2016-10-23 11:56:46Z olgeni $

PORTNAME=	ts
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	http://vicerveza.homeunix.net/~viric/soft/ts/

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Serial task spooler

LICENSE=	GPLv2+

USES=		gmake
PLIST_FILES=	bin/ts \
		man/man8/ts.8.gz
PORTDOCS=	OBJECTIVES PROTOCOL README TRICKS

post-patch:
	${REINPLACE_CMD} -e '/^GLIBCFLAGS/d;/^CFLAGS/d'\
		${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's/\.TH TS 1/.TH TS 8/'\
		${WRKSRC}/ts.1

# Install man page as ts.8 to avoid conflict with security/openssl
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ts ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/ts.1 ${STAGEDIR}${MAN1PREFIX}/man/man8/ts.8
	${INSTALL} -d ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
